#include <graphics.h>

int main()
{
    int g = 0, f;
    initgraphic(&g, &f, "");
    circle(100, 80, 20);
    closegraph();
    return 0;
}