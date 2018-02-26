/*************************************************************************
    * File Name: test.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-08-31
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	cout << "Please enter a sentence!" <<endl;
	cout << ">";
	string strInput;
	getline(cin, strInput);
	cout << endl;

	int nVowelCounter = 0;
    for (size_t nCharIndex = 0; nCharIndex < strInput.length();++nCharIndex)
	{
		string strVowel ("aeiouAEIOU");
		size_t nCharPos = strVowel.find(strInput[nCharIndex],0);
		if (nCharPos != string::npos)
			++nVowelCounter;
	}
	cout << "There are " << nVowelCounter << " vowels in the sentence!" << endl;
	return 0;
}
