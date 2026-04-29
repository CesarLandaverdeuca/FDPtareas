/*
Calculadora de Tarifa de Envío
Pide el peso de un paquete y cobra $5 si pesa hasta 5kg, $10 si pesa entre 6kg y 10kg, y $15 si pesa más de 10kg.
*/

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    float Peso;
    int cobro;
    int billetera=500;

    cout<<"Cual es el peso del paquete"<<endl;
    cin>>Peso;

    if (Peso>0 && Peso <=5)
    {
        cobro=billetera-5;
        cout<<"Su cobro de $5 realizo correctamente su nuevo saldo es de : "<<cobro<<endl;

    }
    else if (Peso>= 6 && Peso<=10)
    {
        cobro=billetera-10;

        cout<<"Su cobro de $10 realizo correctamente su nuevo saldo es de : "<<cobro<<endl;

    }
    else if (Peso>10)
    {
        cobro=billetera-15;
        cout<<"Su cobro de $15 realizo correctamente su nuevo saldo es de : "<<cobro<<endl;

    
    }
    else{

        cout<<"Datos incorrectos"<<endl;
    }
    
    






 return 0;
}