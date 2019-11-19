/*Ejercicio 18
Ricardo José Méndez López 00103719*/


#include <iostream>
using namespace std;

int main (){
    
    int num[5][5];
    int n=0;

    for(int i=0; i<5; i++){
        for(int j=0; i<5; j++){
            num[i][j]=0;
        }
    }

    for(int i=0; i<5; i++){
        cout <<"Ingrese un numero la columna [0] :" << "["<<i<<"]"<< "; ";
        cin>> n;
        num[0][i]= n;
    }
    
    for(int i=1; i<5; i++){
        cout <<"Ingrese un numero en la columna [1] :" << "["<<i<<"]"<< "; ";
        cin>> n;
        num[1][i]= n;
    }
    
    for(int i=2; i<5; i++){
        cout <<"Ingrese un  en la columna  [2] :" << "["<<i<<"]"<< "; ";
        cin>> n;
        num[2][i]= n;
    }
    
    for(int i=3; i<5; i++){
        cout <<"Ingrese un numero en la columna  [3] :" << "["<<i<<"]"<< "; ";
        cin>> n;
        num[3][i]= n;
    }
    
    for(int i=4; i<5; i++){
        cout <<"Ingrese un numero en la columna [4] :" << "fila ["<<i<<"]"<< "; ";
        cin>> n;
        num[4][i]= n;
    }

//mostrando matriz 
    for(int i=0; i<5; i++){
        for(int j=0; i<5; j++){
            cout<<num[i][j]<<" ";
        }cout<<"\n";
    }

    return 0;
}
