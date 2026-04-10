#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[50];
    int rollno;
    char class_name[20];
    char subject[50];
    int marks;
};

int main()
{
    int n, i;
    int total_marks = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student *s = (struct student *)malloc(n*sizeof(struct student));
    if (s == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i+1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter RollN0: ");
        scanf("%d", &s[i].rollno);

        printf("Enter class: ");
        scanf(" %[^\n]", s[i].class_name);

        printf("Enter subject: ");
        scanf(" %[^\n]", s[i].subject);
        
        printf("Enter marks: ");
        scanf(" %d", &s[i].marks);

        total_marks += s[i].marks;
    }

    printf("\nTotal marks obtained by all students: %d\n", total_marks);
    free(s);
    return 0;
}


// Output

/*
Enter number of students: 3

Student 1
Enter name: Pranaw
Enter RollN0: 21
Enter class: 13
Enter subject: DL
Enter marks: 38

Student 2
Enter name: Ingma
Enter RollN0: 20
Enter class: 11
Enter subject: Maths
Enter marks: 88

Student 3
Enter name: Rama
Enter RollN0: 11
Enter class: 8
Enter subject: Science
Enter marks: 56

Total marks obtained by all students: 182
*/