/*
Zodíaco según el Mes
Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.

*/

#include <iostream>
using namespace std;

int main()
{

     int mesSigno;
    cout << "Ingresa tu mes de nacimiento y te diremos tu signo zodical" << endl;
    cout << "1.Aries" << endl;
    cout << "2.Tauro" << endl;
    cout << "3.Geminis" << endl;
    cout << "4.Cancer " << endl;
    cout << "5.Leo" << endl;
    cout << "6.Virgo" << endl;
    cout << "7.Libra" << endl;
    cout << "8.Escorpio" << endl;
    cout << "9.Sagitario" << endl;
    cout << "10.Capricornio " << endl;
    cout << "11.Acuario" << endl;
    cout << "12.Piscis " << endl;
    
    cin>>mesSigno;

    switch (mesSigno)
    {
    case 1:
        cout<<"Su mes es Aries"<<endl;
        break;
    case 2:
        cout<<"Su mes es Tauro"<<endl;
        break;
    case 3:
        cout<<"Su mes es Geminis"<<endl;
    break;
    case 4:
        cout<<"Su mes es Cancer"<<endl;
        break;
    case 5:
        cout<<"Su mes es Leo"<<endl;
        break;
    case 6:
        cout<<"Su mes es Virgo"<<endl;
        break;
    case 7:
        cout<<"Su mes es Libra"<<endl;
        break;
    case 8:
        cout<<"Su mes es Escorpio"<<endl;
        break;
    case 9:
        cout<<"Su mes es Sagitario"<<endl;
        break;
    case 10:
        cout<<"Su mes es Capricornio"<<endl;
        break;
    case 11:
        cout<<"Su mes es Acuario"<<endl;
        break;
    case 12:
        cout<<"Su mes es Piscis"<<endl;
        break;

    
    default:
        break;
    }


}