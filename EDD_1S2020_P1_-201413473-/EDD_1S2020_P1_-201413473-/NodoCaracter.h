#pragma once
#include <complex.h>
#include <conio.h>

#ifndef _NODOH_
#define _NODOH_
class NodoCaracter
{
protected:
	char letra;
	NodoCaracter* adelante;
	NodoCaracter* atras;
public:
	NodoCaracter(char c) {
		letra = c;
		adelante = atras = NULL;
	}

	char datoNodo() const {
		return letra;
	}

	NodoCaracter* adelanteNodo() const {
		return adelante;
	}
	NodoCaracter* atrasNodo() const {
		return atras;
	}

	void ponerAdelante(NodoCaracter* a) {
		adelante = a;
	}

	void ponerAtras(NodoCaracter* a) {
		atras = a;
	}

};



#endif // !_NODO_H
