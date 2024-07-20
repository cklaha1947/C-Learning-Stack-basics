#include <iostream>
#include <vector>
#include <algorithm>
#include<conio.h>
using namespace std;

int main()
{
	vector<int> v = { 7, 2, 2, 4, 3, 2, 6 };

    for(int i=0;i<v.size();i++)
    {
          for(int j=0;j<i;j++)
            if(v[i]==v[j])

              break

          int freq = count(v.begin(), v.end(), v[i]);

            cout << "Element " << v[i]<< " occurs " << freq << " times"<<endl;





    }




	getch();
}
