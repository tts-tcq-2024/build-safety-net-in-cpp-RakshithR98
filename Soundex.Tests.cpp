#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

TEST(SoundexTest, HandlesMixedCase) {
    EXPECT_EQ(generateSoundex("RaJesh"), "R020");
    EXPECT_EQ(generateSoundex("MAHESH"), "M020");
}

TEST(SoundexTest, HandlesSpecialCharacters) {
    EXPECT_EQ(generateSoundex("O'Reilly"), "O640");
    EXPECT_EQ(generateSoundex("Ravi-Kumar"), "R251");
}


