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
	int notas[10];
	float promedio;
	//char a;
	     cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	     for (int i = 0;i<3;i++){
	     cout << "Ingrese la nota n°"<<(i+1)<< ": ";
	     cin >> notas[i];
	     }
	     promedio = (notas[0]+notas[1]+notas[2])/3;
	     cout << "Su promedio es de: "<< promedio << endl;

	/*if(y[0]>0)
	  cout << "El resultado de "<< y[1]<< " es: "<< y[0] + y[1] << endl;
	else
		cout << "El numero ingresado es menor a 10, entonces su numero por defecto es: "<< y[0]<< endl;
	cout << "\n\n\n\n\n" << "hi" << endl ; //crea varios saltos de línea para limpiar y separar la consola
	cout << "Aquí comienza a imprimir  nuevamente"<< endl;
	cout << "Ingrese cualquier caracter de un solo digito: ";
	cin >> a;
	cout << "El equivalente a un entero del caracter es: "<< static_cast<int>(a) << endl; //usa un cast de char a entero
*/
	return 0;
}
