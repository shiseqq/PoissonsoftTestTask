#include "TestRunner.h"
#include "Triangle.h"
#include "Utilities.h"
#include <iostream>
#include <fstream>
#include <sstream>

std::vector<Point2D> TestRunner::parseVertices(std::stringstream& ss) {
    std::vector<Point2D> vertices(3);
    for (int i = 0; i < 3; ++i) {
        ss >> vertices[i].x >> vertices[i].y;
    }
    return vertices;
}

void TestRunner::runTests(const std::string& filename) {
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Unable to open file: " << filename << "\n";
        return;
    }

    std::string line;
    int testsDone = 0, testsFailed = 0;

    while (std::getline(infile, line)) {
        if (line.empty() || line[0] == '#') continue;

        std::stringstream ss1(line);
        auto vertices1 = parseVertices(ss1);

        do {
            if (!std::getline(infile, line)) {
                std::cerr << "Unexpected end of file while reading vertices for the second triangle\n";
                return;
            }
        } while (line.empty() || line[0] == '#');

        std::stringstream ss2(line);
        auto vertices2 = parseVertices(ss2);

        do {
            if (!std::getline(infile, line)) {
                std::cerr << "Unexpected end of file while reading expected result\n";
                return;
            }
        } while (line.empty() || line[0] == '#');

        bool expected = (toLower(line) == "true");

        Triangle t1(vertices1), t2(vertices2);
        bool result = checker->checkIntersection(t1, t2);

        if (result != expected) {
            std::cout << "Test " << testsDone + 1 << ": expected " << std::boolalpha << expected << " got " << result << "\n";
            ++testsFailed;
        }
        ++testsDone;
    }

    std::cout << "Tests done " << testsDone << "; failed " << testsFailed << "\n";
}