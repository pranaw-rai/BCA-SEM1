#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *marks, sum = 0, avg;

    // Input number of courses
    printf("Enter number of courses: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    marks = (float *)malloc(n * sizeof(float));

    // Check allocation
    if (marks == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input marks
    printf("Enter marks of %d courses:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &marks[i]);
        sum += marks[i];   // accumulate sum
    }

    // Calculate average
    avg = sum / n;

    // Output results
    printf("\nTotal marks = %.2f\n", sum);
    printf("Average marks = %.2f\n", avg);

    // Free memory
    free(marks);

    return 0;
}

// OUtput

/*
Enter number of courses: 3
Enter marks of 3 courses:
38
15
50

Total marks = 103.00
Average marks = 34.33

*/