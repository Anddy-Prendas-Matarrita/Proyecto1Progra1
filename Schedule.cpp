#include "Schedule.h"

Schedule::Schedule(Movie _selectedMovie, Room _selectedRoom, std::string _date, std::string _startTime, std::string _endTime) {
	selectedMovie = _selectedMovie;
	selectedRoom = _selectedRoom;
	date = _date;
	startTime = _startTime;
	endTime = _endTime;
}
Schedule::~Schedule() {

}
void Schedule::showSeats(){
	selectedRoom.showMatrix();
}

std::string Schedule::getDate() {
	return date;
}
std::string Schedule::getStartTime() {
	return startTime;
}
std::string Schedule::getEndTime() {
	return endTime;
}
int Schedule::getRoomNum() {
	int toReturn = selectedRoom.getNumber();
	return toReturn;
}
std::string Schedule::getMovieName() {
	return selectedMovie.getName();
}
int Schedule::getRoomPrice() {
	return selectedRoom.getPrice();
}