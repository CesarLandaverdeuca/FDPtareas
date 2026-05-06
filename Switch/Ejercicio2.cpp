/*
Horario de Clases
Pide el día de la semana y muestra el horario de clases para ese día.
*/

#include <iostream>
using namespace std;

int main()
{

    int diasHorario;
    cout << "BIENVENIDO AL HORARIO ELIGE UN DIA Y TE DIREMOS EL HORARIO" << endl;
    cout << "1.Lunes" << endl;
    cout << "2.Martes" << endl;
    cout << "3.Miercoles" << endl;
    cout << "4.Jueves " << endl;
    cout << "5.Viernes" << endl;

    cin >> diasHorario;

    switch (diasHorario)
    {
    case 1:
    case 3:

        cout << "ELEMENTOS PARA ESTUDIO DE LA CIENCIA Y TECNOLOGIA :   9:00Am-11:00AM" << endl;
        cout << "Fundamentos de Porgramación :   11:00 Am-1:00PM" << endl;

        break;

    case 2:
    case 4:

        cout << "Precalculo :   9:00Am-11:00AM" << endl;
        cout << "Matematicas Discretas :   11:00 Am-1:00PM" << endl;

        break;

    case 5:

        cout << "Matematicas Discretas :   8:AM-9:AM" << endl;
        cout << "Pre calculo:   10:AM-11:Am" << endl;

        break;

    default:
        cout << "Ingrese un valor calido" << endl;
        break;
    }
    return 0;
}