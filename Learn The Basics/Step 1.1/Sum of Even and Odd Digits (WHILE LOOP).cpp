#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int num;
	int sum_odd = 0;
	int sum_even = 0;
	int cpy;
	cin>>num;
	while (num!=0)
	{
		cpy = num%10;
		if (cpy%2==0)
		{
			sum_even += cpy;
		}
		else
		{
			sum_odd += cpy;
		}
		num = num/10;
	}
	cout<<sum_even<<" "<<sum_odd;
}
