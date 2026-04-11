#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    printf("\nEllipse: \n")
    // ellipse(center_x, center_y, start_angle, end_angle, x_radius, y_radius)
    ellipse(100, 100, 0, 360, 50, 75);

    getch();
    closegraph();

    return 0;
}

// Output

/*
Ellipse:
q76.png
*/
