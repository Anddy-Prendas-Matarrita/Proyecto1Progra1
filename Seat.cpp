#include "Seat.h"

Seat::Seat() {

}
Seat::Seat(int _number) {
	number = _number;
}
Seat::~Seat() {

}
void Seat::setNumber(int _number) {
	number = _number;
}
int Seat::getNumber() {
	return number;
}
void Seat::setBusy(bool _busy) {
	busy = _busy;
}
bool Seat::getBusy() {
	return busy;
}
