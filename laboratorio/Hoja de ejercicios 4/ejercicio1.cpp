/*Ejercicio 1
Ricardo José Méndez López 00103719*/

#include <iostream>
using namespace std;

int altura=0,x=0;

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
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;

    Arbol p = a;

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

void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}

void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}

void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
    cout << "Recorrido IN orden:"; inorden(a); cout << endl;
    cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}

void profundidad(Arbol a){
    if(a!=NULL){
        altura++;
        profundidad(a->izq);
        profundidad(a->der);
        if(x<altura){
            x=altura;
        }
        altura--;
    }
}

int cont=0;
int contar(Arbol a){
    if(a!=NULL){
        cont++;
        contar(a->izq);
        contar(a->der);
    }
    return cont;
}

int suma=0;
int prueba(Arbol a){
    if(a != NULL){
        suma+=a->info;
        prueba(a->izq);
        prueba(a->der);
}
return suma;
}

int main(){


    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;

    Arbol arbol = crearArbol(variable);

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\nMenu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3) Profundidad \n\t4) Cantidad de nodos\n\t5) Suma de los nodos\n\t6) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: profundidad(arbol);
            cout<< "Profundidad: "<< x-1 <<endl;
            break;
            case 4: cout << "Cantidad de nodos: " << contar(arbol) << endl;
            break;
            case 5: cout << "Suma de los nodos: " << prueba(arbol) << endl;
            break;
            case 6: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;

        }
    }while(continuar);

    return 0;
}
