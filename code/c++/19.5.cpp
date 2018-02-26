/*************************************************************************
    * File Name: 19.5.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-23
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

struct ContactItem
{
	string strContactsName;
	string strPhoneNumber;
	string strDisplayRepresentation;

	// Constructor and destructor
	ContactItem (const string& strName, const string& strNumber)
	{
		strContactsName = strName;
		strPhoneNumber  = strNumber;
		strDisplayRepresentation = (strContactsName + ": " + strPhoneNumber);
	}

	// used by set::find()
	bool operator == (const ContactItem& itemToCompare) const
	{
		return (itemToCompare.strContactsName == this->strContactsName);
	}

	// used as a sort predicate
	bool operator < (const ContactItem& itemToCompare) const
	{
		return (this->strContactsName < itemToCompare.strContactsName);
	}

	// Used in DisplayContents via cout
	operator const char*() const
	{
		return strDisplayRepresentation.c_str();
	}
};

int main()
{
	set<ContactItem> setContacts;
	setContacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
	setContacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
	setContacts.insert(ContactItem("Angela Merkel", "+49 23456 5466"));
	setContacts.insert(ContactItem("Vladimir Putin", "+7 6645 4564 797"));
	setContacts.insert(ContactItem("Manmohan Singh", "+91 234 4564 789"));
	setContacts.insert(ContactItem("Barack Obama", "+1 745 641 314"));
    DisplayContents(setContacts);

	cout << "Enter a person whose number you wish to delete: ";
	string NameInput;
	getline(cin, NameInput);

	auto iContactFound = setContacts.find(ContactItem(NameInput, ""));
	if (iContactFound != setContacts.end())
	{
		// Erase the contact found in set
		setContacts.erase(iContactFound);
		cout << "Displaying contents after erasing: " << NameInput << endl;
		DisplayContents(setContacts);
	}
	else
		cout << "Contact not found" << endl;

	return 0;
}

