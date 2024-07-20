#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,r,sum;
	cout<<"\n Enter any Number :";
	cin>>n;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<"\n The sum of the digits is="<<sum;
}
