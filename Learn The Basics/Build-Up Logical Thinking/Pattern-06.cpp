//PATTERN: N=3
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    for(int k = n; k>=1; k--)
	{
		for(int i=1; i<=k; i++)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}


int main()
{
	int x;
	cin>>x;
	nNumberTriangle(x);
}
