#ifndef LECTURER_HPP
#define LECTURER_HPP

#include "CollegeMember.hpp"

class Lecturer : public CollegeMember
{
public:
	Lecturer(int iage, int icid, int ilecture_time, int iresearch_time);

	int get_contact_time() const;

private:
	int lecture_time;
	int research_time;
};

#endif // !LECTURER_HPP
