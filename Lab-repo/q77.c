#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    printf("Rectangle: \n");
    // Draw rectangle using diagonal points
    rectangle(0, 0, 100, 200);

    getch();
    closegraph();

    return 0;
}

// Output

/*
Rectangle:
q77.png
*/