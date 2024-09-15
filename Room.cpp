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
<<<<<<< HEAD
=======
void Room::book(int _bookedSeat) {
	for (int i = 0; i < 7;i++) {
		for (int e = 0; e < 7; e++) {
			if (seats[i][e].getNumber() == _bookedSeat and seats[i][e].getBusy()==false) {
				seats[i][e].setBusy(true);
				system("cls");
				std::cout << "\nSu asiento ha sido reservado con exito, este es su consecutivo: "<<consecutive<<"\n\n";
				system("pause");
			}
			else if (seats[i][e].getBusy() == true and seats[i][e].getNumber() == _bookedSeat) {
				std::cout << "\nEste asiento ya est� reservado, intente con otro\n";
			}
		}
	}
}
>>>>>>> 175685f (Se completó el proyecto)
void Room::setNumber(int _number) {
	number = _number;
}
int Room::getNumber() {
	return number;
}
void Room::setPrice(int _price) {
	price = _price;
}
int Room::getPrice() {
	return price;
<<<<<<< HEAD
}
=======
}
void Room::generateConsecutive() {
	int randNum;
	randNum = (rand() % 32000) + 10000;
	consecutive = randNum;
}
int Room::getConsecutive() {
	return consecutive;
}
>>>>>>> 175685f (Se completó el proyecto)
