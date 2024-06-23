#include "Triangle.h"
#include <cmath>
#include <stdexcept>

Triangle::Triangle(const std::vector<Point2D>& vertices) : vertices(vertices) {
    if (vertices.size() != 3) {
        throw std::invalid_argument("Triangle must have exactly 3 vertices");
    }
}
