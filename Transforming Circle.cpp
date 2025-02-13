#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

   cout<<"Enter X_old,Y_old:"<<endl;
   int x1,x2;
   cin>>x1>>x2;
   cout<<"Enter Tx,Ty:"<<endl;

   int x3,x4;
   cin>>x3>>x4;
   cout<<"Enter Radius"<<endl;
   int r;
   cin>>r;

   circle(x1,x2,r);
   circle(x1+x3,x2+x4,r);

    getch();
    closegraph();

}

