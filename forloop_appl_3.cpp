#include<bits/stdc++.h>
using namespace std;  //Number of Perfect number b/w 1 to 500
int main()
{
	int i=1,u=1,sum=0;
	while(i<=500)
	{
		while(u<=500)
		{
			if(u<i)
			{
				if(i%u==0)
				sum=sum+u;
			    
			}
		u++;	
		}
		if(sum==i)
		{
			cout<<i<<" \n";
		}
		i++;
		u=1;
		sum=0;
	}
}
