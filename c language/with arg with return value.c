#include<stdio.h>
int add(int x,int y);
int main()
{
    int sum =add(34,67);
    printf("%d",sum);
}
int add(int x, int y)
{
  return x+y;
}

