#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int a,count;
	cout<<"Enter a value of a:"<<' ';
	cin>>a;
	count=0;
	while(a!=0)
	{
		a=a/10;
		count=count+1;
	}
	cout<<"Number of digits in a="<<count;
}
