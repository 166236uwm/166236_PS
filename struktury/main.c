#include <stdio.h>
#include "LineSegment.h"

int main() {
    Point a = makePoint(1,1);
    Point b = makePoint(0,0);
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
    return 0;

}
