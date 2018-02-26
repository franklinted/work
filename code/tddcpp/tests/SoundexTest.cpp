/*###################################################################
# File Name: SoundexTest.cpp
# Author: franklin
# mail: stranger_2000@163.com
# Created Time: Mon 19 Feb 2018 09:55:30 PM CST
#=============================================================*/

#include "gmock/gmock.h"
#include "Soundex.h"

using namespace testing;

class SoundexEncoding : public Test {
	public:
		Soundex soundex;
};

TEST_F(SoundexEncoding, RetainSoleLetterWord) {
	ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}

TEST_F(SoundexEncoding, PadWithZerosToEnsureThreeDigits) {
	ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}

TEST_F(SoundexEncoding, ReplacesConsonantsWithAppropriateDigits) {
	EXPECT_THAT(soundex.encode("Ab"), Eq("A100"));
	EXPECT_THAT(soundex.encode("Ac"), Eq("A200"));
}
