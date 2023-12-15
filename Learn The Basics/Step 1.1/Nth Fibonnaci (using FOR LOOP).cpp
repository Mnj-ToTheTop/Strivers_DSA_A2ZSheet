#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        int num;
        cin>>n;

        if (n==1)
        {
                num = 1;
        }

        else if (n==2)
        {
                num = 2;
        }

        else
        {
                //F(n) = F(n-1) + F(n-2)
                int F_1 = 1;
                int F_2 = 1;
                int F_n;
                for (int  i =3; i<=n; i++)
                {
                        F_n = F_1 + F_2;
                        F_2 = F_1;
                        F_1 = F_n;
                }
                num = F_n;
        }

        cout<<num;
}
