#include <string>
#include "TestRunner.h"
#include "IntersectionChecker2D.h"
#include "Utilities.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printUsage(argv[0]);
        return 1;
    }

    std::string filename = argv[1];

    // checker made for code scalability if you need to add intersection checking for 3D triangles
    // we can add an abstract class IntersectionChecker with a pure virtual method checkIntersection
    // such polymorphism will help us adhere to the Open/Closed Principle
    auto checker = std::make_unique<IntersectionChecker2D>();
    TestRunner runner(std::move(checker));
    runner.runTests(filename);

    return 0;
}
