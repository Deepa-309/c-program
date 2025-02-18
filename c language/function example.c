#include<stdio.h>
void greeting();//fun declaretion
int main()
{
    printf("good\n");
    greeting();// fun calling
    greeting();
    greeting();
    return 0;
}
void greeting()//fun definition
{
    printf("welcome\n");
}

