#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

signed main()
{
    // tetris
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // blocks
    vector<vector<bool>> blocks = {
        {1, 1, 1, 1},       // I
        {1, 1, 1, 0, 1},    // T
        {1, 1, 1, 1, 1},    // O
        {1, 1, 1, 0, 0, 1}, // L
        {1, 1, 1, 0, 1, 0}, // J
        {1, 1, 0, 0, 1, 1}, // S
        {0, 1, 1, 0, 1, 1}  // Z
    };

    // colors
    vector<int> colors = {
        RED, GREEN, BLUE, YELLOW, CYAN, MAGENTA, LIGHTBLUE};

    while (true)
    {
        int x = rand() % 7;
        int color = colors[x];
        vector<bool> block = blocks[x];

        // draw block
        for (int i = 0; i < block.size(); i++)
        {
            if (block[i])
            {
                // draw block with color and border
                setfillstyle(SOLID_FILL, color);
                bar(100 + 50 * (i % 4), 100 + 50 * (i / 4), 150 + 50 * (i % 4), 150 + 50 * (i / 4));
                setcolor(BLACK);
                rectangle(100 + 50 * (i % 4), 100 + 50 * (i / 4), 150 + 50 * (i % 4), 150 + 50 * (i / 4));
            }
        }

        // delay
        delay(1000);

        // clear block
        for (int i = 0; i < block.size(); i++)
        {
            if (block[i] == 1)
            {
                setfillstyle(SOLID_FILL, BLACK);
                bar(100 + 50 * (i % 4), 100 + 50 * (i / 4), 150 + 50 * (i % 4), 150 + 50 * (i / 4));
            }
        }
    }

    getch();
    closegraph();
    return 0;
}