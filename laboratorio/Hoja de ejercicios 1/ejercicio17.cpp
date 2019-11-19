/*Ejercicio 17.   
Ricardo José Méndez López 00103719*/


#include <iostream>
using namespace std;

int main()
{ 
   
    int a[10], i, n=0;
    float sum=0, prom=0;
    
    cout<<"Ingrese 10 numeros enteros: ";
    for (i=0; i < 10; i++)
    cin>>a[i];
        
    cout<<endl<<"Los elementos del arreglo son los siguientes: "<<endl;
    for (i=0; i < 10; i++)
    cout<<a[i]<<" ";

    while(n<=9){
    sum+=a[n];
    n+=1;
    }
    
    prom=sum/10;
    
    cout<<endl<<"La suma del arreglo es: "<<sum<<endl;
    cout<<"El promedio del arreglo es: " <<prom<<endl; 
    
 return 0;

}