#include<graphics.h>
#include<conio.h>
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rectangle(50,50,150,150);
        getch();
        closegraph();
        return 0;
}
