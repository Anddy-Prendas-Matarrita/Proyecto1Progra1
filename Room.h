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
	void setPrice(int);
	int getPrice();
<<<<<<< HEAD
=======
	void book(int);
	void generateConsecutive();
	int getConsecutive();
>>>>>>> 175685f (Se completó el proyecto)
};
#endif ROOM_H