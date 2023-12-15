//Write a program that takes character as input and prints 1,0,-1 according to given rules.
//C++.

#include<iostream>
using namespace std;

int main() 
{
	char cha;
	cin>>cha;
	if (cha<=122 && cha>=97)  //character can directly be compared as an integer
	{
		cout<<"0";
	}	
	else if (cha<=90 && cha>=65)
	{
		cout<<"1";
	}
	else
	{
		cout<<"-1";
	}
	
}
