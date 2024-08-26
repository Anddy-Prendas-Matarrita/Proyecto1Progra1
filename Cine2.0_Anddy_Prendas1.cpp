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
	std::cout << "\nResena: " << movieS.getReview() << "/10";
}

int main() {
	int count = 0;
	srand(time(NULL));
	Movie movie1("Kung Fu Chamba: La Leyenda del Chambeador", 2023, 110, "China", 9);
	Movie movie2("Rapidos y Crikosos 11", 2024, 118, "Estados Unidos", 5);
	Movie movie3("El Vicio Intenso 2", 2024, 104, "Estados Unidos", 8);
	Movie movie4("Negranieves y Los 7 Esclavitos", 2019, 129, "Mexico", 10);
	Movie moviesVector[] = { movie1,movie2,movie3,movie4 };
	Movie newMoviesVector[9];

	int infiniteWhileVariable = 1;
	while (infiniteWhileVariable == 1) {

		char optionMenu;
		std::cout << "\nBienvenidos al sistema de compra de tickets de Anddy s Cinema\n\n";
		std::cout << "a. Archivo\n";
		std::cout << "b. Mantenimiento\n";
		std::cout << "c. Reserva\n";
		std::cout << "d. Venta\n";
		std::cout << "Opcion: ";
		std::cin >> optionMenu;
		std::cout << "\n";

		if (optionMenu == 'a') {
			system("cls");
			int menuVariable1 = 1;
			while (menuVariable1 == 1) {
				char optionMenu1;
				std::cout << "\na. Acerca de\n";
				std::cout << "b. Salir\n";
				std::cout << "Opcion: ";
				std::cin >> optionMenu1;

				if (optionMenu1 == 'a') {
					system("cls");
					std::cout << "\nAnddy Elih Prendas Matarrita\nEstudiante apasionado por la programacion y fundador Anddy s Cinema en 2024\n";
				}
				else if (optionMenu1 == 'b') {
					system("cls");
					menuVariable1 = 0;
					std::cout << "Has salido";
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
				system("cls");
				char optionMenu2;
				std::cout << "\na. Peliculas\n";
				std::cout << "b. Salas\n";
				std::cout << "c. Horarios\n";
				std::cout << "d. Salir\n";
				std::cout << "Opcion: ";
				std::cin >> optionMenu2;

				if (optionMenu2 == 'a') {
					system("cls");
					
					for (int i = 0; i < 4; i++) {
						showMovieInfo(moviesVector[i]);
					}
					for (int i = 0; i < 4; i++) {
						if (newMoviesVector[i].getReview() > 0){
							showMovieInfo(newMoviesVector[i]);
					}
					}
					int anotherWhileV = 1;
					char option0;
					while (anotherWhileV == 1) {
						std::cout << "\n\na-Agregar nueva pelicula: ";
						std::cout << "\n\nb-Salir: ";
						std::cin >> option0;
						if (option0 == 'a' and count<10) {
						
							std::string newName;
							int newReview;
							int newYear;
							int newDuration;
							std::string newCountry;

							std::cout << "\nEscriba el nombre de la nueva pelicula: ";
							std::cin >> newName;
							std::cout << "\nEscriba el anio de la nueva pelicula: ";
							std::cin >> newYear;
							while (newYear < 0 or newYear>2024) {
								std::cin >> newYear;
								}
							std::cout << "\nEscriba la puntuacion de la nueva pelicula del 1 al 10: ";
							std::cin >> newReview;
							while (newReview < 0 or newReview>10) {
								std::cin >> newReview;
							}
							std::cout << "\nEscriba la duración de la nueva pelicula: ";
							std::cin >> newDuration;
							std::cout << "\nEscriba el pais de la nueva pelicula: ";
							std::cin >> newCountry;

							newMoviesVector[count].setName(newName);
							newMoviesVector[count].setYear(newYear);
							newMoviesVector[count].setReview(newReview);
							newMoviesVector[count].setDuration(newDuration);
							newMoviesVector[count].setCountry(newCountry);
							count++;
						}
						else {
							anotherWhileV = 0;
						}
					}
				}
				else if (optionMenu2 == 'b') {
					system("cls");
				}
				else if (optionMenu2 == 'c') {
					system("cls");
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