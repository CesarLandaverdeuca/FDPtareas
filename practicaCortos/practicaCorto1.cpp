#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int eleccion, edad, camisa;
    float total;

    cout << "bIENVENIDO AL PROGRAMA DE VENTAS DE POLOcLUB" << endl;
    cout << "PRESIONA UNO PARA INICIAR" << endl;
    cout << "Presiona 0 para salir del programa" << endl;
    cin >> eleccion;

    while (eleccion != 0)
    {
        cout << "Que edad tienes?" << endl;
        cin >> edad;
        if (edad >= 20 && edad <= 65)
        {
            cout << "1-Polo Classic Black ($25)" << endl;
            cout << "2-Polo Minimal White ($25)" << endl;
            cout << "3-Polo Navy Blue ($30)" << endl;
            cin>>camisa;

            switch (camisa)
            {
            case 1:
                cout << "CUANTAS CAMISAS DESEAS COMPRAR?" << endl;
                cin >> camisa;

                total = camisa * 25;

                if (camisa > 3 && total > 75)
                {
                    total = total - (total * 0.15);
                    cout << "Su total fue de: " << total << "gracias por su compra!!" << endl;
                }
                 else{
                    cout << "Su total fue de: " << total << "gracias por su compra!!" << endl;
                }

                break;

            case 2:
                cout << "CUANTAS CAMISAS DESEAS COMPRAR?" << endl;
                cin >> camisa;

                total = camisa * 25;

                if (camisa > 3 && total > 75)
                {
                    total = total - (total * 0.15);
                    cout << "Su total fue de: " << total << "gracias por su compra!!" << endl;
                }
                 else{
                    cout << "Su total fue de: " << total << "gracias por su compra!!" << endl;
                }

                break;

            case 3:
                cout << "CUANTAS CAMISAS DESEAS COMPRAR?" << endl;
                cin >> camisa;

                total = camisa * 30;

                if (camisa > 3 && total > 75)
                {
                    total = total - (total * 0.15);
                    cout << "Su total fue de: " << total << "gracias por su compra!!" << endl;
                }
                else{
                    cout << "Su total fue de: " << total << "gracias por su compra!!" << endl;
                }

                break;

            default:
                break;
            }
        }
        else
        {
            cout << "No estas en el publico objetivo" << endl;
        }
        cout << "¿Desea procesar otra venta? (1 para Sí, 0 para No): " << endl;
        cin>>eleccion;
    }
}