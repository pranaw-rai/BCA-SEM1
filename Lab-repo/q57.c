#include<stdio.h>
#include<string.h>

struct data {
    int day;
    int month;
    int year;
};

struct employee {
    int id;
    char name[50];
    float salary;
    struct data dob;
};

int main()
{
    int n, i, j;
    struct employee emp[100], temp;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i+ 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter salary: ");   
        scanf("%f", &emp[i].salary);

        printf("Enter Date of Birth(dd mm yyy): ");
        scanf(" %d %d %d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }


    printf("\nEmployees sorted by name: \n");
    for(i = 0; i < n; i++)
    {
        printf("\nName: %s", emp[i].name);
        printf("\nDOB: %02d/%02d/%04d", emp[i].dob.day, emp[i].dob.month, emp[i].dob.year);
        printf("\nSalary: %2f\n", emp[i].salary);
    }

    return 0;
}


// Output

/*
Enter number of employees: 3

Employee 1
Enter ID: 23
Enter name: Hari
Enter salary: 20000
Enter Date of Birth(dd mm yyy): 22 03 1998

Employee 2
Enter ID: 45
Enter name: Shyam
Enter salary: 30000
Enter Date of Birth(dd mm yyy): 04 12 1989

Employee 3
Enter ID: 67
Enter name: Maya
Enter salary: 10000
Enter Date of Birth(dd mm yyy): 01 05 2006

Employees sorted by name: 

Name: Hari
DOB: 22/03/1998
Salary: 20000.000000

Name: Maya
DOB: 01/05/2006
Salary: 10000.000000

Name: Shyam
DOB: 04/12/1989
Salary: 30000.000000
*/