/*
	Program Name: lab1.cpp
	Programmer: Dai Tran
	Date: 2/12/2022
	Version: 1.2
	Description: This program store values in their members, and pass each one, in turn, to a function that
	displays the information about the movie in a clearly formatted manner
*/

#include <iostream>

using namespace std;

struct MovieData
{
	string title;

	string director;

	int year;

	double run_time;
};

//This is a prototype

void showMovieData(MovieData movie);

int main()
{
	MovieData movie1 = {"Titanic", "James Camaron", 1997, 180.4};

	MovieData movie2 = {"Star Wars", "George Lucas", 1977, 120.5};

	showMovieData(movie1);

	showMovieData(movie2);

	return 0;
}

//This function will display the information of the movie on the screen

void showMovieData(MovieData movie)
{

	cout << "Title: " << movie.title << endl;

	cout << "Director: " << movie.director << endl;

	cout << "Year Released: " << movie.year << endl;

	cout << "Running Time: " << movie.run_time << " minutes\n" << endl;

}