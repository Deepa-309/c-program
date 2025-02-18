#include<stdio.h>
struct child
{
    int a;
    char c;
};
struct parent
{
    int b;
    struct child c1;
};
int main()
{
    struct parent p1={25,195,'A'};
    printf("p1.b=%d\n",p1.b);
    printf("p1.c1.a=%d\n",p1.c1.a);
    printf("p1.c1.c=%c",p1.c1.c);
}
