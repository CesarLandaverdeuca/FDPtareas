/*
Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.
*/
#include <iostream>

using namespace std;

int main(){
int numero;
cout<<"Ingresa un numero"<<endl;
cin>>numero;
do
{
    cout<<"Contador de while: "<<numero<<endl;
    numero--;
    
} while (numero>=0);
cout<<"saliste del bucle"<<endl;
}
