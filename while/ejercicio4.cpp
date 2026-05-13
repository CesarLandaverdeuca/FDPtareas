/*
Menú Interactivo
Crea un menú que se repita hasta que el usuario elija la opción de salir.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int eleccion;
    cout << "Bienvendios al menu elige las opciones : " << endl;
    cout << "1-Home : " << endl;
    cout << "2-Settings " << endl;
    cout << "3-Settings : " << endl;
    cout << "4-Salir : " << endl;

    cin >> eleccion;

    if (eleccion != 4)
    {

        while (eleccion != 4)
        {

            switch (eleccion)
            {
            case 1:
                cout << "Bienvendios a home : " << endl;

                cout << "Bienvendios al menu elige las opciones : " << endl;
                cout << "1-Home : " << endl;
                cout << "2-Settings " << endl;
                cout << "3-Settings : " << endl;
                cout << "4-Salir : " << endl;
                break;
            case 2:
                cout << "Bienvendios a Settings : " << endl;

                cout << "Bienvendios al menu elige las opciones : " << endl;
                cout << "1-Home : " << endl;
                cout << "2-Settings " << endl;
                cout << "3-Settings : " << endl;
                cout << "4-Salir : " << endl;

                break;
            case 3:
                cout << "Bienvendios a Settings : " << endl;

                cout << "Bienvendios al menu elige las opciones : " << endl;
                cout << "1-Home : " << endl;
                cout << "2-Settings " << endl;
                cout << "3-Settings : " << endl;
                cout << "4-Salir : " << endl;
                break;
            case 4:
                cout << "Saliendo del sistema : " << endl;
                cout << "Bienvendios al menu elige las opciones : " << endl;
                cout << "1-Home : " << endl;
                cout << "2-Settings " << endl;
                cout << "3-Settings : " << endl;
                cout << "4-Salir : " << endl;

                break;

                break;

            default:

                cout << "Numero incorrecto ingresado: " << endl;
                break;
            }
            cin >> eleccion;
        }
    }

    cout << "Saliste del sistema" << endl;
    return 0;
}