#include "Student.hpp"

Student::Student(int iage, int icid, int ilecture_time) : CollegeMember(iage, icid), lecture_time(ilecture_time) {}

int Student::get_contact_time() const
{
	return lecture_time;
}