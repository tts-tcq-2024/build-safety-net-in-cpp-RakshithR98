#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

TEST(SoundexTest, HandlesNames) {
    EXPECT_EQ(generateSoundex("Chandra"), "C536");
    EXPECT_EQ(generateSoundex("Ramesh"), "R520");
    EXPECT_EQ(generateSoundex("Kumar"), "K560");
}

TEST(SoundexTest, HandlesNamesWithNumbersAndSymbols) {
    EXPECT_EQ(generateSoundex("J2K"), "J020"); // Numbers converted to zeros
    EXPECT_EQ(generateSoundex("K!@#"), "K000"); // Special symbols converted to zeros
    EXPECT_EQ(generateSoundex("M1ke"), "M020"); // Mixed numbers and letters
}

