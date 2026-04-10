#include<stdio.h>
int main()
{
    int arr1[100];
    int n, i, j, tmp;

    printf("Sort elements in descending order: \n");
    printf("\n-------------------------------------\n");

    printf("\nInput size of array: ");
    scanf(" %d", &n);

    printf("Input %d elements in an array: \n", n);
    for(i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf(" %d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if (arr1[i] < arr1[j]){

                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

    printf("\nElements of array sorted in descending order: \n");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr1[i]);
    }
    printf("\n");
}
// Output

/*
Sort elements in descending order: 

-------------------------------------

Input size of array: 5
Input 5 elements in an array: 
element - 0: 2
element - 1: 6
element - 2: 2
element - 3: 9
element - 4: 4

Elements of array sorted in descending order: 
 9 6 4 2 2
*/