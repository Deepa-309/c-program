#include<stdio.h>
int main()
{
    int id;
    float units;
    char name[20];
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("Enter your customer id:\n");
    scanf(" %d",&id);
    printf("Enter the units consumed:\n");
    scanf(" %f",&units);
    printf("\n\n===============================\n");
    printf("            BILL RECIPT            \n");
    printf("==================================\n");
    printf("Name      :%s\n",name);
    printf("Id number :%d\n",id);
    if(units<=199)
    {
        printf("your bill amount= Rs.%.2f",units*1.20);
    }
    else if(units>=200&&units<400)
    {
      printf("your bill amount= Rs.%.2f",units*1.50);
    }
    else if(units>=400&&units<600)
    {
      printf("your bill amount= Rs.%.2f",units*1.80);
    }
    else if(units>=600)
    {
        printf("your bill amount= Rs.%.2f",units*2.00);
    }
}



