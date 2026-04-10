#include<stdio.h>
int main()
{
    int arr1[50][50], brr1[50][50], i, j, r, c;
    printf("\nTranspose of a matrix: \n");
    printf("--------------------------------\n");

    printf("Input rows and col of a matrix: ");
    scanf("%d %d", &r, &c);

    printf("Input elements in the matrix: ");
    printf("\n");
    for(i = 0; i < r; i++)
    {
        for( j = 0; j < c; j++)
        {
            printf("element - %d %d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nThe matrix is: \n");
    for(i = 0; i < r; i++)
    {
        printf("\n");
        for(j = 0; j < c; j ++)
        {
            printf("%d\t", arr1[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            brr1[j][i] = arr1[i][j];
        }
    }

    printf("\nThe transpose of a matrix is: \n");
    for(i = 0; i < c; i++)
    {
        printf("\n");
        for(j = 0; j < r; j++)
        {
            printf("%d\t", brr1[i][j]);
        }
    }
    printf("\n");
    return 0;
}

// Output

/*
Transpose of a matrix: 
--------------------------------
Input rows and col of a matrix: 3
3
Input elements in the matrix: 
element - 0 0: 1
element - 0 1: 2
element - 0 2: 3
element - 1 0: 4
element - 1 1: 5
element - 1 2: 6
element - 2 0: 7
element - 2 1: 8
element - 2 2: 9

The matrix is: 

1       2       3
4       5       6
7       8       9
The transpose of a matrix is: 

1       4       7
2       5       8
3       6       9
*/