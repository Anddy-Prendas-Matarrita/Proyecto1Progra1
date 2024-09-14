#include "Room.h"

Room::Room() {

}
Room::Room(int _number, int _price, std::string _kind) {
	number = _number;
	price = _price;
	kind = _kind;
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
	consecutive = 10000 + rand() % 32767;
}
Room::~Room() {
	
}
void Room::setKind(std::string _kind) {
	kind = _kind;
}
std::string Room::getKind() {
	return kind;
}
void Room::showMatrix()
{
	for (int f = 0; f < 7; f++) {
		for (int c = 0; c < 7; c++) {
			std::cout <<"|" << seats[f][c].getNumber();
			if (seats[f][c].getBusy() == true) {
				std::cout << ".Reservado| ";
			}
			else if (seats[f][c].getBusy() == false) {
				std::cout << ".Libre| ";
			}
		}
		std::cout << "\n";
	}
}
void Room::setBoolMatrix(int _chosenSeat) {
	for (int i = 0; i < 7;i++) {
		for (int e = 0; e < 7; e++) {
			if (seats[i][e].getNumber() == _chosenSeat and seats[i][e].getBusy()==false) {
				seats[i][e].setBusy(true);
				std::cout << "\nSu asiento ha sido reservado con exito, este es su consecutivo: "<<consecutive;


			}
			else if (seats[i][e].getBusy() == true and seats[i][e].getNumber() == _chosenSeat) {
				std::cout << "\nEste asiento ya est� reservado, intente con otro\n";
			}
		}
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
int Room::getConsecutive() {
	return consecutive;
}