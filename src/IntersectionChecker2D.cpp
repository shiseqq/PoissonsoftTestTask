#include "IntersectionChecker2D.h"

bool IntersectionChecker2D::doLinesIntersect(const Point2D& p1, const Point2D& q1,
                                             const Point2D& p2, const Point2D& q2) {
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return true;

    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}

int IntersectionChecker2D::orientation(const Point2D& p, const Point2D& q, const Point2D& r) {
    float val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0) ? 1 : 2;
    // 0 - points are collinear
    // 1 - points form a clockwise rotation
    // 2 - points form a counterclockwise rotation
}

bool IntersectionChecker2D::onSegment(const Point2D& p, const Point2D& q, const Point2D& r) {
    if (q.x <= std::max(p.x, r.x) && q.x >= std::min(p.x, r.x) &&
        q.y <= std::max(p.y, r.y) && q.y >= std::min(p.y, r.y))
        return true;
    return false;
}

bool IntersectionChecker2D::isPointInsideTriangle(const Point2D& p, const Triangle& t) {
    int o1 = orientation(t.vertices[0], t.vertices[1], p);
    int o2 = orientation(t.vertices[1], t.vertices[2], p);
    int o3 = orientation(t.vertices[2], t.vertices[0], p);
    return (o1 == o2 && o2 == o3);
}

bool IntersectionChecker2D::checkIntersection(const Triangle& t1, const Triangle& t2) {
    // Tests the intersection of all pairs of sides of two triangles
    for (int i = 0; i < 3; ++i) {
        if (doLinesIntersect(t1.vertices[i], t1.vertices[(i + 1) % 3], t2.vertices[0], t2.vertices[1]) ||
            doLinesIntersect(t1.vertices[i], t1.vertices[(i + 1) % 3], t2.vertices[1], t2.vertices[2]) ||
            doLinesIntersect(t1.vertices[i], t1.vertices[(i + 1) % 3], t2.vertices[2], t2.vertices[0])) {
            return true;
        }
    }

    //Checks whether any vertex of one triangle is inside another triangle.
    if (isPointInsideTriangle(t1.vertices[0], t2) || isPointInsideTriangle(t2.vertices[0], t1)) {
        return true;
    }

    return false;
}
