#include <graphics.h>
#include <conio.h>
#include <iostream>

void bresenhamLine(int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;

    while (true) {
        putpixel(x0, y0, WHITE);

        if (x0 == x1 && y0 == y1) break;

        int err2 = err * 2;
        if (err2 > -dy) {
            err -= dy;
            x0 += sx;
        }
        if (err2 < dx) {
            err += dx;
            y0 += sy;
        }
    }
}

int main() {
    int gd = DETECT, gm;


    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    int x0, y0, x1, y1;


    std::cout << "Enter starting point (x0, y0): ";
    std::cin >> x0 >> y0;
    std::cout << "Enter ending point (x1, y1): ";
    std::cin >> x1 >> y1;

    bresenhamLine(x0, y0, x1, y1);

    getch();
    closegraph();
    return 0;
}
