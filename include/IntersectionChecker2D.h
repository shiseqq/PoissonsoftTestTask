#ifndef INTERSECTION_CHECKER_2D_H
#define INTERSECTION_CHECKER_2D_H

#include "Triangle.h"

class IntersectionChecker2D {
public:
    bool checkIntersection(const Triangle& t1, const Triangle& t2) const;

private:
    bool doLinesIntersect(const Point2D& p1, const Point2D& q1, const Point2D& p2, const Point2D& q2) const;
    int orientation(const Point2D& p, const Point2D& q, const Point2D& r) const;
    bool onSegment(const Point2D& p, const Point2D& q, const Point2D& r) const;
    bool isPointInsideTriangle(const Point2D& p, const Triangle& t) const;
};

#endif // INTERSECTION_CHECKER_2D_H
