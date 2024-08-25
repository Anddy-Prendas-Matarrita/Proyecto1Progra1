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
	
public:
	Room();
	Room(int,int,int);
	~Room();
	void showMatrix();
	void setNumber(int);
	int getNumber();
	void setAmountOfSeats(int);
	int getAmountOfSeats();
	void setPrice(int);
	int getPrice();
};
#endif ROOM_H