/*************************************************************************
    * File Name: 20.2.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-25
 ************************************************************************/

#include<map>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

// Type-define the map and multimap definition for easy readability
typedef map <int, string> MAP_INT_STRING;
typedef multimap <int, string> MMAP_INT_STRING;

template <typename T>
void DisplayContents (const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++ iElement)
		cout << iElement->first << " -> " << iElement->second << endl;

	cout << endl;
}

int main()
{
	MAP_INT_STRING mapIntToString;

	// Insert key-value pairs into the map using value_type
	mapIntToString.insert (MAP_INT_STRING::value_type (3, "Three"));

	// Insert a pair using function make_pair
	mapIntToString.insert (make_pair (-1, "Minus One"));

	// Insert a pair object directly
	mapIntToString.insert(pair <int, string>(1000, "One Thousand"));

	// Insert using an array-like syntax for inserting key-value pairs
	mapIntToString[1000000] = "One Million";

	cout << "The map contains " << mapIntToString.size();
	cout << " key-value pairs. They are: " << endl;
	DisplayContents(mapIntToString);

	return 0;
}
