#include <math.h> 
#include <stdio.h>

void insertionsort(int a[100],int n) 
{
    int k,key;
    
    for(int j=1;j<n;j++)
    {
        key=a[j];
        k=j-1;
        while(k>=0 && a[k]>key)
        {
            a[k+1]=a[k];
            k=k-1;
        }
        a[k+1]=key;
    }
    
}
void printarray(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    
}

int main()
{
    int n;
    int a[100];
    printf("Enter the limit of number");
    scanf("%d",&n);
    printf("Enter the number");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printarray(a,n);
}