#include "CollegeMember.hpp"

CollegeMember::CollegeMember(int iage, int icid) : Person(iage), cid(icid) {}

int CollegeMember::get_cid() const
{
	return cid;
}

