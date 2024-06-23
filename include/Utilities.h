#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>

void printUsage(const std::string& programName) {
    std::cerr << "Usage: " << programName << " <input file>\n";
}

#endif // UTILITIES_H
