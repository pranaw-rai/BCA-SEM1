#include<stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    int id;
    struct date dob;
};

int main()
{
    struct student s[10];
    int i;

    printf("Enter details of 10 students: \n");
    for(i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Date of Birth(dd mm yyy): ");
        scanf(" %d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
    }

    printf("\n Student Details: \n");
    for(i = 0; i < 10; i++)
    {
        printf("\nID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("DOB: %02d/%02d/%04d\n", s[i].dob.day, s[i].dob.month, s[i].dob.year);
    }
    return 0;
}


// Outputs

/*
Enter details of 10 students: 

Student 1
Enter ID: 12
Enter name: Hari
Enter Date of Birth(dd mm yyy): 22 02 2005

Student 2
Enter ID: 23
Enter name: Shyam
Enter Date of Birth(dd mm yyy): 12 05 2006

Student 3
Enter ID: 32
Enter name: Ram
Enter Date of Birth(dd mm yyy): 14 09 2003

Student 4
Enter ID: 45
Enter name: Muskan
Enter Date of Birth(dd mm yyy): 23 12 2005

Student 5
Enter ID: 67
Enter name: Rekha
Enter Date of Birth(dd mm yyy): 02
10
2006

Student 6
Enter ID: 15
Enter name: Pema
Enter Date of Birth(dd mm yyy): 18 05
2006

Student 7
Enter ID: 78
Enter name: Mukesh
Enter Date of Birth(dd mm yyy): 30 01 2007

Student 8
Enter ID: 27
Enter name: Manish
Enter Date of Birth(dd mm yyy): 08 05 2005

Student 9
Enter ID: 89
Enter name: Hemant
Enter Date of Birth(dd mm yyy): 30 07 2009

Student 10
Enter ID: 34
Enter name: Puja
Enter Date of Birth(dd mm yyy): 09 04 2004

 Student Details: 

ID: 12
Name: Hari
DOB: 22/02/2005

ID: 23
Name: Shyam
DOB: 12/05/2006

ID: 32
Name: Ram
DOB: 14/09/2003

ID: 45
Name: Muskan
DOB: 23/12/2005

ID: 67
Name: Rekha
DOB: 02/10/2006

ID: 15
Name: Pema
DOB: 18/05/2006

ID: 78
Name: Mukesh
DOB: 30/01/2007

ID: 27
Name: Manish
DOB: 08/05/2005

ID: 89
Name: Hemant
DOB: 30/07/2009

ID: 34
Name: Puja
DOB: 09/04/2004
*/