#include <stdio.h>
int main()
{
    int num, temp, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)

      {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
       }

    if (sum == num)
        {
        printf("%d is an Armstrong number.\n", num);
        }
    else
        {
        printf("%d is not an Armstrong number.\n", num);
        }

    return 0;
}



