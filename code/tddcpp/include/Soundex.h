#ifndef Soundex_h
#define Soundex_h
#include <string.h>

static const size_t MaxCodeLength{4};

class Soundex{
	public:
		std::string encode(const std::string& word) const{
			return zeroPad(head(word) + encodedDigits(word));
		}

	private:
		std::string head(const std::string& word) const{
			return word.substr(0,1);
		}

		std::string encodedDigits(const std::string& word) const{
			if (word.length() > 1) return encodedDigit(word[1]);
			return "";
		}

		std::string encodedDigit(char letter) const {
			const std::unordered_map<char, std::string> encodings {
				{'b', "1"}, {'f', "1"}, {'p', "1"}, {'v', "1"},
				{'c', "2"}, {'g', "2"}, {'j', "2"}, {'k', "2"}, {'q',"2"},
							{'s', "2"}, {'x', "2"}, {'z', "2"},
				{'d', "3"}, {'t', "3"},
				{'l', "4"},
				{'m', "5"}, {'n', "5"},
				{'r', "6"}
			};
			return encodings.find(letter)->second;
		}

		std::string zeroPad(const std::string& word) const{
			auto zerosNeeded = MaxCodeLength - word.length();
			return word + std::string(zerosNeeded, '0');
		}
};

#endif
