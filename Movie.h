#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>

class Movie {
private:
	std::string name;
	int year;
	int duration;
	std::string country;
	float review;
	int idMovie;
public:
	Movie();
	Movie(std::string, int, int, std::string, float,int);
	~Movie();
	void setName(std::string);
	std::string getName();
	void setYear(int);
	int getYear();
	void setDuration(int);
	int getDuration();
	void setCountry(std::string);
	std::string getCountry();
	void setReview(int);
	float getReview();
	void setIdMovie(int);
	int getIdMovie();
};
#endif MOVIE_H
