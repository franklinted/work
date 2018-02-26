/*************************************************************************
    * File Name: 16.6.2.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-18
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	cout << "Please enter a sentence:" << endl;
	cout << "> ";

	string strInput;
	getline (cin, strInput);
	cout << endl;

	string strVowel ("aeiouAEIOU");
	int nVowelCounter = 0;
	for (size_t nCharIndex = 0; nCharIndex < strInput.length();nCharIndex++)
	{
		size_t charPos = strVowel.find(strInput[nCharIndex],0);
		if (charPos != string::npos)
			++nVowelCounter;
	}
    cout << "There are " << nVowelCounter << " vowels in the sentence!" << endl;
	return 0;
}
