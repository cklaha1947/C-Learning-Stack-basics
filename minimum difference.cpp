#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
#define ll long long
int main()
{
 int n; cin>>n;
 vector<ll> v;
 for(int i=0;i<n;i++)
 {
 ll x; cin>>x; v.push_back(x);
 }
 sort(v.begin(),v.end());
 ll min = abs(v[1] - v[0]);
 for(int i=2;i<n;i++)
 {
 if(abs(v[i]-v[i-1]) < min)
 min = abs(v[i]-v[i-1]);
 }
 cout<<min<<endl;
}
