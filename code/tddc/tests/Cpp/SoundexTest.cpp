#include "CppUTest/TestHarness.h"
#include "gmock/gmock.h"
#include "Soundex.h"

TEST_GROUP(SoundexEncoding)
{
	void setup()
	{
		return;
	}
	void teardown()
	{
		return;
	}
};

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
	Soundex soundex;
}
