#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, NULL);

    printf("\nRadius: 50, Centre: 200, 300\n")

    // Draw circle: center (200,300), radius 50
    circle(200, 300, 50);

    // Hold the screen
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}


// Output


/*
Radius: 50, centre: 200, 300
q75.png
*/