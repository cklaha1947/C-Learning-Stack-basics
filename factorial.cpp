#include<iostream>
using namespace std;
int main()
{
	unsigned int numb;
	unsigned long fact=1;
	cout<<"Enter a number: ";
	cin>>numb;
	for(int j=numb;j>0;j  )
	fact*=j;
	
	return 0;
}
