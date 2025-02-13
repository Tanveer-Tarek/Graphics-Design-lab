#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(150,150,100);
circle(150,150,80);
circle(150,150,60);
circle(150,150,40);
circle(150,150,20);
getch();
closegraph();
}
