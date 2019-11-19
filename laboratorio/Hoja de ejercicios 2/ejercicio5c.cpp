/*Ejercicio 5c
Ricardo José Méndez López 00103719*/

#include <iostream>
using namespace std;

//Método de la jugada.

void jugando(int discos, int torrea1, int torrea2, int torrea3){
    
    if(discos == 1){
        cout<<"Mueve tu disco de la torre "<<torrea1 <<" a torre "<<torrea3<<endl;
    }else{
        jugando(discos-1, torrea1, torrea3,  torrea2); 
        cout<<"Mueve tu disco de la torre "<<torrea1<<" a torre "<<torrea3<<endl;
        jugando(discos-1, torrea2, torrea1, torrea3);
    }
    
}


int main (){ //declranado y pidiendo datos al usuario.
    
    int Torre1 = 1, Torre2 = 2, Torre3 = 3, Discos = 0;
    
    cout<<"¿Con cuántos discos quiere jugar? "<<endl;
    cin>>Discos;
    cout<<endl;
    jugando(Discos, Torre1, Torre2, Torre3);
    
    return 0;
} 


