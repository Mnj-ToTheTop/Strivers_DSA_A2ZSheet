#include <iostream>
using namespace std;


string compareIfElse(int a, int b) {
	// Write your code here
	if (a<b)
	{
		return "smaller";
	}
	else if (a>b)
	{
		return "greater";
	}
	else
	{
		return "equal";
	}
}

int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	string res = compareIfElse(x,y);
	cout<<res;
}
