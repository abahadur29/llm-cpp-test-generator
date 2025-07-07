#include "functions.h"
#include <string>
#include <algorithm>

std::string digitToWord(int digit) {
    switch (digit) {
        case 0: return "ZERO";
        case 1: return "ONE";
        case 2: return "TWO";
        case 3: return "THREE";
        case 4: return "FOUR";
        case 5: return "FIVE";
        case 6: return "SIX";
        case 7: return "SEVEN";
        case 8: return "EIGHT";
        case 9: return "NINE";
        default: return "";
    }
}

std::string reverseNumberToWords(int number) {
    if (number == 0) return "ZERO";
    std::string result;
    while (number > 0) {
        int digit = number % 10;
        if (!result.empty()) result += " ";
        result += digitToWord(digit);
        number /= 10;
    }
    return result;
}

std::string removeConsecutiveDuplicates(const std::string& input) {
    if (input.empty()) return "";
    std::string output;
    output += input[0];
    for (size_t i = 1; i < input.size(); ++i) {
        if (input[i] != input[i-1]) {
            output += input[i];
        }
    }
    return output;
}
