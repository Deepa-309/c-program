 #include<stdio.h>
struct employ
{
    char name[30];
    int id;
    long int salary;
}E1,E2[5];
int main()
{
    int i;
    printf("Enter employ name:\n");
    scanf("%s",&E1.name);
    printf("%s\n",E1.name);

    printf("Enter your id:\n");
    scanf("%d",&E1.id);
    printf("%d\n",E1.id);

    printf("Enter your salary:\n");
    scanf("%ld",&E1.salary);
    printf("%ld\n",E1.salary);

    for(i=0;i<5;i++)
    {
        printf("Enter name for employ:\n");
        scanf("%s",&E2[i].name);
        printf("name=%s\n",E2[i].name);
    }

    for(i=0;i<5;i++)
    {
        printf("Enter  id for empoly:\n");
        scanf("%d",&E2[i].id);
        printf("ID=%d\n",E2[i].id);
    }

    for(i=0;i<5;i++)
    {
        printf("Enter salary for empoly %d:\n",i+1);
        scanf("%ld",&E2[i].salary);
        printf("%ld\n",E2[i].salary);
    }

}
