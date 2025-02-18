//write a function to read n values from user and to return the average of n number
#include<stdio.h>

float calculate_average(int n)//fun declaretion
{
    int sum=0;
    for( int i=0;i<n;i++)
    {
        int num;
        printf("enter number %d:",i+1);
        scanf("%d",&num);
        sum+=num;
    }
    return (float)sum/n;//fun definition
}
int main()
{
  int n;
  printf("enter the number of values:");
  scanf("%d",&n);
  float average=calculate_average(n);//fun calling
  printf("average:%.2f\n",average);
  return 0;

}

