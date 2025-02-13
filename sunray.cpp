#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(200,200,50);
for(int i=1;i<=8;i+=200){
    for(int j=1;j<=8;j+=230);{
        line(i,0,j,0);
    }
}

getch();
closegraph();
return 0;
}


