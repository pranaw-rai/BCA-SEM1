#include<stdio.h>
int main()
{
    int arr1[100];
    int n, i, j, tmp;

    printf("\n\nSort elements in descending order: \n");

    printf("\nInput size of array: ");
    scanf(" %d", &n);

    printf("Input elements in an array: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d - element: ", i);
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if (arr1[j] < arr1[i]){

                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

    printf("\nElements of array sorted in ascending order: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");
    return 0;
}
// Output

/*

Sort elements in descending order: 

Input size of array: 5
Input elements in an array: 
0 - element: 6
1 - element: 2
2 - element: 5
3 - element: 0
4 - element: 2

Elements of array sorted in ascending order: 
0 2 2 5 6 

*/