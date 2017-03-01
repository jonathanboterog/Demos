//============================================================================
// Name        : HRank_strings.cpp
// Author      : jbotero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	string a;
	string b;
	string c;

	cin >> a;
	cin >> b;

	//output1
	cout << a.size() << " " << b.size() << endl;

	//output2
	c = a + b;
	cout << c << endl;

	//output3
	c = a;
	c[0] = b[0];
	cout << c << " ";

	c = b;
	c[0] = a[0];
	cout << c;

	return 0;
}
