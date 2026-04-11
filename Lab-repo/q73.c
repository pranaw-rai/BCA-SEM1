#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    char section[10];
    char address[100];
};

// 🔹 Add student (Write)
void addStudent() {
    FILE *fp = fopen("student.txt", "a");
    struct student s;

    if(fp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter section: ");
    scanf(" %9[^\n]", s.section);

    printf("Enter address: ");
    scanf(" %99[^\n]", s.address);

    fprintf(fp, "%s,%s,%s\n", s.name, s.section, s.address);
    fclose(fp);

    printf("Record added!\n");
}

// 🔹 Display all students (Read)
void displayStudents() {
    FILE *fp = fopen("student.txt", "r");
    struct student s;

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\nStudent Records:\n");
    while(fscanf(fp, " %49[^,],%9[^,],%99[^\n]\n", s.name, s.section, s.address) != EOF) {
        printf("\nName: %s\nSection: %s\nAddress: %s\n", s.name, s.section, s.address);
    }

    fclose(fp);
}

// 🔹 Search student
void searchStudent() {
    FILE *fp = fopen("student.txt", "r");
    struct student s;
    char searchName[50];
    int found = 0;

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("Enter name to search: ");
    scanf(" %49[^\n]", searchName);

    while(fscanf(fp, " %49[^,],%9[^,],%99[^\n]\n", s.name, s.section, s.address) != EOF) {
        if(strcmp(s.name, searchName) == 0) {
            printf("\nRecord Found:\n");
            printf("Name: %s\nSection: %s\nAddress: %s\n", s.name, s.section, s.address);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Record not found!\n");

    fclose(fp);
}

// 🔹 Delete student
void deleteStudent() {
    FILE *fp = fopen("student.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct student s;
    char deleteName[50];
    int found = 0;

    if(fp == NULL || temp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter name to delete: ");
    scanf(" %49[^\n]", deleteName);

    while(fscanf(fp, " %49[^,],%9[^,],%99[^\n]\n", s.name, s.section, s.address) != EOF) {
        if(strcmp(s.name, deleteName) != 0) {
            fprintf(temp, "%s,%s,%s\n", s.name, s.section, s.address);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("student.txt");
    rename("temp.txt", "student.txt");

    if(found)
        printf("Record deleted!\n");
    else
        printf("Record not found!\n");
}

// 🔹 Main menu
int main() {
    int choice;

    while(1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Output

/*
--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 1
Enter name: Pranaw
Enter section: A
Enter address: Itahari-19
Record added!

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 2

Student Records:

Name: Pranaw
Section: A
Address: Itahari-19

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 1
Enter name: Kapil
Enter section: B
Enter address: Khanar
Record added!

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 1
Enter name: Dipen
Enter section: A
Enter address: Morang
Record added!

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 3
Enter name to search: Kapil

Record Found:
Name: Kapil
Section: B
Address: Khanar

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 4
Enter name to delete: Pranaw
Record deleted!

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 2

Student Records:

Name: Kapil
Section: B
Address: Khanar

Name: Dipen
Section: A
Address: Morang

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 3
Enter name to search: Pranaw
Record not found!

--- Student Record System ---
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter choice: 5
*/