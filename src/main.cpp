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

    auto checker = std::make_unique<IntersectionChecker2D>();
    TestRunner runner(std::move(checker));
    runner.runTests(filename);

    return 0;
}
