//Traffic Light
#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int c=2;
    int ball_x=100, ball_y=100, ball_radius=60;
    for(int  i=0; i<3; i++)
    {
        delay(1000);
        cleardevice();
        setcolor(c);
        setfillstyle(SOLID_FILL, c);
        circle(ball_x, ball_y, ball_radius);
        floodfill(ball_x, ball_y, c);
        c+=2;
        ball_y+=150;
    }
    getch();
    closegraph();
    return 0;
}


