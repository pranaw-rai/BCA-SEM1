#include<stdio.h>
int main()
{
    int i, j, arr1[50][50], sum = 0, n;
    printf("\nFinding sum of right diagonal of a matrix: \n");
    printf("-----------------------------------------------\n");

    printf("Input size of square matrix: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("element - %d %d: ", i, j);
            scanf("%d", &arr1[i][j]);
            if(i == j)
            {
                sum = sum + arr1[i][j];
            }
        }
    }
    printf("The matrix is: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf(" %4d", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Additional of the right diagonal elements is: %d\n", sum);
    return 0;
}

// Output

/*

Finding sum of right diagonal of a matrix: 
-----------------------------------------------
Input size of square matrix: 3
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
    1    2    3
    4    5    6
    7    8    9
Additional of the right diagonal elements is: 15
*/