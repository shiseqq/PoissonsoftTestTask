#ifndef INTERSECTION_CHECKER_2D_H
#define INTERSECTION_CHECKER_2D_H

#include "Triangle.h"
#include "Orientation.h"

/**
 * @class IntersectionChecker2D
 * @brief Provides methods to check the intersection of two triangles in 2D space.
 */
class IntersectionChecker2D {
public:
    /**
    * @brief Checks if two triangles intersect.
    * @param t1 The first triangle.
    * @param t2 The second triangle.
    * @return true if the triangles intersect, false otherwise.
    */
    static bool checkIntersection(const Triangle& t1, const Triangle& t2) ;

private:
    static bool isLinesIntersect(const Point2D& p1, const Point2D& q1, const Point2D& p2, const Point2D& q2) ;
    static Orientation determineOrientation(const Point2D& p, const Point2D& q, const Point2D& r) ;
    static bool isOnSegment(const Point2D& p, const Point2D& q, const Point2D& r) ;
    static bool isPointInsideTriangle(const Point2D& p, const Triangle& t) ;
};

#endif // INTERSECTION_CHECKER_2D_H
