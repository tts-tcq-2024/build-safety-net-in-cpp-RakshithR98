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


