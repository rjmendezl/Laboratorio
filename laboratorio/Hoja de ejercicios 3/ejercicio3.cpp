/*Ejercicio 3
Ricardo José Méndez López 00103719*/

#include <iostream>
#include <string>
using namespace std;

struct libro{
    string titulo;
    int numPaginas;
    libro *sig;
};

libro *m = NULL;
libro *n = NULL;

void ingresar(){
n = new libro;

cout<<"\n\tDigite  titulo del libro: ";
cin>>n->titulo;
cout<<"\n\tDigite número de paginas: ";
cin>>n->numPaginas;

        if(m==NULL){
        m=n;
        n->sig=NULL;
    }
    else{
        n->sig = m;
        m = n;
    }
}

void buscando(libro *m, string Titulos){
    if(!m){
        return;
    }
    else{
        if(Titulos== m->titulo){
            cout<<"El libro que usted busco, tiene " << m->numPaginas << " paginas."<<endl;
            cout<<endl;
        }
        buscando(m->sig, Titulos);
    }
}

int main() {

    int direccion=0;
    string Titulos=" ";

    do{
        
    cout<<"\n\t Por favor, digite un número de las siguientes opciones.\n\t"<<endl;
    cout <<   "\n\t--Menú--\n\t1.Agregar libro. \n\t2.Buscar libro. \n\t3.Terminar." << endl;
    cout << "\tSu opción elegida es:";
    cin >> direccion;
        switch(direccion){
            case 1:{
            ingresar();
            }
                break;
            case 2:
                cout<<"Nombre del libro que desea buscar: ";
                cin>>Titulos;
                buscando(m,Titulos);
                break;
            case 3:
                break;
            default: cout << "El numero ingresado no esta entre las opciones, por favor digite un número dentro de las opciones." << endl;
        }
    }

    while(direccion!=3);{
	cout<<"\n\tPrograma Terminado."<<endl;
	}
    return 0;
}
