#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <thread>
#include <chrono>

void bresenhamLine(int x0, int y0, int x1, int y1, std::vector<std::pair<int, int>>& points) {
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;

    while (true) {
        points.emplace_back(x0, y0); // Store the point

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

void moveCharacterAlongPath(const std::vector<std::pair<int, int>>& points) {
    for (const auto& point : points) {
        cleardevice(); // Clear the screen
        // Draw the character at the current point
        outtextxy(point.first, point.second, "*");
        delay(100); // Delay to visualize movement
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Adjust the path as necessary

    int x0, y0, x1, y1;

    // Input starting and ending points for the line
    std::cout << "Enter starting point (x0, y0): ";
    std::cin >> x0 >> y0;
    std::cout << "Enter ending point (x1, y1): ";
    std::cin >> x1 >> y1;

    // Store points along the line
    std::vector<std::pair<int, int>> points;
    bresenhamLine(x0, y0, x1, y1, points);

    // Move character along the path
    moveCharacterAlongPath(points);

    getch(); // Wait for a key press
    closegraph(); // Close the graphics window
    return 0;
}
