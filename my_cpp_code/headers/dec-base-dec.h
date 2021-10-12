// This is a header file use to convert decimal to anybase and anybase to decimal number
// just include this header file in your program for using the functions for conversion

#pragma once
#include<bits/stdc++.h>
using namespace std;

string deciToBase(int n,int base)
{
	string str = "";
	while(n)
	{
		int rem = n % base;
		n = n / base;
		if(rem > 9)
			str.push_back((rem-10)+'A');
		else
			str.push_back(rem+'0');
	}
	reverse(str.begin(),str.end());
	return str;
}

int val(char ch)
{
	if(ch >='0' && ch <= '9')
		return ch-'0';
	else if(ch >='A' and ch <='F')
		return ch-'A'+10;
}

string baseToDeci(string str,int base)
{
	int n = str.length();
	int power = 1;
	int ans = 0;
	for(int i=n-1;i>=0;--i)
	{
		int digit = val(str[i]);
		if(digit>=base)
		{
			return "INVALID INPUT";
		}
		ans += digit*power;
		power *= base;
	}
	return to_string(ans);
}
