#include <bits/stdc++.h>
#include <graphics.h>
void rotate(int *x, int *y, int r, int theta)
{
    *x = r * cos(theta * 3.14 / 180) + *x;
    *y = r * sin(theta * 3.14 / 180) + *y;
}
void drawRinnegan(int color)
{
    // fill lightgray background
    setbkcolor(LIGHTGRAY);
    cleardevice();

    setcolor(BLACK);

    int x = 200, y = 200;
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x, y, 102, 102);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, 100, 100);

    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x, y, 80, 80);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, 79, 79);

    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x, y, 60, 60);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, 59, 59);

    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x, y, 40, 40);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, 39, 39);

    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x, y, 15, 15);

    int r = 39;
    fillellipse(x, y - r, 8, 8);
    rotate(&x, &y, r, 30);
    fillellipse(x, y, 8, 8);
    x = y = 200;
    rotate(&x, &y, r, 150);
    fillellipse(x, y, 8, 8);

    x = y = 200;
    r = 59;
    fillellipse(x, y + r, 8, 8);
    rotate(&x, &y, r, 210);
    fillellipse(x, y, 8, 8);
    x = y = 200;
    rotate(&x, &y, r, -30);
    fillellipse(x, y, 8, 8);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawRinnegan(LIGHTBLUE);
    
    getch();
    closegraph();
}