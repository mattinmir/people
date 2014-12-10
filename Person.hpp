#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
public:
	Person(int iage);

	~Person() {}

	int get_age() const;


protected:
	int age;
};

#endif // !PERSON_HPP
