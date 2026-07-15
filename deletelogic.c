#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

void addStudent(struct Student s[], int n);
void displayStudent(struct Student s[], int n);
void deleteStudent(struct Student s[], int *n, int roll);

int main()
{
    int n, roll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    addStudent(students, n);

    printf("\nStudent Details:\n");
    displayStudent(students, n);

    printf("\nEnter roll number to delete: ");
    scanf("%d", &roll);

    deleteStudent(students, &n, roll);

    printf("\nUpdated Student Details:\n");
    displayStudent(students, n);

    return 0;
}

void addStudent(struct Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%29s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudent(struct Student s[], int n)
{
    if (n == 0)
    {
        printf("No students available.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}

void deleteStudent(struct Student s[], int *n, int roll)
{
    int i, j;
    int found = 0;

    for (i = 0; i < *n; i++)
    {
        if (s[i].roll == roll)
        {
            found = 1;

            for (j = i; j < *n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            (*n)--;

            printf("\nStudent deleted successfully.\n");
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent with roll number %d not found.\n", roll);
    }
}
