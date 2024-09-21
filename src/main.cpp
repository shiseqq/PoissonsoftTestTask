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
    TestRunner runner;
    runner.runTests(filename);

    return 0;
}
