#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,r,x,rev;
	cout<<"Enter any number ::: ";
	cin>>n;
	x=n;
	rev=0;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	cout<<"\n Reversed number is = "<< rev;
	if(rev==x)
	cout<<"\n it is a palindrome number.";
	else
	cout<<"\n it is not a palindrome number";
}
