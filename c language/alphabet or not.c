#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value ");
    scanf("%c",&ch);
    if ((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
    {
        printf("Its a alphabet");
    }
    else
    {
        printf("It is not a alphabet");
    }
    return 0;
}
