#include "Room.h"

Room::Room() {

}
Room::Room(int _number, int _amountOfSeats, int _price) {
	number = _number;
	amountOfSeats = _amountOfSeats;
	price = _price;
	int aux = 0;
	for (int f = 0; f < 7; f++) {
		for (int c = 0; c < 7; c++) {
			aux++;
			seats[f][c].setNumber(aux);
		}
	}
	int numRand = 0;
	bool newBool;
	for (int i = 0; i < 7; i++) {
		for (int e = 0; e < 7; e++) {
			numRand = 1 + rand() % 2;
			if (numRand == 1) {
				newBool = true;
				seats[i][e].setBusy(newBool);
			}
		}
	}
}
Room::~Room() {
	
}
void Room::showMatrix()
{
	for (int f = 0; f < 7; f++) {
		for (int c = 0; c < 7; c++) {
			std::cout << seats[f][c].getNumber();
			if (seats[f][c].getBusy() == true) {
				std::cout << ".R ";
			}
			else if (seats[f][c].getBusy() == false) {
				std::cout << ".D ";
			}
		}
		std::cout << "\n";
	}
}
void Room::setNumber(int _number) {
	number = _number;
}
int Room::getNumber() {
	return number;
}
void Room::setAmountOfSeats(int _amountOfSeats) {
	amountOfSeats = _amountOfSeats;
}
int Room::getAmountOfSeats() {
	return amountOfSeats;
}
void Room::setPrice(int _price) {
	price = _price;
}
int Room::getPrice() {
	return price;
}