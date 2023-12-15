//Pattern: n=3:
// 1
// 2 2
// 3 3 3

#include <iostream>
using namespace std;

void triangle(int n) {
	// Write your code here
	for(int i = 1; i<=n; i++)
	{
		for(int k =1; k<=i; k++)
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
	triangle(x);
}
