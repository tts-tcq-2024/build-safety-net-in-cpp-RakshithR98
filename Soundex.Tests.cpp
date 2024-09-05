#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

TEST(SoundexTest, HandlesSpecialCharacters) {
    EXPECT_EQ(generateSoundex("O'Reilly"), "O640");
    EXPECT_EQ(generateSoundex("Ravi-Kumar"), "R251");
}

TEST(SoundexTest, HandlesRepeatedCharacters) {
    EXPECT_EQ(generateSoundex("Chandra"), "C535");
    EXPECT_EQ(generateSoundex("Siddharth"), "S340");
}


