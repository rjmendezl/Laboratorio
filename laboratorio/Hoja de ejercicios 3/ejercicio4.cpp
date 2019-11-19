/*Ejercicio 4
Ricardo José Méndez López 00103719*/

#include <iostream>
#include <string>
using namespace std;

struct nodo{
    int numero;
    nodo *siguient;
};

    nodo *pMich= NULL;
    nodo *caroline = NULL;
    nodo *n =NULL;


void ingresar(){
n = new nodo;

cout<<"\n\tDigite número entero: ";

cin>>n->numero;
n->siguient = NULL;
    
        if(!pMich){
        pMich = n;
    }
    else{
        caroline = pMich;
        while(caroline->siguient != NULL){
            caroline = caroline->siguient;
        }
        caroline->siguient = n;
    }
}

void Mostrarnumeros(nodo* lista) {
    if (!lista)
        return;
    else {
        cout<<"\n\tNumeros ingresados: "<<lista->numero<<endl;
        Mostrarnumeros(lista->siguient);
    }
}

void SumaDpares(nodo *lista,int sumas){
    if (!lista)
        cout<<"\n\tLa suma es: "<<sumas<<endl;
    else {
        if(lista->numero % 2 == 0){
        sumas += lista->numero;
        }
        SumaDpares(lista->siguient,sumas);
    }
}

void SumaDimpares(nodo *lista, int sumas) {
    if (!lista)
        cout <<"\n\tLa suma es: " << sumas << endl;
    else {
        if (lista->numero % 2 != 0) {
                sumas += lista->numero;

        }
        SumaDimpares(lista->siguient, sumas);
    }
}


int main() {

    int direccion=0;

    do{
        
    cout<<"\n\tPor favor, digite un número de las siguientes opciones.\n\t"<<endl;
    cout <<   "\n\t--Menú--\n\t1.Agregar número. \n\t2.Mostrar Numeros ingresados. \n\t3.Sumar los números impares ingresados. \n\t4.Sumar los números pares ingresados. \n\t5.Terminar programa." << endl;
    cout << "\tSu opción elegida es:";
    cin >> direccion;
        switch(direccion){
            case 1:{
            ingresar();
            }
                break;
            case 2:
                Mostrarnumeros(pMich);
                break;
            case 3:
                SumaDimpares(pMich,0);
                break;
            case 4:
                SumaDpares(pMich,0);
                break;
            case 5:
                break;
            default: cout << "\n\tEl numero ingresado no esta entre las opciones, por favor digite un número dentro de las opciones." << endl;
        }
    }

    while(direccion!=5);{
	cout<<"\n\tPrograma Terminado."<<endl;
	}
    return 0;
}