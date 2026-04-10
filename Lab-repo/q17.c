// find sum of series 1 + 3 + 5 + .... n + .... // Question nunber 17 - (15 - 16) > due
#include<stdio.h>
int main()
{
    int i, n, sum = 0, c_val = 0;
    printf("Enter the nth value upto find :");
    scanf("%d", &n);

    if (n <= 0){
        printf("Invalid Ouput!\n");
    }

    for(i = 1; i <= n; i++)
    {
        c_val = 2 * i - 1;
        sum += c_val;
    }
    printf("The sum of series is : %d", sum);
    return 0;
}

// Output

/*
Enter the nth value upto find :3
The sum of series is : 9
*/