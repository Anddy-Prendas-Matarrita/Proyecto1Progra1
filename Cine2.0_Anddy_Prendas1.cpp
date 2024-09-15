// Cine2.0_Anddy_Prendas1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Movie.h"
#include "Schedule.h"
#include "Seat.h"
#include "Room.h"
#include <string>

void showMovieInfo(Movie movieS) {
	std::cout << "\n-----------------------------------------------------\n";
	std::cout << "|Titulo: " << movieS.getName()<<"|";
	std::cout << "\n|Ano: " << movieS.getYear() << "|";
	std::cout << "\n|Duracion: " << movieS.getDuration() << " minutos|";
	std::cout << "\n|Pais: " << movieS.getCountry() << "|";
	std::cout << "\n|Resena: " << movieS.getReview() << "/10|\n";
	std::cout << "-----------------------------------------------------";
}
void showRoomInfo(Room roomS) {
	std::cout << "\n-----------------------------------------------------";
	std::cout << "\n|Sala: " << roomS.getNumber() << "                                            |";
	std::cout << "\n|Tipo: " << roomS.getKind() << "                                           |";
	std::cout << "\n|Precio: " << roomS.getPrice() << " colones                               |\n";
	std::cout << "-----------------------------------------------------";
}
void showScheduleInfo(Schedule scheduleS) {
	std::cout << "\n---------------------------------------------------------------";
	std::cout << "\n|Pelicula: " << scheduleS.getMovieName(); 
	std::cout << "\n|Horario: " << scheduleS.getStartTime() << " a " << scheduleS.getEndTime();
	std::cout << "\n|Fecha: " << scheduleS.getDate();
	std::cout << "\n|Sala: " << scheduleS.getRoomNum();
	std::cout << "\n|Precio: " << scheduleS.getRoomPrice() << " colones\n";
	std::cout << "---------------------------------------------------------------";
}

