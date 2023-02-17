// draw a car
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
void drawCar(int x,int y)
{
    setfillstyle(SOLID_FILL,RED);
    bar(x,y,x+100,y+50);
    setfillstyle(SOLID_FILL,BLACK);
    bar(x+20,y-20,x+80,y);
    setfillstyle(SOLID_FILL,WHITE);
    bar(x+30,y-30,x+70,y-20);
    setfillstyle(SOLID_FILL,WHITE);
    bar(x+40,y-40,x+60,y-30);
    setfillstyle(SOLID_FILL,WHITE);
    bar(x+50,y-50,x+50,y-40);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    int x = 0;
    int y = 200;
    while(1)
    {
        cleardevice();
        drawCar(x,y);
        x += 10;
        if(x > getmaxx())
        {
            x = 0;
        }
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}