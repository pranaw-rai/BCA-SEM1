// Program to find area and perimeter of triangle

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    float s, area, perimeter;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s -a) * (s - b) * (s - c));

    printf("Perimeter of triangle: %.2f\n", perimeter);;
    printf("Area of triangle: %.2f\n", area);
    return 0;

}


// Output

/*
Enter three sides of triangle: 2
3
2
Perimeter of triangle: 7.00
Area of triangle: 1.98
*/