#include <iostream>
using namespace std;

int main()
{
	String x;
	cin>>x;
	int size;
	size = dataTypes(x);
	cout<<size;
}


int dataTypes(String type) 
{
	if (type == "Integer")
	{
		return 4;
	}
	else if (type == "Long")
	{
		return 8;
	}
	else if (type == "Float")
	{
		return 4;
	}
	else if (type == "Double")
	{
		return 8;
	}
	else if (type == "Character")
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
