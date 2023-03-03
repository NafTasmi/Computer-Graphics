//Breshenhams line drawing algorithm
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cout<<"Enter (X1,Y1): ";
    cin>>x1>>y1;
    cout<<"Enter (X2,Y2): ";
    cin>>x2>>y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int dx=x2-x1;
    int dy=y2-y1;

    int x=x1;
    int y=y1;
    int d=0;
    int p=2*dy-dx;

    while(x<=x2)
    {
        if(p<0)
        {
            putpixel(x,y,RED);
            p+=2*dy;
        }
        else
        {
            putpixel(x,y,RED);
            p+=2*(dy-dx);
            y++;
        }
        x++;
    }

    getch();
    closegraph();
}