/*************************************************************************
    * File Name: 19.6.2.3.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-25
 ************************************************************************/

#include<set>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend();
			++ iElement)
		cout << *iElement << endl;
	cout << endl;
}

int main()
{
	multiset <int> msetIntegers;

	msetIntegers.insert (5);
	msetIntegers.insert (5);
	msetIntegers.insert (5);

    set <int> setIntegers;
	setIntegers.insert (5);
	setIntegers.insert (5);
	setIntegers.insert (5);

	cout << "Displaying the contents of the multiset: ";
	DisplayContents (msetIntegers);
	cout << endl;

	cout << "Displaying the contents of the set: ";
	DisplayContents (setIntegers);
	cout << endl;

	return 0;
}
