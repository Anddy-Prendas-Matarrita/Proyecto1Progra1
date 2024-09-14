#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "Seat.h"
class Room {
private:
	int number;
	int amountOfSeats;
	int price;
	Seat seats[7][7];
	std::string kind;
	int consecutive;
	
public:
	Room();
	Room(int,int,std::string);
	~Room();
	void setKind(std::string);
	std::string getKind();
	void showMatrix();
	void setNumber(int);
	int getNumber();
	void setAmountOfSeats(int);
	int getAmountOfSeats();
	void setPrice(int);
	int getPrice();
	void setBoolMatrix(int);
	int getConsecutive();
};
#endif ROOM_H