#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
/*circle(150,150,100);
circle(150,150,80);
circle(150,150,60);
circle(150,150,40);
circle(150,150,20);*/
for(int i=20;i<=100;i+=20){

    setcolor(RED);
    circle(150,150,i);


}
line(145,150,145,450);
line(155,150,155,450);
line(145,150,155,150);
line(145,450,155,450);

getch();
closegraph();
return 0;
}

