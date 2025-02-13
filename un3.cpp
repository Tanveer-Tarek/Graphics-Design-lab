#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");
    line(100,100,150,50);
    line(150,50,200,100);
    line(200,100,100,100);
    rectangle(200,200,100,100);
    rectangle(210,210,50,50);
    getch();
    closegraph();
    return 0;
}

