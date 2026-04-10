#include<stdio.h>
#include<stdlib.h>

struct employee {
    int id;
    char name[50];
    int age;
    float salary;
    char position[50];
    char address[100];
};

int main()
{
    int n, i;
    float total_salary = 0.0, avg_salary;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee *Emp = (struct employee *)malloc(n*sizeof(struct employee));
    if (Emp == NULL)
    {
        printf("Memory Allocation failed\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &Emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", Emp[i].name);

        printf("Enter Age: ");
        scanf("%d", &Emp[i].age);
        
        printf("Enter Salary: ");
        scanf("%f",&Emp[i].salary);

        printf("Enter Position: ");
        scanf(" %[^\n]", Emp[i].position);

        printf("Enter Address: ");
        scanf(" %[^\n]", Emp[i].address);

        total_salary += Emp[i].salary;
    }

    avg_salary = total_salary / n;
    printf("\nAverage salary  of %d employees: %.2f\n", n, avg_salary);
    free(Emp);
    return 0;
}


// Output

/*
Enter number of employees: 3

Employee 1
Enter ID: 23
Enter Name: Maya
Enter Age: 23
Enter Salary: 10000
Enter Position: Help desk
Enter Address: Itahari 19

Employee 2
Enter ID: 56
Enter Name: Muna
Enter Age: 20
Enter Salary: 11000
Enter Position: Front desk
Enter Address: Itahari 13

Employee 3
Enter ID: 64
Enter Name: Mina
Enter Age: 25
Enter Salary: 13000 
Enter Position: Help desk
Enter Address: Inaruwa 1

Average salary  of 3 employees: 11333.33
*/