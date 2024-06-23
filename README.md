# PoissonsoftTestTask

## Description

This project is a console application for checking the intersection of two triangles in 2D space. The program takes a file with the coordinates of the vertices of the triangles and the expected result as input and outputs the number of executed and failed tests.

## Requirements

- CMake 3.10+
- C++ compiler with C++17 support

## Project Structure

```plaintext
PoissonsoftTestTask/
├── CMakeLists.txt
├── include/
│   ├── Triangle.h
│   ├── IntersectionChecker2D.h
│   ├── Point2D.h
│   ├── Utilities.h
├── src/
│   ├── main.cpp
│   ├── Triangle.cpp
│   ├── IntersectionChecker2D.cpp
│   ├── TestRunner.cpp
├── tests/
│   ├── test_input1.txt
│   ├── test_input2.txt
└── README.md
```

## Building the Project

1. Clone the repository or download the project archive.
2. Open a terminal and navigate to the project directory.
3. Create a build directory and navigate to it: 
`mkdir build`
`cd build`
4. Run CMake to generate the build files:
`cmake ..`
5. Compile the project:
`make`
## Running the Program
To run the program, use the following command:
`./PoissonsoftTestTask <input file>`

`<input file>` - path to the file with the coordinates of the vertices of the triangles and the expected result.
### Example

`./PoissonsoftTestTask ../tests/test_input1.txt`

## Input File Format

The input file should contain the coordinates of the vertices of two triangles and the expected result in the following format:
```
#this is a comment
x1 y1 x2 y2 x3 y3
x1 y1 x2 y2 x3 y3
expected_result
```
- Each line starting with # is considered a comment and ignored.
- The coordinates of the vertices should be specified for 2D space.
- `expected_result` - expected intersection result (true or false).
### Example Input File
```
# this is a comment
0 0 1 0 0 1
0 0 1 1 0 1
true
```

## Author
PoissonsoftTestTask developed by Igor Merkulov.