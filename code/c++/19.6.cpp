/*************************************************************************
    * File Name: 19.6.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-23
 ************************************************************************/

#include<unordered_set>
#include<iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
	cout << "Number of elements, size() = " << Input.size() << endl;
	cout << "Max bucket count = " << Input.max_bucket_count() << endl;
	cout << "Load factor: " << Input.load_factor() << endl;
	cout << "Max load factor = " << Input.max_load_factor() << endl;
	cout << "Unordered set contains: " << endl;

	for(auto iElement = Input.cbegin(); iElement != Input.cend();
		++ iElement)
		cout << *iElement << ' ';

	cout << endl;
}

int main()
{
	// instantiate unordered_set of int to string:
	unordered_set<int> usetInt;

	usetInt.insert(1000);
	usetInt.insert(-3);
	usetInt.insert(2011);
	usetInt.insert(300);
	usetInt.insert(-1000);
	usetInt.insert(989);
	usetInt.insert(-300);
	usetInt.insert(111);
    DisplayContents(usetInt);
	usetInt.insert(999);
    DisplayContents(usetInt);

	// find():
	cout << "Enter int you want to check for existence in set: ";
	int Key = 0;
	cin >> Key;
	auto iPairThousand = usetInt.find(Key);
	if (iPairThousand != usetInt.end())
		cout << *iPairThousand << " found in set" << endl;
	else
		cout << Key << " not available in set" << endl;

	return 0;
}
