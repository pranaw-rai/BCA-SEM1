#include<stdio.h>

void main()
{

    int arr1[3][3], i, j;
    printf("\nRead 2D, 3 x 3 size of matrix and print\n ");
    printf("\n-----------------------------------------\n");

    printf("Input elements in matrix: \n");
    for(i = 0;i < 3; i++){
        for(j = 0; j < 3; j++)
        {
            printf("element - %d %d: ", i, j);
            scanf(" %d", &arr1[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


// Output

/*
Read 2D, 3 x 3 size of matrix and print
 
-----------------------------------------
Input elements in matrix: 
element - 0 0: 1
element - 0 1: 4
element - 0 2: 8
element - 1 0: 2
element - 1 1: 6
element - 1 2: 2
element - 2 0: 0
element - 2 1: 3
element - 2 2: 5
The matrix is: 

1       4       8

2       6       2

0       3       5

*/