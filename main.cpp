#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    
    int num, c;
    int a[100];
    srand(time(NULL));
 
    for(c = 0; c < 100; c++)
    {
        num = 1 + rand() % (101 - 1);
        a[c]=num;
    } 
    
    cout<<"Números aleatorios generados:"<<endl;
    for(c=0;c<100;c++){
        cout<<a[c]<<" ";
    }
    
    cout<<endl<<endl<<"Números pares aleatorios generados:"<<endl;
    for(c=0;c<100;c++){
        if(a[c]%2==0){
        cout<<a[c]<<" ";
        }
    }
    
    cout<<endl<<endl<<"Números impares aleatorios generados:"<<endl;
    for(c=0;c<100;c++){
        if(a[c]%2!=0){
        cout<<a[c]<<" ";
        }
    }
    
    cout<<endl<<endl<<"Números aleatorios generados al inverso:"<<endl;
    for(c=99;c>=0;c--){
        cout<<a[c]<<" ";
    }
    
    return 0;
}

