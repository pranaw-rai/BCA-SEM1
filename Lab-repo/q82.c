#include <stdio.h>

int main() {
    int age;
    int category;

    printf("Enter age: ");
    scanf("%d", &age);

    // Convert age into category number
    if (age >= 0 && age <= 1)
        category = 1;   // Infant
    else if (age >= 2 && age <= 3)
        category = 2;   // Toddler
    else if (age >= 4 && age <= 12)
        category = 3;   // Child
    else if (age >= 13 && age <= 19)
        category = 4;   // Teenager
    else if (age >= 20 && age <= 49)
        category = 5;   // Adult
    else
        category = 6;   // Old

    // Switch statement
    switch(category) {

        case 1:
            printf("Infant\n");
            break;

        case 2:
            printf("Toddler\n");
            break;

        case 3:
            printf("Child\n");
            break;

        case 4:
            printf("Teenager\n");
            break;

        case 5:
            printf("Adult\n");
            break;

        case 6:
            printf("Old\n");
            break;

        default:
            printf("Invalid age\n");
    }

    return 0;
}

// Output

/*
Enter age: 4
Child

Enter age: 70
Old

Enter age: 1
Infant

Enter age: 15
Teenager
*/