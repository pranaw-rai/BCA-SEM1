    #include<stdio.h>
    #include<math.h>
    int main()
    {
        int n, i;
        double x, sum = 0;
        printf("Enter the value of x: ");
        scanf("%lf", &x);

        printf("Enter the number of terms (n >= 0): ");
        scanf("%d", &n);
        if(n < 0)
        {
            printf("Invalid Input! n must be non - negative\n");
            return 1;
        }
        for(i = 0; i <= n; i++){
            sum += pow(-1, i) * pow(x, i);
    
        }
        printf("Sum of the series is: %.4lf\n", sum);
        return 0;
    }


    // Output

    /*
    Enter the value of x: 5
Enter the number of terms (n >= 0): 6
Sum of the series is: 13021.0000
    */