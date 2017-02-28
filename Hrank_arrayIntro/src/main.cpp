//============================================================================
// Name        : Hrank_arrayIntro.cpp
// Author      : jbotero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int summation(vector < int > numbers) {

    int res = 0;

    for(unsigned int i = 0; i < numbers.size(); i++)
    {
        res += numbers[i];
    }

    return res;
}

void func()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int num = 0;
    vector<int> v;
    int x, y, z, w;
    string xs, ys,zs, ws;
    int numSquare = 0;
    int numRect = 0;
    int numOther = 0;

    //cin >> num;
    num = 500;

    for(int i = 0; i< num; i++)
    {
    	xs = "";
    	ys = "";
    	zs = "";
    	ws = "";

        x = 0; y = 0; z = 0; w = 0;

        cin >> xs >> ys >> zs >> ws;

        if(ys.size() == 0)
        {
        	cout << "vacio";
            continue;
        }
        //cin >> x >> y >> z >> w;
        x = atoi( xs.c_str() );
        y = atoi( ys.c_str() );
        z = atoi( zs.c_str() );
        w = atoi( ws.c_str() );

        if(x == 0 && y == 0 && z == 0 && w == 0)
    		continue;

    	if((x * y * z * w ) == 0 || ( x < 0 || y < 0 || z < 0 || w < 0) )
    		numOther++;
    	else
    	{
			if(x == z && y == w && x == y)
				numSquare++;
			else if(x == z && y == w && x != w)
				numRect++;
			else
				numOther++;
    	}
    }

    cout << numSquare << " " << numRect << " " << numOther << endl;
}

int main() {

//	int num = 0;
//	int input;
//
//	vector<int> v;
//
//	cin >> num;
//
//	for(int i = 0; i < num; i++)
//	{
//		cin >> input;
//		v.push_back(input);
//	}
//
//	for(int i = num - 1; i >= 0; i--)
//	{
//		cout << v[i];
//
//		if(i != 0)
//			cout << " ";
//	}
//
//	cout << endl;

	func();

	return 0;
}
