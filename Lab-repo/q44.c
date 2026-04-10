#include<stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and column of matrix A: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter rows and column of matrix B: ");
    scanf(" %d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication is not possible\n");
        return 1;
    }
    int A[r1][c1], B[r2][c2], c[r1][c2];

    printf("Enter elements of matrix A: \n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B: \n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix A: \n");
    {
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf(" %4d", A[i][j]);
            }
            printf("\n");
        }
    }

    printf("\nMatrix B: \n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf(" %4d", B[i][j]);
        }
        printf("\n");
    }

    // Initialize c

    for(i = 0; i < r1; i++){

        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k < c1; k++)
            {
                c[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("\nResult matrix: \n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j <c2; j++)
        {
            printf(" %4d", c[i][j]);
            
        }
        printf("\n");
    }

    return 0;
    }

    // Output

    /*
    Enter rows and column of matrix A: 2
3
Enter rows and column of matrix B: 
3
2
Enter elements of matrix A: 
1
2
3
4
5
6
Enter elements of matrix B: 
6
7
8
9
1
2

Matrix A: 
    1    2    3
    4    5    6

Matrix B: 
    6    7
    8    9
    1    2

Result matrix: 
   25   31
   70   85
    */