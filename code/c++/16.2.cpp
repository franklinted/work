/*************************************************************************
    * File Name: 16.2.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-17
 ************************************************************************/
#include<string>
#include<iostream>
using namespace std;

int main()
{
	using namespace std;

	// The sample string
	string strSTLString ("Hello String");

	// Access the contents of the string using array syntax
	cout << "Displaying the elements in the string using array-systax: " << endl;
	for( size_t nCharCounter = 0; nCharCounter < strSTLString.length (); ++ nCharCounter )
	{
		cout << "Character [" << nCharCounter << "] is: ";
		cout << strSTLString [nCharCounter] << endl;
	}
	cout << endl;

	// Access the contents of a string using iterators
	cout << "Displaying the contents of the string using iterators: " << endl;
	int charOffset = 0;
	string::const_iterator iCharacterLocator;
	for ( iCharacterLocator = strSTLString.begin ();
		iCharacterLocator!= strSTLString.end();++ iCharacterLocator)
	{
		cout << "Character [" << charOffset ++ << "] is: ";
		cout << *iCharacterLocator << endl;
	}

	// Access the contents of a string as a C-style string
	cout << "The char* representation of the string is: ";
	cout << strSTLString.c_str() << endl;

	return 0;
}
