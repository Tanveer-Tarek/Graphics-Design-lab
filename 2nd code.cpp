#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");
    line(150,150,300,300);
    line(300,300,150,150);
    line(150,150,300,300);


    getch();
    closegraph();
    return 0;
}
