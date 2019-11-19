/*Ejercicio 2
Ricardo José Méndez López 00103719*/

#include <iostream>
#include <cmath>
using namespace std;

float r1=0;
float valorR(float n, float b){

    r1=((n/b)+b)/2;

    if((abs(r1-b))<0.0001){
    return b;
}
else if(r1<0.0001){
    return r1;
}
else{
    return valorR(n,r1);
}
}

int main(){

    float num=0;
    float val=0;

    cout << "Digite un entero para sacarle raiz: ";
    cin >> num;

    cout << "Digite un numero mayor: ";
    cin >> val;
    cout << "\nLa raiz cuadrada aproximada de " << num << " es: "<<endl;

    valorR(num, val);

    cout << valorR(num, val) << endl;

    return 0;
}