using namespace jule;

#include <iostream>
#include <sstream>
#include <string>

int readIntegers(const std::string& line, bool do_right) {
    std::istringstream iss(line);
    int left, right;
    if (iss >> left >> right) {
        if (do_right) {
            return right;
        } else {
            return left;
        }
    } else {
        std::cerr << "Error reading line: " << line << std::endl;
    }
}
