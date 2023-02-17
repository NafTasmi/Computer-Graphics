// 3D transformation
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int ans = 0;
    initgraph(&gd, &gm, "");
    int maxx = getmaxx();
    int maxy = getmaxy();
    int midx = maxx / 2;
    int midy = maxy / 2;
    int x1 = 100;
    int y1 = 100;
    int x2 = 150;
    int y2 = 150;
    int depth = 25;
    setcolor(WHITE);
    line(0, midy, maxx, midy);
    line(midx, 0, midx, maxy);
    int color = 0;
    char colors[16][16] = {"BLACK", "BLUE", "GREEN", "CYAN", "RED", "MAGENTA", "BROWN", "LIGHTGRAY", "DARKGRAY", "LIGHTBLUE", "LIGHTGREEN", "LIGHTCYAN", "LIGHTRED", "LIGHTMAGENTA", "YELLOW", "WHITE"};
    for (int i = 1; i <= 16; i++)
    {
        setcolor(color);
        setfillstyle(SOLID_FILL, color);
        double angle = ((i * 22.5) * 3.14159 / 180)+10;
        int x1_ = x1 * cos(angle) - y1 * sin(angle);
        int y1_ = x1 * sin(angle) + y1 * cos(angle);
        int x2_ = x2 * cos(angle) - y2 * sin(angle);
        int y2_ = x2 * sin(angle) + y2 * cos(angle);
        bar3d(midx + x1_, midy - y1_, midx + x2_, midy - y2_, depth, 1);
        setcolor(WHITE);
        outtextxy(midx + x1_, midy - y1_, colors[i]);
        color++;
    }
    
    getch();
    closegraph();
    return 0;
}