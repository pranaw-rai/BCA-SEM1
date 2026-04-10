#include<stdio.h>
int main()
{
    int r, c, i, j;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf(" %d %d", &r, &c);

    printf("Enter elements of matrix: ");
    printf("\n");

    for(i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n Sum of each row: \n");
    for (i = 0; i < r; i++)
    {
        int sum = 0;
        for(j = 0; j < c; j++)
        {
            sum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, sum);
    }
    return 0;
}

// Output

/*
Enter number of rows and columns: 2
2
Enter elements of matrix: 
1
2
3
4

 Sum of each row: 
Row 1 sum = 3
Row 2 sum = 7
*/