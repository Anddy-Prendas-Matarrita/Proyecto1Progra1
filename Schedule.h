#pragma once
#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include "Movie.h"
#include "Room.h"
class Schedule {
private:
	Movie selectedMovie;
	Room selectedRoom;
	std::string date;
	std::string startTime;
	std::string endTime;
	int idSchedule;
public:
	Schedule(Movie,Room,std::string,std::string,std::string, int);
	~Schedule();
	void showSeats();
	Room getRoom();
	void setSMovie(Movie);
	void setSRoom(Room);
	void setDate(std::string);
	void setStartTime(std::string);
	void setEndTime(std::string);
	std::string getDate();
	std::string getStartTime();
	std::string getEndTime();
	int getRoomNum();
	std::string getMovieName();
	int getRoomPrice();
	int getIdMovie();
	void setIdSchedule(int);
	int getIdSchedule();
	void generateConsecutiveRoom();
	void book(int);
	int getConsecutive();
};
#endif MOVIE_H