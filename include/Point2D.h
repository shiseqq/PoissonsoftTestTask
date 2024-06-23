#ifndef POINT2D_H
#define POINT2D_H

/**
 * @class Point2D
 * @brief Represents a point in 2D space.
 */
class Point2D {
public:
    /**
     * @brief Constructs a Point2D object.
     * @param x The x-coordinate of the point.
     * @param y The y-coordinate of the point.
     */
    explicit Point2D(float x = 0, float y = 0) : x(x), y(y) {}
    float x, y; /**< The x and y coordinates of the point */
};

#endif // POINT2D_H
