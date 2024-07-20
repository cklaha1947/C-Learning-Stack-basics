#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,i,count=0;
	cout<<"enter a number= ";
	cin>>num;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count=count+1;
		}
	}
	if(count==1)
	{
		cout<<"prime number";
	}
	else
	{
		cout<<"not a prime number";
	}
}
