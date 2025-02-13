#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    float x1=8, y1=10, x2=100, y2=300, s, x ,y, xi, yi, m, n;
    float dx=x2-x1, dy=y2-y1;
    if(abs(dx)>abs(dy))
        s=abs(dx);
    else
        s=abs(dy);
    xi=dx/s;
    yi=dy/s;
    x=x1;
    y=y1;
    for(int i=0; i<=s; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x=x+xi;
        y=y+yi;
    }
    x=x1;
    y=y1;
    for(int i=0; i<=s; i++)
    {
        delay(50);
        circle(x, y, 3);

        x=x+xi;
        y=y+yi;
    }
    getch();
    closegraph();
    return 0;
}
