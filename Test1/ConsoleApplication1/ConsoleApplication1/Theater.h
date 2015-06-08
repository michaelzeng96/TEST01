/*I affirm that all code given below was written solely by me, Michael Zeng
, and that any help I received adhered to the rules stated for this exam*/

#ifndef THEATER_H
#define THEATER_H


#include <string>
#include <list>
#include "Movie.h"
using namespace std;
#define DEFAULT_POPCORN_PRICE 2
#define DEFAULT_COKE_PRICE 1

class Theater
{
private:
	string sTheaterName;
	string sTheaterPhoneNumber;
	//PT -- we haven't talked about lists yet. I was expecting arrays.
	list<Movie> movieList;
	int iPopcornPrice;
	int iCokePrice;
	

public:
	Theater(string Name, string Phone); //The name for this theater
	~Theater(); //destructor
	void AddMovie(Movie& Movie); //Add a movie at a specific time
	string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
	// Return "" if none are upcoming
	int GetShowTimeForGenre(string Genre); //When will the movie of the given genre be shown?
	// Return -1 if none exist
	int GetPopcornPrice(); //Make up a cost in dollars for popcorn
	void SetPopcornPrice(int x);
	void SetCokePrice(int x);
	int GetCokePrice(); //Make up a cost on Coke
};

#endif