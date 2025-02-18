#include<stdio.h>
const float pi=3.14;
int main()
{
    float area,r;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("\n the area of the circle is %f",area);
    return 0;
}
