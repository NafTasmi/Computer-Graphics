#include <graphics.h>
#include <bits/stdc++.h>
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, " ");

    setfillstyle(SOLID_FILL, RED);
    fillellipse(200, 200, 50, 50);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(300, 200, 50, 50);
    setfillstyle(SOLID_FILL, BLUE);
    fillellipse(250, 115, 50, 50);
    getch();
    closegraph();
    return 0;
}