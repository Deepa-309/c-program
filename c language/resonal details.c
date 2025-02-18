#include<stdio.h>
int main()
{
 char name[50],address[60];
 int age;
 printf("Enter your name:\n");
 scanf("%s",name);
 printf("Enter your age:\n");
 scanf("%d",&age);
 printf("Enter your address:\n");
 scanf(" %[^\n]",address);
 printf("---------------------------------------------------------------------\n");
 printf("                           BIO-DATA                                  \n");
 printf("---------------------------------------------------------------------\n");
 printf("Name   :%s\n",name);
 printf("Age    :%d\n",age);
 printf("Address:%s\n",address);
return 0;
}



