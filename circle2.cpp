// Midpoint circle algorithm
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
void draw(int x,int y,int r,int d)
{
    int di=1-r;
    int dx[]={1,1,-1,-1};
    int dy[]={1,-1,1,-1};
    while(x<=y)
    {
        for(int i=0;i<4;i++)
        {
            putpixel(x*dx[i]+d,y*dy[i]+d,GREEN);
            putpixel(y*dx[i]+d,x*dy[i]+d,DARKGRAY);
        }
        if(di<0)
        {
            di+=(2*x+3);
        }
        else
        {
            di+=(2*(x-y)+5);
            y--;
        }
        x++;
        delay(1);
    }
}
// Let's draw an omnitrix
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    int x,y;
    int r=1;
    int d=200;
    for(int i=0;i<100;i++)
    {
        x=0,y=r;
        draw(x,y,r,d);
        r++;
    }
    delay(2000);
    int cx1=130,cy1=130;
    int cx2=270,cy2=130;
    setcolor(GREEN);
    for(int i=0;i<120;i++)
    {
        line(cx1,cy1,d,i+100);
        line(cx2,cy2,d,i+100);
    }
    int cx3=130,cy3=270;
    int cx4=270,cy4=270;
    for(int i=0;i<120;i++)
    {
        line(cx3,cy3,d,d-i+100);
        line(cx4,cy4,d,d-i+100);
    }
    getch();
    closegraph();
}