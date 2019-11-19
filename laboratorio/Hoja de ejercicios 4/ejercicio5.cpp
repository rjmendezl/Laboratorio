/*Ejercicio 5
Ricardo José Méndez López 00103719*/

#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nod;
Nod *pInicio;

void insertar(int num) {
    Nod *nuevo = new Nod;
    nuevo->dato = num;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void mostrarLista() {
    Nod *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << " ";
        s = s->sig;
    }
}

float prom=0;
float suma=0;
float promedio(float cont){
    Nod *s = pInicio;

    while (s != NULL) {
        suma+=s->dato;
        s = s->sig;
    }
    prom=suma/cont;
return prom;
}

struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: árbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subárbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: árbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subárbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a, float numero){
    Arbol p=a;
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }

    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

bool buscar(Arbol a, int num){
    if(a==NULL){
    return false;
    }
    else if (a->info==num){
    return true;
    }
    else if(a->info<num){
    return buscar(a->der, num);
    }
    else if(a->info>num){
    return buscar(a->izq, num);
    }
}

int main(){
    pInicio = NULL;

    Arbol arbol = crearArbol(5);

    agregarNodo(arbol, 3);
    agregarNodo(arbol, 7);
    agregarNodo(arbol, 2);
    agregarNodo(arbol, 4);
    agregarNodo(arbol, 6);
    agregarNodo(arbol, 9);
    agregarNodo(arbol, 1);
    agregarNodo(arbol, 10);

    float n=0;
    float contador=0;
    cout << "Ingrese -1 para finalizar" << endl;
    do{
    cout << "\nIngrese dato a buscar: ";
    cin >> n;
        if(n!=-1){
        buscar(arbol, n);

        if(buscar(arbol,n)==true){
        cout << "\tSi se encontro el dato" << endl;
        insertar(n);
        contador++;
        }
        else{
        cout << "\tNo se encontro el dato" << endl;
        }
        }

    }while(n!=-1);

    cout << "\n\tNúmeros contenidos en la lista: ";
    mostrarLista();
    cout << endl;

    cout << "\n\tPROMEDIO: " << promedio(contador) << endl;

    return 0;
}
