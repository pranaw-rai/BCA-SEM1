#include<stdio.h>
int main()
{
    int arr1[100];
    int i, mx, mn, n;

    printf("\nFinding maximum & minimum : \n");
    printf("Input no. of elements to be stored in array: ");
    scanf(" %d", &n);
    printf("Input %d elements in array: \n", n);
    for(i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf(" %d", &arr1[i]);
    }

    mx = arr1[0];
    mn = arr1[1];

    for(i = 1; i < n; i++){
        if(arr1[i] > mx){
            mx = arr1[i];
        }
        if(arr1[i] < mn){
            mn = arr1[i];
        }
    }

    printf("Maximum element: %d\n", mx);
    printf("Minimum element: %d\n", mn);
    return 0;
}

// Output

/*

Finding maximum & minimum : 
Input no. of elements to be stored in array: 7
Input 7 elements in array: 
element - 0: 3
element - 1: 6
element - 2: 1
element - 3: 9
element - 4: 0
element - 5: 3
element - 6: 6
Maximum element: 9
Minimum element: 0

*/