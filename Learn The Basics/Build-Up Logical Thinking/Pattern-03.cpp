#include <iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
	for(int k = 1; k<=n; k++)
	{
		for(int j = 1; j<=k; j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	int x;
	cin>>x;
	nTriangle(x);
}

//n=5
//  1
//  1 2
//  1 2 3 
//  1 2 3 4
//  1 2 3 4 5
