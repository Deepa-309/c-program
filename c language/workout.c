//Biodata
#include <stdio.h>

#include <stdio.h>

int main() {
    int d, c, k, s;
    long long int v;
    char n[20], f[20], r[30], y[30], a;

    printf("Name: ");
    scanf("%s", n);
    printf("%s\n", n);

    printf("Father's name: ");
    scanf("%s", f);
    printf("%s\n", f);

    printf("Age: ");
    scanf("%d", &d);
    printf("%d\n", d);

    printf("Reg.no: ");
    scanf("%s", r);
    printf("%s\n", r);

    printf("Course: ");
    scanf("%s", y);
    printf("%s\n", y);

    printf("Gender (M/F): ");
    scanf(" %c", &a);
    printf("%c\n", a);

    printf("Cutoff: ");
    scanf("%d", &c);
    printf("%d\n", c);

    printf("12th mark: ");
    scanf("%d", &k);
    printf("%d\n", k);

    printf("10th mark: ");
    scanf("%d", &s);
    printf("%d\n", s);

    printf("Mobile No: ");
    scanf("%lld", &v);
    printf("%lld\n", v);

    char address[100];
    printf("Address: ");
    scanf(" %[^\n]", address);
    printf("%s\n", address);

    return 0;
}
