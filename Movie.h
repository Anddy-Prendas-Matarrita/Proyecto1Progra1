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
	int review;
public:
	Movie();
	Movie(std::string, int, int, std::string, int);
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
	int getReview();
};
#endif MOVIE_H
