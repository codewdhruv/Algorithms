#include<stdio.h>
#include<string.h>
int k=0;
void swap(char *b,char *c)
{
 char d;
 d=*b;
 *b=*c;
 *c=d;
}
void permute(char *a,int l,int r)
{
 int i;
 if(l==r)
 {
  printf("%d %s\n",++k,a);
  }
  else
  {
   for(i=l;i<=r;i++)
   {
    swap(a+l,a+i);
    permute(a,l+1,r);
    swap(a+l,a+i);
   }
  }
  
  }
  void main()
  {
   char s[28];
   FILE *f;
   f=fopen("input.txt","r");
   fscanf(f,"%s",s);//read the string in input.txt
   fclose(f);
   int n=strlen(s);
   permute(s,0,n-1);
  }
