#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(150,150,80);
circle(130,120,10);
circle(170,120,10);
arc(150,170,180,360,40);
arc(70,120,45,270,20);
arc(230,120,270,130,20);
getch();
closegraph();
return 0;
}

