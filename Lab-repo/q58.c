#include<stdio.h>

struct measurement {
    int metre;
    int centimetre;
};

struct table {
    struct measurement length;
    struct measurement breadth;
    struct measurement height;
};

int main()
{
    int n, i;
    struct table t[100];
    printf("Enter number of tables: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nTable %d\n", i + 1);
        printf("Enter length(metre cm): ");
        scanf(" %d %d", &t[i].length.metre, &t[i].length.centimetre);

        printf("Enter Breadth(metre cm): ");
        scanf(" %d %d", &t[i].breadth.metre, &t[i].breadth.centimetre);

        printf("Enter height(metre cm): ");
        scanf(" %d %d", &t[i].height.metre, &t[i].height.centimetre);
    }
    printf("\nTable Dimensions: \n");
    for(i = 0; i < n; i++)
    {
        printf("\nTable %d: \n", i + 1);
        printf("Length: %d m %d cm\n", t[i].length.metre, t[i].length.centimetre);
        printf("breadth: %d m %d cm\n", t[i].breadth.metre, t[i].breadth.centimetre);
        printf("Height: %d m %d cm\n", t[i].height.metre, t[i].height.centimetre);
    }
    return 0;
}

// Output

/*

Enter number of tables: 3

Table 1
Enter length(metre cm): 34
76
Enter Breadth(metre cm): 23
34
Enter height(metre cm): 34
65

Table 2
Enter length(metre cm): 234
75
Enter Breadth(metre cm): 23
46
Enter height(metre cm): 24
8

Table 3
Enter length(metre cm): 3
45
Enter Breadth(metre cm): 7
23
Enter height(metre cm): 56
34

Table Dimensions: 

Table 1: 
Length: 34 m 76 cm
breadth: 23 m 34 cm
Height: 34 m 65 cm

Table 2: 
Length: 234 m 75 cm
breadth: 23 m 46 cm
Height: 24 m 8 cm

Table 3: 
Length: 3 m 45 cm
breadth: 7 m 23 cm
Height: 56 m 34 cm
*/