 /*#include <stdio.h>
 int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
 }
/*
/*#include <stdio.h>

int main() {
    // Write C code here

    printf("%s\n", __DATE__);
    printf("%s", __TIME__);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator from user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error! Division by zero.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a decimal number: ");
    scanf("%lf", &num);

    printf("Ceiling of %.2lf is %.2lf\n", num, ceil(num));
    printf("Floor of %.2lf is %.2lf\n", num, floor(num));

    return 0;
}*/

#include <stdio.h>

int main() {
    int num, sum = 0, original,digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum+= digit*digit;
        num /= 10;
    }

    if (sum == original)
        printf("neon number\n");
    else
        printf("Not neon number\n");

    return 0;
}


