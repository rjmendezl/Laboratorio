/*Ejercicio 12
Ricardo José Méndez López 00103719*/

#include <iostream>

using namespace std;

int main()
{
    int num, divisor, numIn=0;
    
    cout<<"Ingrese un número entero de almenos 2 cifras: "<<endl;
    cin>> num;
    cout<<"El número a invertir es : "<<num<<endl;
    
    while(num>0){
        divisor=num%10;
        num=num/10;
        numIn=numIn*10+divisor;
    }
    
    cout<<"El número invertido es: "<<numIn;
    
    return 0;
}