#ifndef COLLEGEMEMBER_HPP
#define COLLEGEMEMBER_HPP

#include "Person.hpp"


class CollegeMember : public Person
{
public:
	CollegeMember(int iage, int icid);

	virtual int get_cid() const;

	virtual int get_contact_time() const = 0;

protected:
	int cid;
};

#endif // !COLLEGEMEMBER_HPP
