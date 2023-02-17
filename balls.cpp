#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
void drawB()
{
    int NIP = 7;
    setfillstyle(SOLID_FILL, NIP);
    fillellipse(200, 200 + 10, 10, 10);
    fillellipse(300, 200 + 10, 10, 10);
    // outline
    arc(200, 200, 180, 340, 50);
    arc(300, 200, 200, 360, 50);
}
int getDir()
{
    int dir = rand() % 6;
    return dir<3 ? dir-4 : dir-1;
}
class Ball
{
public:
    int x;
    int y;
    int r;
    int dirx = getDir();
    int diry = getDir();
    int color;
    void draw();
    void move();
    void checkCollision(int windowx, int windowy);
};
Ball makeBall(int x, int y, int r, int color)
{
    Ball ball;
    ball.x = x;
    ball.y = y;
    ball.r = r;
    ball.color = color;
    return ball;
}
void Ball::draw()
{
    setfillstyle(SOLID_FILL, this->color);
    fillellipse(this->x, this->y, this->r, this->r);
}
void Ball::move()
{
    this->x += this->dirx;
    this->y += this->diry;
    checkCollision(getmaxx(), getmaxy());
}
void Ball::checkCollision(int windowx, int windowy)
{
    if (this->x + this->r > windowx or this->x - this->r < 0)
    {
        this->dirx *= -1;
    }
    if (this->y + this->r > windowy-40 or this->y - this->r < 0)
    {
        this->diry *= -1;
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int points[8] = {10, 10, 10, 30, 40, 30, 40, 10};
    char *label = new char[2];
    for (int i = 0; i < 16; i++)
    {
        itoa(i, label, 10);
        setfillstyle(SOLID_FILL, i);
        fillpoly(4, points);
        outtextxy(points[0] + 7, points[1] + 25, label);
        for (int j = 0; j < 8; j += 2)
        {
            points[j] += 30;
        }
    }
    int startx = 10;
    int starty = 10;
    int windowx = getmaxx();
    int windowy = getmaxy();
    cout << windowx << " " << windowy << endl;
    Ball balls[16];
    for (int i = 0; i < 16; i++)
    {
        balls[i] = makeBall(startx, starty, 10, i);
        startx = rand() % (windowx - 20) + 10;
        starty = rand() % (windowy - 20) + 10;
    }
    while (true)
    {
        cleardevice();
        for (int i = 0; i < 16; i++)
        {
            balls[i].draw();
            balls[i].move();
        }
        delay(10);
        // for (int i = 0; i < 3000000; i++)
        //     int _ = 10 % 3;
    }
    getch();
    closegraph();
    return 0;
}