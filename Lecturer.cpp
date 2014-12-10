#include "Lecturer.hpp"

Lecturer::Lecturer(int iage, int icid, int ilecture_time, int iresearch_time) : CollegeMember(iage, icid), lecture_time(ilecture_time), research_time(iresearch_time){}

int Lecturer::get_contact_time() const
{
	return lecture_time + research_time;
}
