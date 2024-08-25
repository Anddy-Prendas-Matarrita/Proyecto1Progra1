#include <iostream>
#ifndef SEAT_H
#define SEAT_H
class Seat {
private:
	int number;
	bool busy = false;
public:
	Seat();
	Seat(int);
	~Seat();
	void setNumber(int);
	int getNumber();
	void setBusy(bool);
	bool getBusy();
};
#endif SEAT_H
