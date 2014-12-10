#include "Person.hpp"

Person::Person(int iage) : age(iage) {}

int Person::get_age() const
{
	return age;
}