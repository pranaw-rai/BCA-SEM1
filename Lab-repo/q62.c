#include<stdio.h>
#define MAX 100

void inputMatrix(int matrix[MAX][MAX], int r, int c, char name)
{
    printf("Enter elements of a matrix %c:\n", name);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int r, int c, char name)
{
    printf("\nMatrix %c:\n", name);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumMatrices(int A[MAX][MAX],int B[MAX][MAX], int sum[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()
{
    int r, c;
    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX];
    printf("Enter number of rows and columns: ");
    scanf(" %d %d", &r, &c);

    inputMatrix(A, r, c, 'A');
    inputMatrix(B, r, c, 'B');

    sumMatrices(A, B, sum, r, c);
    displayMatrix(A, r, c, 'A');
    displayMatrix(B, r, c, 'B');
    displayMatrix(sum, r, c, 'S');
    return 0;

}
sum
// Output

/*
Enter number of rows and columns: 2
2
Enter elements of a matrix A:
1
2
2
1
Enter elements of a matrix B:
3
4
4
3

Matrix A:
1       2
2       1

Matrix B:
3       4
4       3

Matrix S:
4       6
6       4
*/

