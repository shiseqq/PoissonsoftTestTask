#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>
#include "Point2D.h"

class Triangle {
public:
    explicit Triangle(const std::vector<Point2D>& vertices);
    std::vector<Point2D> vertices;
};

#endif // TRIANGLE_H
