#ifndef TEST_RUNNER_H
#define TEST_RUNNER_H

#include <memory>
#include "IntersectionChecker2D.h"

class TestRunner {
public:
    explicit TestRunner(std::unique_ptr<IntersectionChecker2D> checker) : checker(std::move(checker)) {}
    void runTests(const std::string& filename);
private:
    std::unique_ptr<IntersectionChecker2D> checker;
};

#endif // TEST_RUNNER_H
