#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>
#include "Point2D.h"

/**
 * @class Triangle
 * @brief Represents a triangle in 2D space.
 */

class Triangle {
public:
    /**
     * @brief Constructs a Triangle object with given vertices.
     * @param vertices A vector of 3 points representing the vertices of the triangle.
     * @throws std::invalid_argument if the number of vertices is not equal to 3.
     */
    explicit Triangle(const std::vector<Point2D>& vertices);

    std::vector<Point2D> vertices; /**< The vertices of the triangle */
};

#endif // TRIANGLE_H
