/*
Asignación de Grupos en una Universidad
Pide la inicial del apellido de un estudiante y usa switch para asignarlo a un grupo
(A-M = Grupo 1, N-Z = Grupo 2).
*/

#include <iostream>
using namespace std;

int main()
{
    char initialLastname;
    cout << "iNGRESA SU INICIAL";

    cin >> initialLastname;

    switch (initialLastname)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':

        cout << "Perteneces al grupo 1 " << endl;
        break;

    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':

        cout << "Perteneces al grupo 2 " << endl;
        break;

    default:
        cout << "Ingresa bien La inicial en MAYUSCULA " << endl;
        break;
    }

    return 0;
}
