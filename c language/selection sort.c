#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    printf("Enter the number of terms in the arrary:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered array:\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
   for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }


    printf("\nThe sorted array:\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
}






