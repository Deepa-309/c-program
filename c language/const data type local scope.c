#include<stdio.h>
int main()
{
    const float pi=3.14;
    float area,r;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("\n the area of the circle is %f",area);
    return 0;
}
