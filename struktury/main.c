#include <stdio.h>
#include "LineSegment.h"
#include "Triangle.h"
#include "DigitalClock.h"

int main() {
    Point a = makePoint(1,1);
    Point b = makePoint(0,0);
    Point c = makePoint(2, 0);
    LineSegment A = makeLineSegmentFromPoints(&b, &a);
    LineSegment B = makeLineSegment(0,-2,-2,0);
    show(&A);
    show(&B);
    printf("Length = %f\n", length(&A));
    if(parallel(&A, &B)){
        printf("Parallel\n");
    }else{
        printf("Not parallel\n");
    }
    if(perpendicular(&A, &B)){
        printf("Perpendicular\n");
    }else{
        printf("Not perpendicular\n");
    }
    printf("Segments are being moved by (10, 10) vector\n");
    moveL(&A, 10, 10);
    moveL(&B, 10, 10);
    showL(&A);
    showL(&B);

    Triangle C = makeTriangle(1, 1, 2, 0, 0, 0);
    Triangle D = makeTriangleFromPoints(&a, &b, &c);
    show(&C);
    show(&D);
    printf("Area of triangle C = %f\n", area(&C));
    printf("Area of triangle D = %f\n", area(&D));
    move(&C, 10, 10);
    move(&C, -10, -10);

    DigitalClock zegarek = makeDigitalClock(23, 3294);
    for(int i = 0; i < 1000; i++){
        incrementDefault(&zegarek);
        showD(&zegarek);
    }
    return 0;

}
