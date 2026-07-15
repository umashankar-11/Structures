#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};


void addStudent(struct Student *s,int n);
void displayStudent(struct Student *s,int n);
void modifyRollByName(struct Student students[], int n, char name[]);

int main()
{
    int n, i;
    char searchName[30];

    printf("Enter number of students: ");
    scanf("%d", &n);

   struct Student students[n];
    
    addStudent(&students,n);

     printf("\nEnter student name to modify rollnumber: ");
     scanf("%s", searchName);
 

     modifyRollByName(students, n, searchName);


     printf("\nUpdated Student Details\n");

    
        displayStudent(&students,n);


    return 0;
}



void addStudent(struct Student *s,int n)
{
     for(int i=0;i<n;i++)
    {
      printf("enter the students to be added %d\n",i+1);
      printf("Enter Roll: ");
      scanf("%d", &s->roll);

      printf("Enter Name: ");
      scanf("%s", s->name);

      printf("Enter Marks: ");
      scanf("%f", &s->marks);
    }
}



void displayStudent(struct Student *s,int n)
{
    for(int i=0;i<n;i++)
    {
      printf("updated student details are %d\n",i+1);
      printf("\nRoll  : %d", s->roll);
      printf("\nName  : %s", s->name);
      printf("\nMarks : %.2f\n", s->marks);
    }
}



void modifyRollByName(struct Student students[], int n, char name[])
{
    int i;
    int newRoll;
    int found = 0;


    for(i = 0; i < n; i++)
    {
        if(strcmp(students[i].name, name) == 0)
        {
            printf("\nStudent Found");

            printf("\nEnter new roll number: ");
            scanf("%d", &newRoll);


            // modifying original structure
            students[i].roll = newRoll;


            found = 1;
            break;
        }
    }


    if(found == 0)
    {
        printf("\nStudent not found\n");
    }
}

