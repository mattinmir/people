#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "CollegeMember.hpp"

class Student : public CollegeMember
{
public:
	Student(int iage, int icid, int ilecture_time);

	int get_contact_time() const;

private:
	int lecture_time;
};

#endif // !STUDENT_HPP
