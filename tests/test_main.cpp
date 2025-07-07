#include "functions.h"
#include <gtest/gtest.h>

TEST(ReverseNumberToWordsTest, HandlesZero) {
    EXPECT_EQ(reverseNumberToWords(0), "ZERO");
}

TEST(ReverseNumberToWordsTest, HandlesSingleDigit) {
    EXPECT_EQ(reverseNumberToWords(7), "SEVEN");
}

TEST(ReverseNumberToWordsTest, HandlesMultipleDigits) {
    EXPECT_EQ(reverseNumberToWords(153), "THREE FIVE ONE");
    EXPECT_EQ(reverseNumberToWords(204), "FOUR ZERO TWO");
}

TEST(RemoveConsecutiveDuplicatesTest, HandlesEmptyString) {
    EXPECT_EQ(removeConsecutiveDuplicates(""), "");
}

TEST(RemoveConsecutiveDuplicatesTest, HandlesNoDuplicates) {
    EXPECT_EQ(removeConsecutiveDuplicates("abc"), "abc");
}

TEST(RemoveConsecutiveDuplicatesTest, HandlesDuplicates) {
    EXPECT_EQ(removeConsecutiveDuplicates("aabbcc"), "abc");
    EXPECT_EQ(removeConsecutiveDuplicates("aabbccddeee"), "abcde");
}
