#include "Student.hpp"
#include "Lecturer.hpp"
#include "CollegeVisitor.hpp"
#include "Person.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<Person*> v;

	v.push_back(new Student(19, 801, 30));
	v.push_back(new Lecturer(50, 802, 5, 40));
	v.push_back(new CollegeVisitor(35, true));


	for (int i = 0; i < 3; i++)
		cout << v[i]-> << endl;

	return 0;
}