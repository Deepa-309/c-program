#include<stdio.h>
void add(int x,int y);
int main()
{
    add(34,56);
}
void add(int x,int y)
{
    int sum;
    sum=x+y;
    printf("%d",sum);
}
