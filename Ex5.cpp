//3D transformation
#include<stdio.h>
#include<bits/stdc++.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
 int gd=DETECT,gm;
 int ans=0;
while(ans!=4)
{
initgraph(&gd,&gm," ");
cleardevice();
cout<<"\n--------------Welcome to The Program--------------\n";
cout<<"\n1. Translation";
cout<<"\n2. Scaling";
cout<<"\n3. Rotation";
cout<<"\n4. Exit";
cout<<"\n\nEnter your choice : ";
cin>>ans;
Sleep(2);
cleardevice();
int ymax,xmax;
xmax=getmaxx();
ymax=getmaxy();
int xm,ym;
xm=xmax/2;
ym=ymax/2;
setcolor(RED);
bar3d(100,200,190,130,15,1);
xmax=getmaxx();
ymax=getmaxy();
int xmid=xmax/2;
int ymid=ymax/2;
setcolor(GREEN);
line(0,ymid,xmax,ymid);
line(xmid,0,xmid,ymax);
if(ans==1)
{
int tx,ty;

outtextxy(0,0,"\n enter transaction factor \n");
cin>>tx>>ty;
bar3d(100+tx,200+ty,190+tx,130+ty,15,1);
Sleep(5);
}
else if (ans==2)
{
int sx,sy;
outtextxy(0,0,"\n enter scalling factor \n");
cin>>sx>>sy;
bar3d((100*sx),(20*sy),(90*sx),(60*sy),20,5);
Sleep(5);
}else if(ans==3)
{
int t;
outtextxy(0,0,"\n enter angle \n");
cin>>t;
t=t*(3.14/180);
int x1=((100*cos(t))-(20*sin(t)));
int y1=((100*sin(t))+(20*cos(t)));
int x2=((90*cos(t))-(60*sin(t)));
int y2=((90*sin(t))+(60*cos(t)));
bar3d(x1,y1,x2,y2,20,5);
Sleep(5);
}
else if(ans==4)
exit(1);
else
{
outtextxy(50,50,"\n\nEnter a valid choice : ");
}
}
getch();
//colsegraph();
}
