//write c function to find whether a year is leap or not
#include<stdio.h>
int leap_year(int year)
{
    return ( year%4==0 && year%100!=0)||(year%400=0);
}
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);

    if(leap_year(year)){

        printf("%d is a leap year\n",year);}

    else
        printf("%d is not leap year\n",year);
return 0;
}


