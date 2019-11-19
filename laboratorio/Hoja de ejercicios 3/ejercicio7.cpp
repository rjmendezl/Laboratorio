/*Ejercicio 7
Ricardo José Méndez López 00103719*/

#include <iostream>
using namespace std;

struct nodo{
    int entero;
    nodo *sig;
};

nodo *direccion = NULL;
nodo *m = NULL;

void ingresar(){
    m = new nodo;

    cout<<"\n\tIngrese un número entero: ";
    cin>>m->entero;

    if(direccion==NULL){
        direccion=m;
        m->sig=NULL;
    }
    else{
            m->sig = direccion;
            direccion = m;
        }
    }

    void mostrar(nodo *direccion){
        if(!direccion){
        return;
    }
    else{
        cout<< direccion->entero<<endl;
        mostrar(direccion->sig);
    }
}

void eliminar(nodo *direccion, int enterito){
    nodo *w = direccion, *g = NULL;
        while(w!= NULL&&(w->entero)!= enterito){
        g = w;
        w = w->sig;
    }
    if(w==NULL){
        cout <<"\n\tMuy bien! Se eliminaron las coincidencias de la lista con éxito." << endl;
        return;
    }else
        if(g==NULL)
        direccion = w->sig;
    else{
        g->sig = w->sig;
    delete(w);
    eliminar(direccion->sig, enterito);
    }
}

int main() {
    int entero=0;
    int elegido=0;

    do{
        cout<<"\n\t Por favor, digite un número de las siguientes opciones.\n\t"<<endl;
        cout<<"\n\t--Menú-- \n\t1.Agregar número. \n\t2.Ver lista. \n\t3.Eliminar coincidencias de un numero. \n\t4.Terminar."<<endl;
        cout << "\n\tSu opción elegida es: ";
        cin>>elegido;

        switch(elegido){
            case 1:
                cout << "\n" << endl;
                ingresar();
                break;
            case 2:
                cout << "\n" << endl;
                mostrar(direccion);
                break;
            case 3:
                cout << "\n" << endl;
                cout<<"\tDigite el número a eliminar: ";
                cin>>entero;
                eliminar(direccion, entero);
                break;
            case 4:
                break;
        }
    }
    while(elegido!=4);{
        cout<<"\n\t Programa Terminado."<<endl;
    }
    return 0;
}


