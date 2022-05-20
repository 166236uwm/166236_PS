#include "Triangle.h"
#include <stdio.h>

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy){
    Triangle temp;
    temp.a.x = ax;
    temp.a.y = ay;
    temp.b.x = bx;
    temp.b.y = by;
    temp.c.x = cx;
    temp.c.y = cy;

    return temp;
}

Triangle makeTriangleFromPoints(const Point *a, const Point *b, const Point *c){
    Triangle temp;
    temp.a.x = a -> x;
    temp.a.y = a -> y;
    temp.b.x = b -> x;
    temp.b.y = b -> y;
    temp.c.x = c -> x;
    temp.c.y = c -> y;

    return temp;
}

void show(const Triangle *s){
    printf("(%d, %d), (%d, %d), (%d, %d)\n",
           s -> a.x, s -> a.y,
           s -> b.x, s -> b.y,
           s -> c.x, s -> c.y);
}

double area(const Triangle *s){
    double p = 0.5 * ((s -> b.x - s -> a.x) * (s -> c.y - s -> a.y) - (s -> b.y - s -> a.y) * (s -> c.x - s -> a.x));
    if(p < 0)
        p *= -1;
    return p;
}

void move(Triangle *s, int dX, int dY){
    s -> a.x += dX;
    s -> b.x += dX;
    s -> c.x += dX;

    s -> a.y += dY;
    s -> b.y += dY;
    s -> c.y += dY;
}