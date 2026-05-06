/*
Conversión de Monedas
Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) y realiza la conversión.
*/

#include <iostream>
using namespace std;

int main()
{

    int MonedaCambiar = 0;
    cout << "Ingresa la opcion a conversion \n";
    cout << " 1 = USD a EUR\n";
    cout << "2 = USD a JPY\n";
    cout << "3 = USD a GBP)\n";

    cin >> MonedaCambiar;

    switch (MonedaCambiar)
    {
    case 1:
        float uSDT;
        float UsdEur;
        cout << "Ingrese sus dolares: \n";
        cin >> uSDT;
        UsdEur = uSDT * 0.86;
        cout << "Su resultado es: \n"
             << UsdEur;
        break;

    case 2:
        float usd;
        float Usdjpy;
        cout << "Ingrese sus dolares: \n";
        cin >> usd;
        Usdjpy = usd * 0.76;
        cout << "Su resultado es: \n"
             << Usdjpy;
        break;

    case 3:
        float USD;
        float UsdGBP;
        cout << "Ingrese sus dolares: \n";
        cin >> USD;
        UsdGBP = USD * 1.86;
        cout << "Su resultado es: \n"
             << UsdGBP;
        break;

    default:
        cout << "No ingreso el numero que debia  \n";

        break;
    }

    return 0;
}