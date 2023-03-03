//Midpoint circle
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    //init
    int x,y,r,d;
    int center=200;
    r=150;
    x=0,y=r;
    d=1-r;

    //run till x<y
    while(x<=y)
    {
        putpixel(+x+center,+y+center,WHITE-1);
        putpixel(-x+center,-y+center,WHITE-2);
        putpixel(+x+center,-y+center,WHITE-3);
        putpixel(-x+center,+y+center,WHITE-4);
        putpixel(+y+center,+x+center,WHITE-5);
        putpixel(-y+center,-x+center,WHITE-6);
        putpixel(+y+center,-x+center,WHITE-7);
        putpixel(-y+center,+x+center,WHITE-8);
        if(d<0)
        {
            // choose pixel S  ( x+1, y )
            d+=2*x+3;
        }
        else
        {
            // choose pixel T  ( x+1, y-1 )
            d+=2*(x-y)+5;
            y--;
        }
        x++;
    }

    getch();
    closegraph();
}