// C++ program for count in C++ STL for
// a vector
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
	vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
	cout << "Number of times 3 appears : "
		<< count(vect.begin(), vect.end(), 3);

	getch();
}

