#include <iostream>
#include "complex.h" ;
#include<conio.h>;
#include "NodoCaracter.h"
using namespace std;
#pragma once
class CaracterListaDoble
{
protected:
	NodoCaracter* cabeza;
public:
	CaracterListaDoble() {
		cabeza = NULL;
	}
	void insertarInicio(char a);
	void insertarDespues(char a, NodoCaracter* anterior);
	void visualizar();

};

void CaracterListaDoble::insertarInicio(char a) {
	NodoCaracter* nuevo;
	nuevo = new NodoCaracter(a);
	nuevo->ponerAdelante(cabeza);

	if (cabeza != NULL)
	{
		cabeza->ponerAtras(nuevo);
	}
	cabeza = nuevo;

}
void CaracterListaDoble::insertarDespues(char a, NodoCaracter* anterior) {
	NodoCaracter* nuevo;
	nuevo = new NodoCaracter(a);
	nuevo->ponerAdelante(anterior->adelanteNodo());
	if (anterior->adelanteNodo() != NULL) {
		anterior->adelanteNodo()->ponerAtras(nuevo);
	}
	anterior->ponerAdelante(nuevo);
	nuevo->ponerAtras(nuevo);
}
void CaracterListaDoble::visualizar() {
	NodoCaracter* n = cabeza;
	char c;
	std::cout << "----------------------------\n";
	while (n != NULL) {
		std::cout << n->datoNodo()<<"\n";
		n = n->adelanteNodo();
	}
	std::cout << "----------------------------\n";
}

