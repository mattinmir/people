#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
public:
	virtual ~Person() {}

	virtual int get_age() const;


private:
	int age;
};

#endif // !PERSON_HPP
