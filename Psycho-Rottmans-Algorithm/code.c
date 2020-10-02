#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int seclarge=-1,largest=0,n,e[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e[i]);
        if(e[i]>largest)
            largest=e[i];
    }
    for(int i=0;i<n;i++)
    {
        if((e[i]>seclarge)&&(e[i]<largest))
            seclarge=e[i];
    }
    if(seclarge==-1)
        printf("There is no second largest count of work hours");
    else
    {
        for(int i=0;i<n;i++)
        {
            if(e[i]==seclarge)
            { 
                printf("%d\n%d",e[i],i+1);
                break;
            }
            
        }
    }
    return 0;
}
