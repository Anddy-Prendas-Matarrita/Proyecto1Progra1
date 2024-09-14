// Cine2.0_Anddy_Prendas1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Movie.h"
#include "Schedule.h"
#include "Seat.h"
#include "Room.h"
#include <string>

void showMovieInfo(Movie movieS) {
	std::cout << "\n\n-Titulo: " << movieS.getName();
	std::cout << "\nAno: " << movieS.getYear();
	std::cout << "\nDuracion: " << movieS.getDuration() << " minutos";
	std::cout << "\nPais: " << movieS.getCountry();
	std::cout << "\nResena: " << movieS.getReview() << "/10\n";
}
void showRoomInfo(Room roomS) {
	std::cout << "\n\n-Sala: " << roomS.getNumber();
	std::cout << "\nTipo: " << roomS.getKind();
	std::cout << "\nPrecio: " << roomS.getPrice() << " colones\n";
}
void showScheduleInfo(Schedule scheduleS) {
	std::cout << "\nPelicula: " << scheduleS.getMovieName();
	std::cout << "\nHorario: " << scheduleS.getStartTime() << " a " << scheduleS.getEndTime();
	std::cout << "\nFecha: " << scheduleS.getDate();
	std::cout << "\nSala: " << scheduleS.getRoomNum();
	std::cout << "\nPrecio: " << scheduleS.getRoomPrice() << " colones\n";
}

