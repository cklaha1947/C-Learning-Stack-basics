#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n[]={30,40,50,10,20};
	cout<<"\n Before Sorting :::";
	for(i=0;i<5;i++)
	{
		cout<<"  "<<n[i];
	}
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(n[j]>n[j+1])
			{
				int t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
		}
	}
	cout<<"\n\n After Sorting :::";
	for(i=0;i<5;i++)
	{
		cout<<"  "<<n[i];
	}
}
