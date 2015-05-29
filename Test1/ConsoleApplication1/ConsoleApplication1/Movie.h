/*I affirm that all code given below was written solely by me, Michael Zeng
, and that any help I received adhered to the rules stated for this exam*/

#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;
#define INVALID_SHOW_HOUR -1

class Movie
{
private:
	string sTitle;
	string sGenre;
	int iShowtime;

public:
	Movie(); 
	~Movie(); //destructor
	Movie(string Title, string Genre, int ShowTime);
	string GetTitle(); // Returns the movie title
	string GetGenre(); // Returns the movie genre
	int GetShowtime(); // When is this movie shown?

};

#endif