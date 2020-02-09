// EDD_1S2020_P1_-201413473-.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <complex.h>
#include <conio.h>
using namespace std;
int main()
{
	void Menu();


	Menu();
}


void Menu() {
	int opcion;

	std::cout << "UNIVERSIDAD DE SAN CARLOS DE GUATEMALA\n";
	std::cout << "FACULTAD DE INGENIERIA\n";
	std::cout << "ESTRUCTURA DE DATO\n";
	std::cout << "PRACTICA 1\n";
	std::cout << "MAYNOR ROLANDO GARCIA CASTRO\n";
	std::cout << "CARNET 201413473/ CUI 224351170101\n";

	std::cout << "MENU\n";
	std::cout << "Crear archivo\n";
	std::cout << "Abrir Archivo\n";
	std::cout << "Archivos Recientes\n";
	std::cout << "Salir\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		std::cout << "Se eligio opcion 1";
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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
