#include <iostream>
#include <cmath>

using namespace std;

float r1=0;
float valor(float, float);

int main(){

float num=0;
float val=0;

cout << "Digite un número entero para sacarle raiz: ";
cin >> num;

cout << "Digite un numero mayor: ";
cin >> val;
cout << "\nLa raíz cuadrada aproximada de " << num << " es: "<<endl;

valor(num, val);

cout << valor(num, val) << endl;

return 0;
}

float valor(float n, float b){

    r1=((n/b)+b)/2;

if((abs(r1-b))<0.0001){
    return b;
}
else if(r1<0.0001){
    return r1;
}
else{
    return valor(n,r1);
}
}

