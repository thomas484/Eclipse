//============================================================================
// Name        : programa1.cpp
// Author      : Thomas Alvarez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int y[10];
	     cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	y[0] = 2*5*5+3*5+7; //ORDEN DE EJECUCIÓN: 10*5+3*5+7
	                                     // 50+3*5+7
	                                     // 50+15+7
	                                     // 72
	     cout << "Ingrese un numero entero mayor o igual a 10: ";
	 cin >> y[1];
	if(y[1]>=10)
	  cout << "El resultado de 2*5*5+3*5+7 + "<< y[1]<< " es: "<< y[0] + y[1] << endl;
	else
		cout << "El numero ingresado es menor a 10, entonces su numero por defecto es: "<< y[0]<< endl;
	cout << "\n\n\n\n\n" << "hi" << endl ; //crea varios saltos de línea para limpiar y separar la consola
	cout << "Aquí comienza a imprimir  nuevamente";

	return 0;
}
