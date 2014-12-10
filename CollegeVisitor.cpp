#include "CollegeVisitor.hpp"

CollegeVisitor::CollegeVisitor(int iage, bool ivalid_pass) : Person(iage), valid_pass(ivalid_pass) {}

bool CollegeVisitor::has_valid_pass() const
{
	return valid_pass;
}