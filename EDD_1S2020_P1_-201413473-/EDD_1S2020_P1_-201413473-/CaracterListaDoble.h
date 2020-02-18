#include <iostream>
#include "complex.h"
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
	void eliminar(char a);

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
void CaracterListaDoble::eliminar(char a){
    NodoCaracter* actual;
    bool encontrado = false;

    actual = cabeza;
    while((actual != NULL) && (!encontrado)){ //while de busqueda
    encontrado = (actual -> datoNodo() == a);
    if(!encontrado){
        actual = actual -> adelanteNodo();
        }
    }
    //ENlace de nodo anterior con el siguiente
    if(actual != NULL){
        if(actual == cabeza){
            cabeza = actual ->adelanteNodo();
            if(actual ->adelanteNodo() != NULL){
                actual ->adelanteNodo() ->ponerAtras(NULL);
            }
        }else if(actual->adelanteNodo() != NULL){
            actual ->atrasNodo()->ponerAdelante(actual->adelanteNodo());
            actual ->adelanteNodo()->ponerAtras(actual->atrasNodo());
        }else
            actual->atrasNodo()->ponerAdelante(NULL);
    }

}

