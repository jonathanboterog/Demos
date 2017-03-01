//============================================================================
// Name        : TestString.cpp
// Author      : jbotero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main() {
	string str1 = "";
	vector<string> tokens;

	getline(cin, str1);

	if(!str1.empty())
	{
		istringstream iss(str1);

		copy(istream_iterator<string>(iss),
			 istream_iterator<string>(),
			 back_inserter(tokens));

		cout << str1 << endl;
		cout << tokens[0] << tokens[1] << tokens[2] << tokens[3] << tokens[4] << tokens[5] << endl;
	}
	else
		cout << "empty string";

	return 0;
}
