#include "Acm.h"

#include<stdio.h>
#include<string.h>
//#include<map>
#include<iostream>
//#include<algorithm>
using namespace std;

string MinusOne(int len, string s)
{
	string result;
        for(int i=0;i<len;i++){
            if(s[i]=='Z'){
                printf("A");
            }else{
                printf("%c",((s[i]-'0'+1)+'0'));
            }

        }
	return result;
}

void Acm_IBM_MinusOne()
{
    int n,len,index=1;
    string s;
    cin>>n;
    getchar();
    while(n--){
        getline(cin,s);
        len=s.size();
        printf("String #%d\n",index++);
            printf("\n\n");

    }
}

