// EDD_1S2020_P1_-201413473-.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "complex.h"
#include <conio.h>
#include <string>
#include "CaracterListaDoble.h"
using namespace std;

int main()
{

	void Menu();
	void Editor();
	Editor();
}
void Editor() {
	CaracterListaDoble* listaCaracter = new CaracterListaDoble();

	string contenido;
	std::cout << "Ingresar Texto \n";
	getline(cin, contenido);
	for (int i = 0; i < contenido.length(); i++)
	{
		std::cout << "se inserto a la liste" << contenido[i] << "\n";
		listaCaracter->insertarInicio(contenido[i]);
	}
	std::cout << "-----------------------\n";
	listaCaracter->visualizar();

}
void Menu() {
	int opcion;
	std::cout << "UNIVERSIDAD DE SAN CARLOS DE GUATEMALA\n";
	std::cout << "FACULTAD DE INGENIERIA\n";
	std::cout << "ESTRUCTURA DE DATO\n";
	std::cout << "PRACTICA 1\n";
	std::cout << "MAYNOR ROLANDO GARCIA CASTRO\n";
	std::cout << "CARNET 201413473/ CUI 224351170101\n";
	std::cout << "--------------------------------\n";

	std::cout << "MENU\n";
	std::cout << "Crear archivo\n";
	std::cout << "Abrir Archivo\n";
	std::cout << "Archivos Recientes\n";
	std::cout << "Salir\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		Editor();
		break;
	case 2:
		std::cout << "Se eligio opcion 2";
		break;
	case 3:
		std::cout << "Se eligio opcion 3";
		break;
	case 4:
		std::cout << "Se eligio opcion 4";
		break;
	default:
		std::cout << "Selecciona una opcion valida (1-4)";
		Menu();
		break;
	}
}



