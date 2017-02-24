//============================================================================
// Name        : HR_.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//----------------------------------------------------------PERSON
class Person
{
public:
	Person();
	virtual ~Person();
	virtual void putdata() = 0;
	virtual void getdata() = 0;

protected:
    string name;
    int age;
    int cur_id;
};

Person::Person()
{
	name = "";
	age = 0;
	cur_id = 0;
}

Person::~Person()
{
	cout << "adios" << endl;
}
//----------------------------------------------------------PROFESOR
class Professor : public Person
{
    void putdata();
    void getdata();

public:
    int publications;
    static int idProfesor;
};

int Professor::idProfesor = 0;

void Professor::putdata()
{
	cout << name << " " << age << " " << publications << " " << ++idProfesor << endl;
};

void Professor::getdata()
{
	cin >> name >> age >> publications;
};

//----------------------------------------------------------STUDENT
class Student : public Person
{
    void putdata();
    void getdata();

public:
    vector<int> marks;
    static int idStudent;
};

int Student::idStudent = 0;

void Student::putdata()
{
	int sum = 0;

	cout << name << " " << age;

	for(int i=0; i < 6; i++)
		sum += marks[i];

	cout << " " << sum << " " << ++idStudent;

	cout << endl;
};

void Student::getdata()
{
	int input;

	cin >> name >> age;

	for(int i = 0; i < 6; i++)
	{
		cin >> input;
		marks.push_back(input);
	}
};

int main()
{
	int n = 0, val = 0;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		} else
			per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i < n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}
