/*************************************************************************
    * File Name: 19.6.2.2.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-25
 ************************************************************************/

#include<set>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

struct PAIR_WORD_MEANING
{
	string strWord;
	string strMeaning;

	PAIR_WORD_MEANING ( const string& sWord, const string& sMeaning)
		: strWord (sWord), strMeaning (sMeaning) {}

	bool operator< (const PAIR_WORD_MEANING& pairAnotherWord) const
	{
		return (strWord < pairAnotherWord.strWord);
	}
};

int main()
{
	multiset <PAIR_WORD_MEANING> msetDictionary;
	PAIR_WORD_MEANING word1 ("C++", "A programming language");
	PAIR_WORD_MEANING word2 ("Programmer","A geek!");

    msetDictionary.insert (word1);
	msetDictionary.insert (word2);

	return 0;
}
