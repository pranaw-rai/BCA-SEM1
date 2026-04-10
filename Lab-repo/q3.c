// Program to find area and perimeter of a square

#include<stdio.h>
int main() 
{
    float side, area, perimeter;
    printf("Enter the side length of square: ");
    scanf("%f", &side);
    area = side * side;
    perimeter = 4 * side;
    printf("Area of a square: %.2f\n", area);
    printf("Perimeter of a square: %.2f\n", perimeter);
    return 0;
}


// Output
/*
Enter the side length of square: 2
Area of a square: 4.00
Perimeter of a square: 8.00
*/