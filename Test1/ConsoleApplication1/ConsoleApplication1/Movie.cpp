/*I affirm that all code given below was written solely by me, Michael Zeng
, and that any help I received adhered to the rules stated for this exam*/

#include "Movie.h"

Movie::Movie() :sTitle(""), sGenre(""), iShowtime(INVALID_SHOW_HOUR){}

Movie::Movie(string Title, string Genre, int ShowTime)
{
	sTitle = Title;
	sGenre = Genre;
	iShowtime = ShowTime;
}

Movie::~Movie()
{
}
string Movie::GetTitle()
{
	return sTitle;
}

string Movie::GetGenre()
{
	return sGenre;
}

int Movie::GetShowtime()
{
	return iShowtime;
}


