#include<stdio.h>
struct address
{
    int door_no;
    char street[30];
    char city[20];
    int pincode;
};
struct student
{

    int roll_no;
    char name[20];
    struct address s;
};
int main()
{
    struct student s1;
    printf("enter the roll_no");
    scanf("roll_no=%d\n",&s1.roll_no);
    printf("enter the student name:");
    scanf("name=%s",&s1.name);
    printf("enter the address of door_no");
    scanf("door_no=%s",&s1.s.door_no);
    printf("enter the street name");
    scanf("%s",&s1.s.street);
    printf("enter the city");
    scanf("%s",&s1.s.city);
    scanf("%d",&s1.s.pincode);
    printf("s1.roll_no=%d\n",s1.roll_no);
    printf("s1.name=%s\n",s1.name);
    printf("s1.s.door_no=%d\n",s1.s.door_no);
    printf("s1.s.street=%s\n",s1.s.street);
    printf("s1.s.city=%s\n",s1.s.city);
    printf("s1.s.pincode=%d",s1.s.pincode);
}
