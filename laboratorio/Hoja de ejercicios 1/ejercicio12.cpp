/*Ejercicio 12
Ricardo Jos� M�ndez L�pez 00103719*/

#include <iostream>

using namespace std;

int main()
{
    int num, divisor, numIn=0;
    
    cout<<"Ingrese un n�mero entero de almenos 2 cifras: "<<endl;
    cin>> num;
    cout<<"El n�mero a invertir es : "<<num<<endl;
    
    while(num>0){
        divisor=num%10;
        num=num/10;
        numIn=numIn*10+divisor;
    }
    
    cout<<"El n�mero invertido es: "<<numIn;
    
    return 0;
}