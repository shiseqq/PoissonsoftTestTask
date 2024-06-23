#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

inline std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    return result;
}

inline void printUsage(const std::string& programName) {
    std::cerr << "Usage: " << programName << " <input file>\n";
}

#endif // UTILITIES_H
