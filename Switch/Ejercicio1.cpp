/*
Día de la Semana
Pide un número del 1 al 7 e imprime el día de la semana correspondiente (1 = Lunes, 2 = Martes, etc.).
*/

#include <iostream>
using namespace std;

int main()
{
    int diasemana = 0;

    cout << "Pon el dia de la semana \n";
    cin >> diasemana;

    switch (diasemana)
    {
    case 1:
        cout << "Su dia es lunes \n";
        break;
    case 2:
        cout << "Su dia es martes \n";
        break;
    case 3:
        cout << "Su dia es miercoles \n";
        break;
    case 4:
        cout << "Su dia es jueves \n";
        break;
    case 5:
        cout << "Su dia es viernes \n";
        break;
    case 6:
        cout << "Su dia es sabado \n";

        break;

    case 7:
        cout << "Su dia es domingo \n";
        break;

    default:

        cout << "Su numero ingresado no esta entre los dias de la semana \n";
        break;
    }

    return 0;
}