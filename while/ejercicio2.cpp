/*
Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.
*/

#include <iostream>
using namespace std;

int main (){
int numero=0 , contador =0, suma=0;

cout<<"Adivina el numero"<<endl;
cin>>contador;

while (contador != numero)
{
  suma= contador + suma;

 cin>>contador; 
   
}
    cout << "¡Felicidades! Has adivinado el número secreto 0:"<< endl;
    cout << "La SUMA DE SU SUS INTENTOS ES : "<<suma<< endl;


return 0;

}