//N-Forest.
//N=3 =>  * * *
//        * * *
//        * * *
#include <iostream>
using namespace std;

void nForest(int n)
{
	for (int k = 1; k<=n; k++)
	{
		for(int j = 1; j<=n; j++)
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
	nForest(x);
}
