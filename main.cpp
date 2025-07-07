#include "functions.h"
#include <iostream>

int main() {
    int num = 153;
    std::string str = "aabbccddeee";

    std::cout << "Reverse Number to Words for " << num << ": " 
              << reverseNumberToWords(num) << std::endl;

    std::cout << "Remove Consecutive Duplicates from \"" << str << "\": " 
              << removeConsecutiveDuplicates(str) << std::endl;

    return 0;
}
