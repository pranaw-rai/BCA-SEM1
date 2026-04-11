#include <stdio.h>
#include <stdlib.h>

struct student {
    int rollno;
    char name[50];
};

int main()
{
    struct student s[3], s_read[3];
    FILE *fp;
    int i;

    // Open file in binary write mode
    fp = fopen("student.dat", "wb");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    // Input data
    printf("Enter details of 3 students:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i+1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf(" %49[^\n]", s[i].name);
    }

    // Write to file
    fwrite(s, sizeof(struct student), 3, fp);

    fclose(fp);

    // Open file in binary read mode
    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    // Read from file
    fread(s_read, sizeof(struct student), 3, fp);

    fclose(fp);

    // Display data
    printf("\nData read from file:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nRoll No: %d\n", s_read[i].rollno);
        printf("Name: %s\n", s_read[i].name);
    }

    return 0;
}

// OUtput

/*
Enter details of 3 students:

Student 1
Enter Roll No: 45
Enter Name: Mihu

Student 2
Enter Roll No: 12
Enter Name: Kalesh

Student 3
Enter Roll No: 19
Enter Name: Ujwal

Data read from file:

Roll No: 45
Name: Mihu

Roll No: 12
Name: Kalesh

Roll No: 19
Name: Ujwal
*/