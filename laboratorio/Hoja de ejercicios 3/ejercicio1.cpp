/*Ejercicio 1
Ricardo José Méndez López 00103719*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrar(int arreglo[], int tamano){
	for (int i=0; i<tamano; i++) {
		cout << arreglo[i] << " " << endl;
	}
}

void pares(int arreglo[], int tamano){
	for (int i=0; i<tamano; i++) {
		if (arreglo[i]%2==0){
        cout << arreglo[i] << " " << endl;
		}
	}
}

void impares(int arreglo[], int tamano){
	for (int i=0; i<tamano; i++) {
		if (arreglo[i]%2!=0) {
			cout << arreglo[i] << " " << endl;
		}
	}
}


void invertir(int arreglo[], int tamano){
	for (int i=(tamano)-1; i>=0; i--) {
		cout << arreglo[i] << " " << endl;
	}
}

int main()
{
    int numelementos=0;
    int opcion = 0;

    cout << "Ingrese el numero de elementos: ";
    cin>>numelementos;

	cout << "\nGenerando numeros aleatorios..." << endl;

	int arreglo[numelementos];

	//Semilla y numeros aleatorios
	srand(time(0));
	for (int i=0; i<numelementos; i++){
		arreglo[i] = 1+rand()%100;
	}
	bool continuar = true;

	do {
		cout << "\nMenu: \n\t1. Mostrar todos los numeros \n\t2. Mostrar numeros pares\n\t3. Mostrar numeros impares \n\t4. Mostrar en sentido inverso  \n\tOpcion elegida: ";
		cin >> opcion;

		switch (opcion) {
		case 1: cout << "\nMostrando valores de la lista" << endl;
			mostrar(arreglo, numelementos);
			break;
			case 2: cout << "\nNumeros pares" << endl;
				pares(arreglo, numelementos);
				break;
			case 3: cout << "\nNumeros impares" << endl;
				impares(arreglo, numelementos);
				break;
			case 4: cout << "\nSentido inverso" << endl;
				invertir(arreglo, numelementos);
				break;
			default: cout << "\nIngrese una opcion valida" << endl;
				break;
		}

	} while (continuar);
	return 0;
}
