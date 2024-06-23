#ifndef TEST_RUNNER_H
#define TEST_RUNNER_H

#include "IntersectionChecker2D.h"
#include <vector>
#include <string>
#include <memory>
#include <sstream>

class TestRunner {
public:
    explicit TestRunner(std::unique_ptr<IntersectionChecker2D> checker) : checker(std::move(checker)) {}
    void runTests(const std::string& filename);
private:
    std::unique_ptr<IntersectionChecker2D> checker;
    static std::vector<Point2D> parseVertices(std::stringstream& ss);
};

#endif // TEST_RUNNER_H
