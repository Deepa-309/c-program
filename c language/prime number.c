#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number :\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
        if(i<n)
        {
            printf("Not prime");
        }
        else
        {
            printf("Prime");

        }
        return 0;
    }

}
