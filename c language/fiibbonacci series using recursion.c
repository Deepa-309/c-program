#include<stdio.h>
int fib(int n,int n1,int n2)
{
   int n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("\n%d",n3);
    if(n>3)
    {
        fib(n-1,n1,n2);
    }
}
void main()
{
  int n,n1=0,n2=1;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("\n%d\n %d",n1,n2);
    fib(n,n1,n2);
}
