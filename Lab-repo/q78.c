#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    printf("Square: \n");
    // Square from (100,100) with side 100
    rectangle(100, 100, 200, 200);

    getch();
    closegraph();

    return 0;
}

// Output

/*
Square: 
q78.png
*/