#include <stdio.h>
#include <math.h>
#include "point.h"

Point makePoint(int x, int y)
{
    Point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

void showPoint(const Point *p)
{
    printf("<%d, %d>", p->x, p->y);
}

void movePoint(Point *p, int deltaX, int deltaY)
{
    p->x += deltaX;
    p->y += deltaY;
}

double square(double a)
{
    return a * a;
}

double points_distance(const Point *p, const Point *q)
{
    return sqrt(square(p->x - q->x) + square(p->y - q->y));
}

