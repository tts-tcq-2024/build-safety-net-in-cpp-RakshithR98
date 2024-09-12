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

TEST(SoundexTest, HandlesDigitsInMiddle) {
    EXPECT_EQ(generateSoundex("Alex1nder"), "A425");
    EXPECT_EQ(generateSoundex("John2Smith"), "J525");
    EXPECT_EQ(generateSoundex("M4ry"), "M600");
}

// Test for the first two letters being the same
TEST(SoundexTest, HandlesFirstTwoLettersSame) {
    EXPECT_EQ(generateSoundex("Lloyd"), "L030");
    EXPECT_EQ(generateSoundex("Sally"), "S040");
}

// Test for the first letter as a number
TEST(SoundexTest, HandlesFirstLetterAsNumber) {
    EXPECT_EQ(generateSoundex("3rd"), "3000");
    EXPECT_EQ(generateSoundex("9th"), "9300");
}

// Test for names with two vowels
TEST(SoundexTest, HandlesTwoVowels) {
    EXPECT_EQ(generateSoundex("Eagle"), "A240");
    EXPECT_EQ(generateSoundex("Owen"), "O150");
}

// Test for strings with only numbers
TEST(SoundexTest, HandleOnlyNumbers) {
    EXPECT_EQ(generateSoundex("1234"), "1000");
    EXPECT_EQ(generateSoundex("9876"), "9800");
}