int main() {
	int count = 0;
	srand(time(NULL));
	Movie movie1("Kung Fu Chamba: La Leyenda del Chambeador", 2023, 110, "China", 9, 1);
	Movie movie2("Rapidos y Crikosos 11", 2024, 118, "Estados Unidos", 5, 2);
	Movie movie3("El Vicio Intenso 2", 2024, 104, "Estados Unidos", 8, 3);
	Movie movie4("Negranieves y Los 7 Esclavitos", 2019, 129, "Mexico", 10, 4);
	Movie moviesVector[] = { movie1,movie2,movie3,movie4 };
	Movie newMoviesVector[10];
	Room room1(1, 7000, "2D");
	Room room2(2, 10000,"3D");
	Room roomArray[] = { room1,room2 };
	Schedule schedule1(movie1,room1,"20/06/2024","11:00 am","01:00 pm",1);
	Schedule schedule2(movie2, room2, "20/06/2024", "01:00 am", "03:00 pm",2);
	Schedule schedule3(movie3, room1, "20/06/2024", "03:00 am", "05:00 pm",3);
	Schedule schedule4(movie4, room2, "20/06/2024", "05:00 am", "08:00 pm",4);
	Schedule schedule5(movie3, room1, "21/06/2024", "11:00 am", "01:00 pm",5);
	Schedule schedule6(movie1, room2, "21/06/2024", "01:00 am", "03:00 pm",6);
	Schedule schedule7(movie2, room1, "21/06/2024", "03:00 am", "05:00 pm",7);
	Schedule schedule8(movie4, room2, "21/06/2024", "05:00 am", "08:00 pm",8);
	Schedule scheduleArray[] = { schedule1,schedule2,schedule3,schedule4,schedule5,schedule6,schedule7,schedule8 };

	int infiniteWhileVariable = 1;
	while (infiniteWhileVariable == 1) {

		char optionMenu;
		std::cout << "---------------------------------------------\n|Bienvenidos al sistema de compra de tickets|\n---------------------------------------------\n";
		std::cout << "|a. >Archivo<                               |\n";
		std::cout << "|b. >Mantenimiento<                         |\n";
		std::cout << "|c. >Reserva<                               |\n";
		std::cout << "|d. >Venta<                                 |\n";
		std::cout << "---------------------------------------------\nOpcion: ";
		std::cin >> optionMenu;
		std::cout << "\n";

		if (optionMenu == 'a') {
			system("cls");
			int menuVariable1 = 1;
			while (menuVariable1 == 1) {
				char optionMenu1;
				system("cls");
				std::cout << "---------------------------------------------\n|a. >Acerca de<                             |\n";
				std::cout << "|b. >Salir<                                 |\n---------------------------------------------\n";
				std::cout << "Opcion: ";
				std::cin >> optionMenu1;

				if (optionMenu1 == 'a') {
					system("cls");
					std::cout << "---------------------------------------------\n|Anddy Elih Prendas Matarrita                |\n|Estudiante apasionado por la programacion y |\n|creador de este sistema de compra de tickets|\n---------------------------------------------";
					system("pause");
				}
				else if (optionMenu1 == 'b') {
					system("cls");
					menuVariable1 = 0;
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'b') {
			system("cls");
			int menuVariable2 = 1;
			while (menuVariable2 == 1) {
				
				char optionMenu2;
				std::cout << "\na. Peliculas\n";
				std::cout << "b. Salas\n";
				std::cout << "c. Horarios\n";
				std::cout << "d. Salir\n";
				std::cout << "Opcion: ";
				std::cin >> optionMenu2;

				if (optionMenu2 == 'a') {
					system("cls");
					std::cout << "SECCION DE PELICULAS\n";
					for (int i = 0; i < 4; i++) {
						showMovieInfo(moviesVector[i]);
					}
					for (int i = 0; i < 4; i++) {
						if (newMoviesVector[i].getReview() > 0){
							showMovieInfo(newMoviesVector[i]);
					}
					}
					system("pause");
					int anotherWhileV = 1;
					char option0;
					while (anotherWhileV == 1) {
						system("cls");
						std::cout << "\na. Agregar nueva pelicula: ";
						std::cout << "\nb. Salir: ";
						std::cin >> option0;
						if (option0 == 'a' and count<10) {
						
							std::string newName;
							int newReview;
							int newYear;
							int newDuration;
							std::string newCountry;

							std::cout << "\nEscriba el nombre de la nueva pelicula: ";
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							getline(std::cin, newName);
							std::cout << "\nEscriba el anio de la nueva pelicula: ";
							std::cin >> newYear;
							while (newYear < 0 or newYear>2024) {
								std::cout << "Este ano no es valido, digite uno valido";
								std::cin >> newYear;
								}
							std::cout << "\nEscriba la puntuacion de la nueva pelicula del 1 al 10: ";
							std::cin >> newReview;
							while (newReview < 0 or newReview>10) {
								std::cout << "La resena no puede salir del rango 1-10";
								std::cin >> newReview;
							}
							std::cout << "\nEscriba la duración de la nueva pelicula: ";
							std::cin >> newDuration;
							std::cout << "\nEscriba el pais de la nueva pelicula: ";
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							getline(std::cin,newCountry);

							newMoviesVector[count].setName(newName);
							newMoviesVector[count].setYear(newYear);
							newMoviesVector[count].setReview(newReview);
							newMoviesVector[count].setDuration(newDuration);
							newMoviesVector[count].setCountry(newCountry);
							count++;
						}
						else if(option0=='b') {
							anotherWhileV = 0;
						}
						else {
							std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
						}
					}
				}
				else if (optionMenu2 == 'b') {
					system("cls");
					std::cout << "SECCION DE SALAS\n";
					for (int i = 0; i < 2; i++) {
						showRoomInfo(roomArray[i]);
					}
					system("pause");
				}
				else if (optionMenu2 == 'c') {
					system("cls");
					std::cout << "SECCION DE HORARIOS\n";
					for (int i = 0; i < 8; i++) {
						showScheduleInfo(scheduleArray[i]);
					}
					system("pause");
				}
				else if (optionMenu2 == 'd') {
					system("cls");
					menuVariable2 = 0;
					std::cout << "\nHas salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'c') {
			system("cls");
			int menuVariable3 = 1;
			while (menuVariable3 == 1) {
				char optionMenu3;
				std::cout << "\na. Peliculas";
				std::cout << "\nb. Salir";
				std::cout << "\nOpcion: ";
				std::cin >> optionMenu3;
				if (optionMenu3 == 'a') {
					system("cls");
					int bookMovie;
					int bookRoom;
					int bookSchedule;
					int idBook;
					int bookSeat;
					std::cout << "\nSeleccione la pelicula que desea ver de las siguientes\n-------------------------------------------------------\n";
					for (int i = 0; i < 4; i++) {
						int number = i+1;
						std::cout << number << ". " << moviesVector[i].getName()<<"\n";
					}
					std::cout << "Opcion: ";
					std::cin >> bookMovie;
					
						
					std::cout << "\nSeleccione la sala en la que desea ver la pelicula\n ";
					for (int i = 0; i < 9; i++) {
						if (bookMovie==scheduleArray[i].getIdMovie()) {
							std::cout << "Sala " << scheduleArray[i].getRoomNum()<<"\n";
						}
					}
					std::cout << "\nOpcion: ";
					std::cin >> bookRoom;
					
					std::cout << "\nSeleccione el horario en el que desea reservar (por numero de identificacion\n";
					for (int i = 0; i < 9; i++) {
						
						if (bookRoom==scheduleArray[i].getRoomNum() and bookMovie==scheduleArray[i].getIdMovie()) {
							std::cout << "\n\nNumero de identificacion: "<<scheduleArray[i].getIdSchedule() << "\nDia: " << scheduleArray[i].getDate();
							std::cout << "\nDe " << scheduleArray[i].getStartTime() << " a " << scheduleArray[i].getStartTime();
						}
					}
					std::cout << "\nEscriba el ID: ";
					std::cin >> idBook;
					system("cls");
					for (int i = 0; i < 9; i++) {
						if (idBook == scheduleArray[i].getIdSchedule()) {
							
							std::cout << "La lista de asientos es la siguiente:\n\n";
							scheduleArray[i].getRoom().showMatrix();
						}
					}
					std::cout << "\nDigite el numero de asiento que desea reservar: ";
					std::cin>> bookSeat;
					for (int i = 0; i < 9; i++) {
						if (bookRoom == scheduleArray[i].getRoomNum() and bookMovie == scheduleArray[i].getIdMovie() and idBook == scheduleArray[i].getIdSchedule()) {
							scheduleArray[i].getRoom().setBoolMatrix(bookSeat);
						}
					}
					
					//termina funcion
				}
				else if (optionMenu3 == 'b') {
					system("cls");
					menuVariable3 = 0;
					std::cout << "\nHas salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'd') {
			system("cls");
			int menuVariable4 = 1;
			while (menuVariable4 == 1) {
				char optionMenu4;
				std::cout << "\na. Peliculas";
				std::cout << "\nb. Salir";
				std::cout << "\nOpcion: ";
				std::cin >> optionMenu4;
				if (optionMenu4 == 'a') {
					system("cls");
					int userConsecutive;
					long idPersonal;
					long payCard;
					std::cout << "Digite su consecutivo para proceder con el pago: ";
					std::cin >> userConsecutive;
					for (int i = 0; i < 9; i++) {
						if (scheduleArray[i].getRoom().getConsecutive() == userConsecutive) {
							std::cout << "El monto a pagar es: " << scheduleArray[i].getRoom().getPrice()<<" colones"<<"\nDigite su numero de tarjeta: ";
							std::cin >> payCard;
							system("cls");
							std::cout << "\nDigite su numero de cedula: ";
							std::cin >> idPersonal;
							system("cls");
							std::cout << "\nSe ha concluido con el pago. Muchas gracias por su compra";
						}
						else {

						}
					}
				}
				else if (optionMenu4 == 'b') {
					system("cls");
					menuVariable4 = 0;
					std::cout << "\nHas salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else {
			system("cls");
			std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
		}
	}


	return 0;
}