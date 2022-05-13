#include "LineSegment.h"
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

LineSegment makeLineSegment(int ax, int ay, int bx, int by){
    LineSegment temp;

    temp.a.x = ax;
    temp.a.y = ay;
    temp.b.x = bx;
    temp.b.y = by;

    return temp;
}


LineSegment makeLineSegmentFromPoints(const Point *a, const Point *b){
    LineSegment temp;

    temp.a.x = a -> x;
    temp.a.y = a -> y;
    temp.b.x = b -> x;
    temp.b.y = b -> y;

    return temp;
}

void show(const LineSegment *s){
    printf("(%d, %d), (%d, %d)\n", s -> a.x, s -> a.y, s -> b.x, s -> b.y);
}

double length(const LineSegment *s){
    float ax = s -> a.x,
          ay = s -> a.y,
          bx = s -> b.x,
          by = s -> b.y;
    double len;

    len = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
    return len;
}

bool parallel(const LineSegment *s1, const LineSegment *s2){
    float a1x = s1 -> a.x,
            a1y = s1 -> a.y,
            b1x = s1 -> b.x,
            b1y = s1 -> b.y;
    float a2x = s2 -> a.x,
            a2y = s2 -> a.y,
            b2x = s2 -> b.x,
            b2y = s2 -> b.y;
    if(a == b)
        return true;
    return false;
}

bool perpendicular(const LineSegment *s1, const LineSegment *s2) {
    float a = (s1 -> a.x) / (s1 -> a.y);
    float b = (s2 -> a.x) / (s2 -> a.y);

    if(a == -b)
        return true;
    return false;
}
