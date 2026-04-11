#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));

    // Check if allocation failed
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("You entered:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}

// OUtpiu
 /*
 Enter number of elements: 5
Enter 5 elements:
4
5
6
2
4
You entered:
4 5 6 2 4 
 */