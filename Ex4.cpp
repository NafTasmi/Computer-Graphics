//Breshenham's Line Algorithm

#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main() {
    int gd = DETECT, gm;
    int x1,y1,x2,y2;

    cout<<"Enter the starting points: "<<endl;
    cin>>x1>>y1;

    cout<<"Enter the ending points: "<<endl;
    cin>>x2>>y2;

    initgraph(&gd, &gm, " ");

    int dx = x2-x1;
    int dy = y2-y1;

    int m = dy/dx;

    int x = x1;
    int y = y1;

    int d = 0;
    int p = 2*dy - dx;

    while(x<=x2)
    {
        if(p<0)
        {
            putpixel(x,y,WHITE);
            p+=2*dy;
        }
        else
        {
            putpixel(x,y,WHITE);
            p+=2*(dy-dx);
            y++;
        }
        x++;
    }
    getch();
    closegraph();

}
