#ifndef INTERSECTION_CHECKER_2D_H
#define INTERSECTION_CHECKER_2D_H

#include "Triangle.h"

class IntersectionChecker2D {
public:
    static bool checkIntersection(const Triangle& t1, const Triangle& t2) ;

private:
    static bool doLinesIntersect(const Point2D& p1, const Point2D& q1, const Point2D& p2, const Point2D& q2) ;
    static int orientation(const Point2D& p, const Point2D& q, const Point2D& r) ;
    static bool onSegment(const Point2D& p, const Point2D& q, const Point2D& r) ;
    static bool isPointInsideTriangle(const Point2D& p, const Triangle& t) ;
};

#endif // INTERSECTION_CHECKER_2D_H
