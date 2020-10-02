#include<stdio.h>
void checkPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0)
            return;
    }
    printf("%d\t",n);
}

void main(){
    int low,high;
    scanf("%d%d",&low,&high);
    printf("Prime numbere are:\n");
    for(int i=low;i<=high;i++){
        if(i<=1) continue;
        checkPrime(i);
    }
}