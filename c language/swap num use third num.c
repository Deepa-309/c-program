#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value for a=");
    scanf("%d",&a);
    printf("enter the value for b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
