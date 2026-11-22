#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void modify_salary(struct Employee *emp, float new_salary)
{
    emp->salary = new_salary;
}

int main()
{
    struct Employee emp;
    struct Employee *ptr = &emp;

    printf("Enter employee ID: ");
    scanf("%d%*c", &(ptr->id));

    printf("Enter employee name: ");
    scanf("%[^\n]", ptr->name);

    printf("Enter current salary: ");
    scanf("%f", &(ptr->salary));

    printf("\n=== Initial Employee Details ===\n");
    printf("ID     : %d\n", ptr->id);
    printf("Name   : %s\n", ptr->name);
    printf("Salary : $%.2f\n", ptr->salary);

    float updated_salary;
    printf("\nEnter new salary to update: ");
    scanf("%f", &updated_salary);

    modify_salary(ptr, updated_salary);

    printf("\n=== Updated Employee Details ===\n");
    printf("ID     : %d\n", ptr->id);
    printf("Name   : %s\n", ptr->name);
    printf("Salary : $%.2f\n", ptr->salary);

    return 0;
}
