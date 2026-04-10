#include<stdio.h>

void main()
{
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;
    printf("Enter Addittion of two matrix: \n");
    printf("\n-------------------------------------\n");
    printf("\nInput the size of matrix(less than 5): \n");
    scanf(" %d", &n);

    printf("\nInput elements in first matrix: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++){
            printf("element - %d %d: ", i, j);
            scanf(" %d", &arr1[i][j]);
        }
    }

     printf("\nInput elements in second matrix: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("element - %d %d: ", i, j);
            scanf(" %d", &brr1[i][j]);
        }
    }

     printf("\nThe frist matrix s: \n");
    for(i = 0; i < n; i++)
    {
        printf("\n");
        for(j = 0; j < n; j++){
            printf(" %d\t", arr1[i][j]);
        }
    }

     printf("\nThe second matrix is: \n");
    for(i = 0; i < n; i++)
    {
        printf("\n");
        for(j = 0; j < n; j++)
        {
            printf(" %d\t", brr1[i][j]);
        }
    }

     for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            crr1[i][j] = arr1[i][j] + brr1[i][j];
        }
    }

    printf("\nThe Addittion of two matrix: \n");
    for(i = 0; i < n; i++)
    {
        printf("\n");
        for(j = 0; j < n; j++)
        {
            printf(" %d\t", crr1[i][j]);
        }
    }

    printf("\n\n");
}

// Output

/**
 * 
 Enter Addittion of two matrix: 

-------------------------------------

Input the size of matrix(less than 5): 
3

Input elements in first matrix: 
element - 0 0: 2
element - 0 1: 3
element - 0 2: 4
element - 1 0: 7
element - 1 1: 2
element - 1 2: 9
element - 2 0: 1
element - 2 1: 7
element - 2 2: 0

Input elements in second matrix: 
element - 0 0: 6
element - 0 1: 2
element - 0 2: 7
element - 1 0: 1
element - 1 1: 1
element - 1 2: 1
element - 2 0: 9
element - 2 1: 8
element - 2 2: 7

The frist matrix s: 

 2       3       4
 7       2       9
 1       7       0
The second matrix is: 

 6       2       7
 1       1       1
 9       8       7
The Addittion of two matrix: 

 8       5       11
 8       3       10
 10      15      7

 */