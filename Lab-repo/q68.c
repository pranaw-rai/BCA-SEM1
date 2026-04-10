#include<stdio.h>

void toggleCase(char *str) {
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char str[] =  "Hello World";
    toggleCase(str);
    printf("%s\n", str);
    return 0;
}

// Output
// hELLO wORLD