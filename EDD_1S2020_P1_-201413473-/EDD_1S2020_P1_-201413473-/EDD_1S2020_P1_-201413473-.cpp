// EDD_1S2020_P1_-201413473-.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <complex.h>
#include <string>
#include "CaracterListaDoble.h"
#include <fstream>
#include <ncurses.h>

using namespace std;

int main()
{
	void Menu();
	void Editor();
//	Editor();
    initscr();
	Menu();
    endwin();
//
	return 0;
}
void Editor() {
	CaracterListaDoble* listaCaracter = new CaracterListaDoble();
	initscr();
	int c;
	char i;
        printw("");
	while((c=getch())!=27){
	if((c=getch())== 0407){
        printw("presionaste la a    ");
	}
 	listaCaracter->insertarInicio(c);
    refresh();
	}
    listaCaracter->visualizar();
    getch();
	//endwin();
/*
	string contenido;
	std::cout << "Ingresar Texto \n";
	getline(cin, contenido);
	ofstream file;
	file.open("C:\\Users\\SURFACE\\Documents\\EDD\\prueba.txt");
	file << "digraph G { ";
	for (int i = 0; i < contenido.length(); i++)
	{
		if (i==0 || i==contenido.length()-1)
		{
			file << "\"" << contenido[i] << "\"->\"";
		}else{
			file << contenido[i] << "\"->\"" << contenido[i - 1]<<"\"\n\"";
			file << contenido[i] << "\"->\"";

		}

		std::cout << "se inserto a la liste" << contenido[i] << "\n";
		listaCaracter->insertarInicio(contenido[i]);
	}
	file << "}";
	file.close();
	std::cout << "-----------------------\n";
	listaCaracter->visualizar();
*/

}
void Menu() {
    mvprintw(3,5,"UNIVERSIDAD DE SAN CARLOS DE GUATEMALA");
    refresh();
    mvprintw(4,5,"FACULTAD DE INGENIERIA");
    refresh();
    mvprintw(5,5,"ESTRUCTURA DE DATO");
    refresh();
    mvprintw(6,5,"PRACTICA 1");
    refresh();
    mvprintw(7,5,"MAYNOR ROLANDO GARCIA CASTRO");
    refresh();
    mvprintw(8,5,"CARNET 201413473/ CUI 224351170101");
    refresh();
    mvprintw(9,5,"-----------------------------------");
    refresh();

    WINDOW * menuwin = newwin(7,40,15,4);
    box(menuwin,0,0);
    refresh();
    wrefresh(menuwin);

    keypad(menuwin,true);
    string opciones[4] = {"Crear Archivo", "Abrir Archivo","Archivos Recientes", "Salir"};
    int opcion;
    int iniciando = 0;

    while(1){
        for(int i = 0; i < 4 ;i++){
            if(i == iniciando)
                wattron(menuwin, A_REVERSE);
            mvwprintw(menuwin,i+1,1,opciones[i].c_str() );
            wattroff(menuwin,A_REVERSE);
        }
        opcion = wgetch(menuwin);
        switch(opcion){
        case KEY_UP:
            iniciando--;
            if(iniciando == -1){
                iniciando = 0;
            }
            break;
        case KEY_DOWN:
            iniciando++;
            if(iniciando == 4){
                iniciando = 3;
            }
            break;
        default:
            break;
        }
        if(opcion == 10){
            break;
        }
    }
        switch(iniciando){
        case 0:
            move(0,0);
            clrtobot();
            Editor();
            break;
        case 1:
            printw("Opcion 2");
            break;
        case 2:
            printw("opcion 3");
            break;
        case 3:
            printw("opcion 4");
            break;
        default:
            break;
        }






}



