#include<stdio.h>

struct student
{
    char name[25];
    int roll;
    float marks;
    char address[30];
};

int main()
{
    int n;
    printf("Enter the number of students: \n");
    scanf("%d",&n);

    struct student s[10];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the students details, name, roll, marks and address accordingly :\n");
        scanf("%s %d %f %S",s[i].name, &s[i].roll, &s[i].marks, s[i].address);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The students details are \n");
        printf("Name: %s\n",s[i].name);
        printf("Roll: %d\n",s[i].roll);
        printf("Marks: %.2f\n",s[i].marks);
        printf("Address: %s\n",s[i].address);
    }
}
    