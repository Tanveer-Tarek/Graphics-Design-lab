#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


   int Ax,Bx,Cx,Dx,Ay,By,Cy,Dy;

   cout<<"Enter Ax,Ay:"<<endl;
   cin>>Ax>>Ay;
  cout<<"Enter Bx,By:"<<endl;
   cin>>Bx>>By;
   cout<<"Enter Cx,Cy:"<<endl;
   cin>>Cx>>Cy;
  cout<<"Enter Dx,Dy:"<<endl;
   cin>>Dx>>Dy;


 rectangle(Ax,Ay,Cx,Cy);

  Ax=Ax+250;
  Ay=Ay+250;
  Cx=Cx+250;
  Cy=Cy+250;

  rectangle(Ax,Ay,Cx,Cy);



    getch();
    closegraph();

}
/* 100 100
   100 200
   200 200
   200 100 */

