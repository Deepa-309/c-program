#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("D:\\c program\\file.txt","r");
    fprintf(fptr,"i am fine");
    char c[50];
    fgets(c,50,fptr);
    printf("%s",c);
    fclose(fptr);
    return 0;
}
