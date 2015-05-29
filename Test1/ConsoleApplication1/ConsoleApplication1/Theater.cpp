/*I affirm that all code given below was written solely by me, Michael Zeng
, and that any help I received adhered to the rules stated for this exam*/

#include "Theater.h"


// movie object comparison based on movie show time
bool compare_movie_showtime(Movie& firstMovieObj, Movie& secondMovieObj)
{

	if (firstMovieObj.GetShowtime()<secondMovieObj.GetShowtime())
		return true;
	else
		return false;
}

Theater::~Theater()
{
	movieList.erase(movieList.begin(), movieList.end()); //removes the list container 
}

Theater::Theater(string Name, string Phone) :sTheaterName(Name), sTheaterPhoneNumber(Phone)
{
	iPopcornPrice = DEFAULT_POPCORN_PRICE;
	iCokePrice = DEFAULT_COKE_PRICE;
}

void Theater::AddMovie(Movie& Movie)
{
	movieList.push_back(Movie);
	movieList.sort(compare_movie_showtime);
}

string Theater::GetMovieForHour(int Hour)
{
	if (Hour < 0 || Hour>24)
		return "";

	list<Movie>::iterator it;
	for (it = movieList.begin(); it != movieList.end(); ++it)
	{
		if ( (*it).GetShowtime() == Hour || (*it).GetShowtime() > Hour)
		{
			return (*it).GetTitle();
		}				
	}

	return "";
}

int Theater::GetShowTimeForGenre(string Genre)
{
	list<Movie>::iterator it;

	for (it = movieList.begin(); it != movieList.end(); ++it)
	{
		if ( (*it).GetGenre() == Genre )
		{
			return (*it).GetShowtime();
		}
	}

	return INVALID_SHOW_HOUR;

}

int Theater::GetPopcornPrice()
{
	return iPopcornPrice;
}

int Theater::GetCokePrice()
{
	return iCokePrice;
}

void Theater::SetPopcornPrice(int x)
{
	if (x>0)
		iPopcornPrice = x;
}

void Theater::SetCokePrice(int x)
{
	if (x>0)
		iCokePrice = x;
}