int main() {
	bool pending = false;
	int count = 0;
	int globalConsecutive = 0;
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
		std::cout << "|e. >Salir del sistema<                     |\n";
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
				std::cout << ">Opcion: ";
				std::cin >> optionMenu1;

				if (optionMenu1 == 'a') {
					system("cls");
					int random = (rand() % 4)+1;
					if (random == 1) {
						std::cout << "-----------------------------------------------\n|<Anddy Elih Prendas Matarrita                |\n|Estudiante apasionado por la programacion y  |\n|creador de este sistema de compra de tickets>|\n-----------------------------------------------\n\n";
					}
					else if (random == 2) {
					    std::cout << "-----------------------------------------------\n|<Este programa fue creado para un proyecto   |\n|universitario.... espero sacar 100>          |\n-----------------------------------------------\n\n";
					}
					else if (random == 3) {
						std::cout << "-----------------------------------------------\n|<Si alguna vez te sientes mal, recuerda que  |\n|siempre puedes ver una buena peli>           |\n-----------------------------------------------\n\n";
					}
					else if (random == 4) {
						std::cout << "-----------------------------------------------\n|<Tenemos una amplia cantidad de peliculas que|\n|te pueden gustar>                            |\n-----------------------------------------------\n\n";
					}
					system("pause");
				}
				else if (optionMenu1 == 'b') {
					system("cls");
					menuVariable1 = 0;
				}
				else {
					system("cls");
					std::cout << "<Opcion no valida, vuelva a intentarlo con otra opcion>\n";
				}
			}
		}
		else if (optionMenu == 'b') {
			system("cls");
			int menuVariable2 = 1;
			while (menuVariable2 == 1) {
				
				char optionMenu2;
				std::cout << "---------------------------------------------\n|a. >Peliculas<                             |\n";
				std::cout << "|b. >Salas<                                 |\n";
				std::cout << "|c. >Horarios<                              |\n";
				std::cout << "|d. >Salir<                                 |\n---------------------------------------------\n";
				std::cout << ">Opcion: ";
				std::cin >> optionMenu2;

				if (optionMenu2 == 'a') {
					system("cls");
					std::cout << "---------------------------------------------\n|SECCION DE PELICULAS                       |\n---------------------------------------------";
					for (int i = 0; i < 4; i++) {
						showMovieInfo(moviesVector[i]);
					}
					for (int i = 0; i < 4; i++) {
						if (newMoviesVector[i].getReview() > 0){
							showMovieInfo(newMoviesVector[i]);
					}
					}
					std::cout << "\n\n";
					system("pause");
					int whileVariable = 1;
					char option0;
					while (whileVariable == 1) {
						system("cls");
						std::cout << "---------------------------\n|a. Agregar nueva pelicula|";
						std::cout << "\n|b. Salir                 |\n---------------------------\nOpcion: ";
						std::cin >> option0;
						if (option0 == 'a' and count<10) {
							system("cls");
							std::string newName;
							int newReview;
							int newYear;
							int newDuration;
							std::string newCountry;

							std::cout << "\n>Escriba el nombre de la nueva pelicula: ";
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							getline(std::cin, newName);
							system("cls");
							std::cout << "\n>Escriba el anio de la nueva pelicula: ";
							std::cin >> newYear;
							while (newYear < 0 or newYear>2024) {
								system("cls");
								std::cout << "\n>Este ano no es valido, digite uno valido: ";
								std::cin >> newYear;
								}
							system("cls");
							std::cout << "\n>Escriba la puntuacion de la nueva pelicula del 1 al 10: ";
							std::cin >> newReview;
							while (newReview < 0 or newReview>10) {
								system("cls");
								std::cout << "\n>Invalido, digite un numero en el rango del 1-10: ";
								std::cin >> newReview;
							}
							system("cls");
							std::cout << "\n>Escriba la duracion de la nueva pelicula en minutos: ";
							std::cin >> newDuration;
							system("cls");
							std::cout << "\n>Escriba el pais de la nueva pelicula: ";
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							getline(std::cin,newCountry);

							newMoviesVector[count].setName(newName);
							newMoviesVector[count].setYear(newYear);
							newMoviesVector[count].setReview(newReview);
							newMoviesVector[count].setDuration(newDuration);
							newMoviesVector[count].setCountry(newCountry);
							count++;
							system("cls");
							std::cout << "<Se ha agregado la pelicula al sistema>\n\n";
							system("pause");
						}
						else if(option0=='b') {
							system("cls");
							whileVariable = 0;
						}
						else {
							std::cout << "<Opcion no valida, vuelva a intentarlo con otra opcion>\n";
						}
					}
				}
				else if (optionMenu2 == 'b') {
					system("cls");
					std::cout << "-----------------------------------------------------\n|SECCION DE SALAS                                   |\n-----------------------------------------------------";
					for (int i = 0; i < 2; i++) {
						showRoomInfo(roomArray[i]);
					}
					std::cout << "\n\n";
					system("pause");
					system("cls");
				}
				else if (optionMenu2 == 'c') {
					system("cls");
					std::cout << "----------------------------------\n|SECCION DE HORARIOS             |\n----------------------------------";
					for (int i = 0; i < 8; i++) {
						showScheduleInfo(scheduleArray[i]);
					}
					std::cout << "\n\n";
					system("pause");
					system("cls");
				}
				else if (optionMenu2 == 'd') {
					system("cls");
					menuVariable2 = 0;
					
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
				system("cls");
				std::cout << "----------------------------------\n|a. Peliculas                    |";
				std::cout << "\n|b. Salir                        |\n----------------------------------";
				std::cout << "\nOpcion: ";
				std::cin >> optionMenu3;
				if (pending == true) {
					system("cls");
					std::cout << "<Aun tienes una reserva pendiente de pago>\n\n";
					system("pause");
					menuVariable3 = 0;
					system("cls");
				}
				else {
					if (optionMenu3 == 'a') {
						system("cls");
						int bookMovie;
						int bookRoom;
						int bookSchedule = 0;
						int idBook;
						int bookSeat;
						std::cout << "--------------------------------------------------------\n|Seleccione la pelicula que desea ver de las siguientes|\n--------------------------------------------------------\n";
						for (int i = 0; i < 4; i++) {
							int number = i + 1;
							std::cout << "|" << number << ". " << moviesVector[i].getName() << "|\n";
						}
						std::cout << "--------------------------------------------------------\n";
						std::cout << "Opcion: ";
						std::cin >> bookMovie;
						while (bookMovie > 4 or bookMovie < 1) {
							system("cls");
							std::cout << "--------------------------------------------------------\n|Opcion no existente, vuelva a intentarlo              |\n--------------------------------------------------------\n";
							for (int i = 0; i < 4; i++) {
								int number = i + 1;
								std::cout << "|" << number << ". " << moviesVector[i].getName() << "|\n";
							}
							std::cout << "--------------------------------------------------------\n";
							std::cout << "Opcion: ";
							std::cin >> bookMovie;
						}

						system("cls");
						std::cout << "----------------------------------------------------\n|Seleccione la sala en la que desea ver la pelicula|\n----------------------------------------------------\n";
						for (int i = 0; i < 9; i++) {
							if (bookMovie == scheduleArray[i].getIdMovie()) {
								std::cout << "|Sala " << scheduleArray[i].getRoomNum() << "                                            |\n";
							}
						}
						std::cout << "----------------------------------------------------";
						std::cout << "\nOpcion: ";
						std::cin >> bookRoom;
						system("cls");
						std::cout << "-------------------------------------------------------------------------------\n|Seleccione el horario en el que desea reservar (por numero de identificacion)|\n-------------------------------------------------------------------------------";
						for (int i = 0; i < 9; i++) {

							if (bookRoom == scheduleArray[i].getRoomNum() and bookMovie == scheduleArray[i].getIdMovie()) {
								std::cout << "\n|Numero de identificacion: " << scheduleArray[i].getIdSchedule() << "\n|Dia: " << scheduleArray[i].getDate();
								std::cout << "\n|De " << scheduleArray[i].getStartTime() << " a " << scheduleArray[i].getEndTime();
								std::cout << "\n-------------------------------------------------------------------------------\n";
							}

						}
						std::cout << "\n>Escriba el ID: ";
						std::cin >> idBook;
						system("cls");
						for (int i = 0; i < 9; i++) {
							if (idBook == scheduleArray[i].getIdSchedule()) {

								std::cout << "---------------------------------------------------------------------------------------------------\nLa lista de asientos es la siguiente:                                                             |\n---------------------------------------------------------------------------------------------------\n";
								scheduleArray[i].getRoom().showMatrix();
								std::cout << "---------------------------------------------------------------------------------------------------\n";
							}
						}
						std::cout << "\n>Digite el numero de asiento que desea reservar: ";
						std::cin >> bookSeat;
						while (bookSeat < 1 or bookSeat > 49) {
							system("cls");
							std::cout << "\n>El asiento digitado no existe, vuelva a intentarlo: ";
							std::cin >> bookSeat;
						}
						for (int i = 0; i < 9; i++) {
							if (bookRoom == scheduleArray[i].getRoomNum() and bookMovie == scheduleArray[i].getIdMovie() and idBook == scheduleArray[i].getIdSchedule()) {
								scheduleArray[i].generateConsecutiveRoom();
								scheduleArray[i].book(bookSeat);
								globalConsecutive = scheduleArray[i].getConsecutive();
							}
						}
						pending = true;
						menuVariable3 = 0;
						system("cls");
					}
					else if (optionMenu3 == 'b') {
						system("cls");
						menuVariable3 = 0;
					}
					else {
						system("cls");
						std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
					}
				}
			}
		}
		else if (optionMenu == 'd') {
			system("cls");
			int menuVariable4 = 1;
			while (menuVariable4 == 1) {
				char optionMenu4;
				std::cout << "------------------------------------\n|a. Peliculas                      |";
				std::cout << "\n|b. Salir                          |\n------------------------------------";
				std::cout << "\nOpcion: ";
				std::cin >> optionMenu4;
				if (optionMenu4 == 'a') {
					system("cls");
					int userConsecutive=0;
					long idPersonal;
					long payCard;
					std::cout << ">Digite su consecutivo para proceder con el pago: ";
					std::cin >> userConsecutive;
					for (int i = 0; i < 9; i++) {
						if (globalConsecutive == userConsecutive) {
							system("cls");
							std::cout << "<El monto a pagar es: " << scheduleArray[i].getRoom().getPrice()<<" colones>"<<"\n>Digite su numero de tarjeta: ";
							std::cin >> payCard;
							system("cls");
							std::cout << "\n>Digite su numero de cedula: ";
							std::cin >> idPersonal;
							system("cls");
							std::cout << "\n<Se ha concluido con el pago. Muchas gracias por su compra>\n\n";
							system("pause");
							system("cls");
							pending = false;
							i = 8;
						}
						else {
							system("cls");
							std::cout << "\nNo existe una reserva con este consecutivo\n";
							i = 8;
						}
					}
					globalConsecutive = 0;
				}
				else if (optionMenu4 == 'b') {
					system("cls");
					menuVariable4 = 0;
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'e') {
			system("cls");
			std::cout << "<Has salido....te arrepentiras>\n";
			infiniteWhileVariable = 0;
		}
		else {
			system("cls");
			std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
		}

	}


	return 0;
}