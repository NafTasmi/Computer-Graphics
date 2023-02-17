// Breshenham's Circle Drawing Algorithm
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int getRand(int a, int b)
{
    return rand() % (b - a + 1) + a;
}
void draw(int x, int y, int r, int d)
{
    int di = 3 - 2 * r;
    int dx[] = {1, 1, -1, -1};
    int dy[] = {1, -1, 1, -1};
    while (x < y)
    {
        for (int i = 0; i < 4; i++)
        {
            putpixel(x * dx[i] + d, y * dy[i] + d, i + 1);
            putpixel(y * dx[i] + d, x * dy[i] + d, i + 1);
        }
        if (di < 0)
        {
            di += (4 * x + 6);
        }
        else
        {
            di += (4 * (x - y) + 10);
            y--;
        }
        x++;
        delay(5);
    }
}
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, " ");

    int x, y;
    int r = 70;
    int d = 200;
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    for (size_t orbit = 1; orbit <= 2; orbit++)
    {
        x = 0, y = r;
        draw(x, y, r, d);
        for (size_t orbital = 0; orbital < 2 * orbit; orbital++)
        {
            setfillstyle(SOLID_FILL, getRand(1, 15));
            fillellipse(d+dx[orbital]*r, d+dy[orbital]*r, 6, 6);
        }
        r += 25;
    }
    // show "Done" message at bottom of screen
    settextstyle(0, HORIZ_DIR, 2);
    outtextxy(10, 10, "Done");
    outtextxy(d-45, d-15, "Carbon");
    outtextxy(d-30, d+5, "atom");
    getch();
    closegraph();
}

// circle equation
// (x-h)^2 + (y-k)^2 = r^2
// hyperbola equation
// (x-h)^2 - (y-k)^2 = r^2