/*Ejercicio 23
Ricardo José Méndez López */

#include <iostream>
using namespace std;

struct Complejo{
  float partReal, partImaginaria;
    
}num1,num2;

//Prototipo

void pedirDatos();
Complejo sum(Complejo, Complejo);
void muestra(Complejo);

int main(){
    pedirDatos();
    
    Complejo x = sum(num1,num2);
    
    muestra(x);
    
    return 0;
}

void pedirDatos(){
    cout<<"Digite los datos del primer número complejo: "<<endl;
    cout<<"Parte real: "<<endl;
    cin>>num1.partReal;
    cout<<"Parte Imaginaria: "<<endl;
    cin>>num1.partImaginaria;

    cout<<"Digite los datos del segundo número complejo: "<<endl;
    cout<<"Parte real: "<<endl;
    cin>>num2.partReal;
    cout<<"Parte Imaginaria: "<<endl;
    cin>>num2.partImaginaria;
}

Complejo sum( Complejo num1, Complejo num2){
    num1.partReal += num2.partReal;
    num1.partImaginaria += num2.partImaginaria;
    
    return num1;
}

void muestra(Complejo x){
    cout<<"Resultado de la suma: "<<x.partReal<< " , " <<x.partImaginaria<<endl;
}






