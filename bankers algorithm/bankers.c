#include <stdio.h>
#include <stdlib.h>

//gobal variables
int n, m, i, j, c, tot_res[10], avail_res[10];
char inst_id[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//file variables
FILE *fp, *fop;

//structure for process
typedef struct process
{
    int id, order, stat;
    int alloc[10], need[10], max[10];
} p;
p *proc;

//calcutating the available resources
void calc_avail_res(int m, int n, p *proc)
{
    int i, j, tot_alloc[10] = {0};
    //int array[0] = {0};
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            tot_alloc[j] += (proc + i)->alloc[j];
        }
    }
    // printf("\ntotal alloc: %d\n\n", tot_alloc[1]);

    for (j = 0; j < n; j++)
    {
        avail_res[j] = tot_res[j] - tot_alloc[j];
    }
}

void disp_proc(p *proc)
{
    printf("process\t\tMAX\t\t\tALLOC\t\t\tNEED\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%c", inst_id[j]);
        }
    }
    printf("\n---------------------------------------------------------------------------");
    for (i = 0; i < m; i++)
    {
        printf("\nP%d\t", (proc + i)->id);

        for (j = 0; j < n; j++)
        {
            printf("%d\t", (proc + i)->max[j]);
        }

        for (j = 0; j < n; j++)
        {
            printf("%d\t", (proc + i)->alloc[j]);
        }
        for (j = 0; j < n; j++)
        {
            printf("%d\t", (proc + i)->need[j]);
        }
        printf("\n---------------------------------------------------------------------------");
    }
}

//display availble of each instance of the resources
void disp_avail_res()
{
    printf("\n\n available resources:\n\n");
    for (j = 0; j < n; j++)
    {
        printf("%c\t", inst_id[j]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {

        printf("%d\t", avail_res[i]);
    }
}

//safty sequennce checking function
void safseq(int m, int n, p *proc)
{ //////////////////////
    //printf("\nreached here  1111\n");

    disp_avail_res();

    printf("\n");
    int finish = 0, sel_proc, k, ord = 0, count = 100, flag;
    while (count > 0)
    {

        for (i = 0; i < m; i++)
        {
            if ((proc + i)->stat == -1)
            {
                flag = 0;
                for (j = 0; j < n; j++)
                {
                    if ((proc + i)->need[j] > avail_res[j])
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        //sel_proc = i;
                        flag = 1;
                    }
                }

                if (flag == 1)
                {
                    for (k = 0; k < n; k++)
                    {
                        (avail_res[k]) += (proc + i)->alloc[k];
                    }
                    (proc + i)->order = ord;
                    (proc + i)->stat = 1;
                    ord++;
                    finish++;
                    printf("\t->\tp%d", (proc + i)->id);
                }
            }
        }
        count--;
    }

    if (finish == m)
        printf("\nrequest granded\n");

    else
        printf("\nrequest denied!\n");

    for (i = 0; i < m; i++)
    {

        (proc + i)->stat = -1;
        (proc + i)->order = -1;
        finish = 0;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
void req_alloc(int m, int n, p *proc, int *req_res, int temp_pid)
{
    int flag = 0;
    int id = -1;

    for (i = 0; i < m; i++)
    {
        if ((proc + i)->id == temp_pid)
        {
            for (j = 0; j < m; j++)
            {
                if (req_res[j] <= (proc + i)->need[j] && req_res[j] <= avail_res[j])
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                for (j = 0; j < n; j++)
                {
                    (proc + i)->alloc[j] += req_res[j];
                    avail_res[j] -= req_res[j];
                    (proc + i)->need[j] -= req_res[j];
                }
                disp_proc(proc);
                safseq(m, n, proc);
              //  printf("\n\nreached here!!!!!\n\n");
                break;
            }
            else
            {
                printf("\n\nrequest denied!!\n");
            }
        }
        //printf("\n\nflag = %d \n\n", flag);
    }
}

////reading file function
void readfile(FILE *fp, p *proc, int m, int n)
{

    if ((fp = fopen("process.txt", "r")) == NULL)
    {
        printf("\nerror opening file!\n");
        exit(0);
    }
    else
    {

        for (i = 0; i < m; i++)
        {
            fscanf(fp, "%d\t", &(proc + i)->id);

            for (j = 0; j < n; j++)
            {
                fscanf(fp, "%d", &c);
                (proc + i)->max[j] = c;
            }

            for (j = 0; j < n; j++)
            {
                fscanf(fp, "%d", &c);
                (proc + i)->alloc[j] = c;
            }
            for (j = 0; j < n; j++)
            {
                (proc + i)->need[j] = (proc + i)->max[j] - (proc + i)->alloc[j];
            }
            (proc + i)->stat = -1;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    printf("\n no. of res   :");
    scanf("%d", &n);
    printf("\ntotal instance:\n");
    for (i = 0; i < n; i++)
    {
        printf("%c :", inst_id[i]);
        scanf("%d", &tot_res[i]);
    }

    printf("\nno of processes  :");
    scanf("%d", &m);
    ////allocation of processes
    proc = (p *)malloc(m * sizeof(p));

    ///////////////////////////////////////
    readfile(fp, proc, m, n);
    //////////////////////////////////////
    disp_proc(proc);
    ///////////////////////////////////////
    calc_avail_res(m, n, proc);
    //////////////////////////////////////

    disp_avail_res();

    ////////////////////////////////////////////
    safseq(m, n, proc);
    ////////////////////////////////////////////

    printf("\n");
    int req_id;
    printf("\nenter process id and request:\np_id:");
    scanf("%d", &req_id);
    printf("request of P%d\n", req_id);
    int req_res[10];
    for (i = 0; i < n; i++)
    {
        printf("%c : ", inst_id[i]);
        scanf("%d", &req_res[i]);
    }
    //printf("\nreached here \n");
    calc_avail_res(m, n, proc); ////////////////////////
    //////////////////////////////////////////////////////
    req_alloc(m, n, proc, req_res, req_id);
    /////////////////////////////////////////////////////
    //safseq(m, n, proc);
    fclose(fp);
    return (0);
}
