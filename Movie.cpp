#include "Movie.h" 
Movie::Movie() {

}
Movie::Movie(std::string _name, int _year, int _duration, std::string _country, float _review, int _idMovie) {
	name = _name;
	year = _year;
	duration = _duration;
	country = _country;
	review = _review;
	idMovie = _idMovie;
}
Movie::~Movie() {

}

void Movie::setName(std::string _name) {
	name = _name;
}
std::string Movie::getName() {
	return name;
}
void Movie::setYear(int _year) {
	year = _year;
}
int Movie::getYear() {
	return year;
}
void Movie::setDuration(int _duration) {
	duration = _duration;
}
int Movie::getDuration() {
	return duration;
}
void Movie::setCountry(std::string _country) {
	country = _country;
}
std::string Movie::getCountry() {
	return country;
}
void Movie::setReview(int _review) {
	review = _review;
}
 float Movie::getReview() {
	return review;
}
 void Movie::setIdMovie(int _idMovie) {
	 idMovie = _idMovie;
 }
 int Movie::getIdMovie() {
	 return idMovie;
 }