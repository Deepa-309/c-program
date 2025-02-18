#include<stdio.h>
int main()
{
    int num,rev=0,remainder;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("The orginal number=%d\n",num);
    while(num!=0)
    {
     remainder=num%10;
     rev=rev*10+remainder;
     num/=10;
    }
    printf("The reversed number=%d\n",rev);
    return 0;
}
