#include<stdio.h>
int main()
{
    int n, i, j;
    int matrix[100][100];

    printf("Enter size of the matrix(n x n): ");
    scanf(" %d", &n);

    printf("Enter elements of the matrix: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
    }

    printf("The matrix you entered: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int sumSquares = 0;
    for(i = 0; i < n; i++)
    {
        sumSquares += matrix[i][i] * matrix[i][i];
    }

    printf("Sum of squareas of principal diagonal elements = %d\n", sumSquares);
    return 0;
}

// Output

/*
Enter size of the matrix(n x n): 3
Enter elements of the matrix: 
1
2
3
3
2
1
4
5
6
The matrix you entered: 
1       2       3
3       2       1
4       5       6
Sum of squareas of principal diagonal elements = 41
*/