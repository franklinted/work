#ifndef D_SwordForOffer_H
#define D_SwordForOffer_H

#include<stdio.h>
#include<string.h>
//#include<map>
#include<iostream>
//#include<algorithm>
using namespace std;

class President
{
	private:
		//private default constructor (prohibits creation from outside)
		President(){};

		//private assignment operator (prohibits assignment)
		const President& operator = (const President&);

		// member data: President name
		string Name;

	public:
		// conctrolled instantiation
		static President& GetInstance()
		{
			// static objects are constructed only once
			static President OnlyInstance;
			return OnlyInstance;
		}

		// public methods
		string GetName()
		{
			return Name;
		}

		void SetName(string InputName)
		{
			Name = InputName;
		}
};

#endif  /* D_SwordForOffer_H */

