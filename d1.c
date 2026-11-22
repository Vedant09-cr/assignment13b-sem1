#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks[3];
    float total;
    float average;
    char grade;
};

int main()
{
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter student name: ");
    scanf("%[^\n]%*c", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &(ptr->roll_no));

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &(ptr->marks[0]), &(ptr->marks[1]), &(ptr->marks[2]));

    ptr->total = ptr->marks[0] + ptr->marks[1] + ptr->marks[2];
    ptr->average = ptr->total / 3.0f;

    if (ptr->average >= 90.0f)
    {
        ptr->grade = 'A';
    }
    else if (ptr->average >= 75.0f)
    {
        ptr->grade = 'B';
    }
    else if (ptr->average >= 50.0f)
    {
        ptr->grade = 'C';
    }
    else
    {
        ptr->grade = 'F';
    }

    printf("\n=== Student Report Card ===\n");
    printf("Name         : %s\n", ptr->name);
    printf("Roll Number  : %d\n", ptr->roll_no);
    printf("Marks        : %.2f, %.2f, %.2f\n", ptr->marks[0], ptr->marks[1], ptr->marks[2]);
    printf("Total Marks  : %.2f / 300\n", ptr->total);
    printf("Average Marks: %.2f%%\n", ptr->average);
    printf("Grade        : %c\n", ptr->grade);

    return 0;
}
