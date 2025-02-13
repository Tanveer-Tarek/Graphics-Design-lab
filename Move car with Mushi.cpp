#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x1=10, y1=20, x2=100, y2=80, a=100, b=40, c= 140 ,d =80;
    rectangle(x1, y1, x2, y2);
    rectangle(a, b, c, d);
    int l=100, m=90, n=10, f=40, g=90, h=10;
    circle(l, m, n);
    circle(f, g, h);
    for( ; ; )
    {
        delay(50);
        cleardevice();
        rectangle(x1, y1, x2, y2);
        rectangle(a, b, c, d);
        circle(l, m, n);
    circle(f, g, h);
        x1++;
        x2++;
        a++;
        c++;
        l++;
        f++;
    }

    getch();
    closegraph();
    return 0;
}

