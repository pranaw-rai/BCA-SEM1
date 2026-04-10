#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int rollno;
    char gender;
    int marks;
};

int main()
{
    struct student s[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i+ 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Rollno: ");
        scanf(" %d", &s[i].rollno);

        printf("Enter Gender (m/f): ");
        scanf(" %c", &s[i].gender);

        printf("Enter marks: ");
        scanf(" %d", &s[i].marks);
    }

    printf("\n Records of Male Students: \n");
    for(i = 0; i < 10; i++)
    {
        if(s[i].gender == 'M' || s[i].gender == 'm')
        {
            printf("\nName: %s\n", s[i].name);
            printf("Roll No: %d\n", s[i].rollno);
            printf("Marks: %d\n", s[i].marks);
        }
    }
    return 0;
}

// Output

/*
Student 1
Enter name: Pranaw
Enter Rollno: 1
Enter Gender (m/f): 
m
Enter marks: 122

Student 2
Enter name: Ingma 
Enter Rollno: 2
Enter Gender (m/f): f
Enter marks: 23

Student 3
Enter name: Ramu
Enter Rollno: 3
Enter Gender (m/f): m
Enter marks: 23

Student 4
Enter name: Leela
Enter Rollno: 4
Enter Gender (m/f): f
Enter marks: 43

Student 5
Enter name: Rupesh
Enter Rollno: 6
Enter Gender (m/f): m
Enter marks: 12

Student 6
Enter name: Darpan
Enter Rollno: 90
Enter Gender (m/f): m
Enter marks: 23

Student 7
Enter name: Bhawana
Enter Rollno: 10
Enter Gender (m/f): f
Enter marks: 54

Student 8
Enter name: Isha
Enter Rollno: 54
Enter Gender (m/f): f
Enter marks: 64

Student 9
Enter name: Imon
Enter Rollno: 34
Enter Gender (m/f): m
Enter marks: 54

Student 10
Enter name: Bhumi
Enter Rollno: 8
Enter Gender (m/f): f
Enter marks: 34

 Records of Male Students: 

Name: Pranaw
Roll No: 1
Marks: 122

Name: Ramu
Roll No: 3
Marks: 23

Name: Rupesh
Roll No: 6
Marks: 12

Name: Darpan
Roll No: 90
Marks: 23

Name: Imon
Roll No: 34
Marks: 54
*/