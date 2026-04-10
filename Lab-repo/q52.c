#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[50];
    char address[100];
};

int main()
{
    struct student s[10], temp;
    int i , j;
    printf("Enter details of 10 students : \n");
    for(i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Address: ");
        scanf(" %[^\n]", s[i].address);
    }

    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++)
        {
            if(strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nStudents sorted by name:\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Address: %s\n", s[i].address);
    }
    return 0;
}

// Output

/*
Enter details of 10 students : 

Student 1
Enter ID: 123
Enter name: Hari
Enter Address: Itahari

Student 2
Enter ID: 3453
Enter name: Suman
Enter Address: Inaruwaaaa

Student 3
Enter ID: 345
Enter name: Manish
Enter Address: Dharan

Student 4
Enter ID: 534
Enter name: Prashant
Enter Address: Illam

Student 5
Enter ID: 234 
Enter name: Sashi
Enter Address: Itahari

Student 6
Enter ID: 125 
Enter name: Subash
Enter Address: Inaruwa

Student 7
Enter ID: 907
Enter name: Rupa
Enter Address: Jhumka

Student 8
Enter ID: 122
Enter name: Bhavin
Enter Address: Pakali

Student 9
Enter ID: 263
Enter name: Jhapa
Enter Address: Jhapa

Student 10
Enter ID: 163
Enter name: Mani
Enter Address: Itahari

Students sorted by name:

ID: 122
Name: Bhavin
Address: Pakali

ID: 123
Name: Hari
Address: Itahari

ID: 263
Name: Jhapa
Address: Jhapa

ID: 163
Name: Mani
Address: Itahari

ID: 345
Name: Manish
Address: Dharan

ID: 534
Name: Prashant
Address: Illam

ID: 907
Name: Rupa
Address: Jhumka

ID: 234
Name: Sashi
Address: Itahari

ID: 125
Name: Subash
Address: Inaruwa

ID: 3453
Name: Suman
Address: Inaruwaaaa
*/