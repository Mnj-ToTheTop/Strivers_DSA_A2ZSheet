//Pattern: n=3:
// * * *
// * *
// *

#include <iostream>
using namespace std;

void seeding(int n) {
	// Write your code here.
	for(int k = n; k>=1; k--)
	{
		for(int i=k; i>=1; i--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}

int main()
{
	int x;
	cin>>x;
	seeding(x);
}
