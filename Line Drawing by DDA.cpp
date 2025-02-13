#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
int main()
{
    using namespace std;

    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");
    int x1=50,x2=100,y1=350,y2=505;
    int dx,dy;
    float steps;

    dx=x2-x1;
    dy=y2-y1;

steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

int xinc=dx/steps;
int yinc=dy/steps;
float x=x1;
float y=y1;

for(int i=0;i<=steps;i++){

    putpixel(round(x),round(y),WHITE);
    x+=xinc;
    y+=yinc;
    setcolor(WHITE);
    circle(x,y,2);
    setcolor(BLACK);
    circle(x,y,2);
    delay(100);


}

    getch();
    closegraph();
    return 0;
}
