#ifndef LINESEGMENT_H
#define LINESEGMENT_H

#include "point.h"
#include <stdbool.h>

typedef struct LineSegment {
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by);

LineSegment makeLineSegmentFromPoints(const Point *a, const Point *b);

// wy ́swietla ko ́nce odcinka na ekranie
void show(const LineSegment *s);

// podaje długo ́s ́c odcinka
double length(const LineSegment *s);

// sprawdza czy podane odcinki s  ̨a równoległe
bool parallel(const LineSegment *s1, const LineSegment *s2);

// sprawdza czy podane odcinki s  ̨a prostopadłe
bool perpendicular(const LineSegment *s1, const LineSegment *s2);
// przesuwa odcinekvoidmove(LineSegment*s,intdeltaX,intdeltaY);
// Napisz program testujący napisane funkcje.

#endif //LINESEGMENT_H
