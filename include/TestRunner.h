#ifndef TEST_RUNNER_H
#define TEST_RUNNER_H

#include "IntersectionChecker2D.h"
#include <vector>
#include <string>
#include <memory>
#include <sstream>

/**
 * @class TestRunner
 * @brief Runs tests to check the intersection of triangles using an IntersectionChecker2D.
 */
class TestRunner {
public:
    /**
     * @brief Runs tests from the specified file.
     * @param filename The name of the file containing test cases.
     */
    void runTests(const std::string& filename);
private:
    /**
     * @brief Parses vertices from a string stream.
     * @param ss The string stream containing the vertices data.
     * @return A vector of 3 Point2D objects representing the vertices.
     */
    static std::vector<Point2D> parseVertices(std::stringstream& ss);
};

#endif // TEST_RUNNER_H
