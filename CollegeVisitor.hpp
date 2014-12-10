#ifndef COLLEGEVISITOR_HPP
#define COLLEGEVISITOR_HPP

#include "Person.hpp"

class CollegeVisitor : public Person
{
public:
	CollegeVisitor(int iage, bool ivalid_pass);

	bool has_valid_pass() const;

private:
	bool valid_pass;
};
#endif // !COLLEGEVISITOR_HPP
