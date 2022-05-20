#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

typedef struct Triangle{
    Point a;
    Point b;
    Point c;
} Triangle;

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy);

Triangle makeTriangleFromPoints(const Point *a, const Point *b, const Point *c);

void show(const Triangle *s);

double area(const Triangle *s);

void move(Triangle *s, int dX, int dY);
#endif TRIANGLE_H
