#ifndef INTERSECTION_CHECKER_2D_H
#define INTERSECTION_CHECKER_2D_H

#include "Triangle.h"

class IntersectionChecker2D {
public:
    bool checkIntersection(const Triangle& t1, const Triangle& t2) const;
};

#endif // INTERSECTION_CHECKER_2D_H
