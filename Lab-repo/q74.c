#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x[7], y[7];
    int centerX = 300, centerY = 200;
    int radius = 100;

    // Calculate 7 vertices
    for(int i = 0; i < 7; i++) {
        float angle = 2 * 3.14159 * i / 7;
        x[i] = centerX + radius * cos(angle);
        y[i] = centerY + radius * sin(angle);
    }

    // Draw heptagon
    for(int i = 0; i < 7; i++) {
        line(x[i], y[i], x[(i+1)%7], y[(i+1)%7]);
    }

    getch();
    closegraph();
    return 0;
}


// Output

/*
c64.png
*/