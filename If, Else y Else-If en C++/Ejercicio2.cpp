/*
Número Par o Impar
Solicita un número al usuario y determina si es par o impar.
*/

#include <iostream>
#include<cmath>

using namespace std;


int main()
{
    int num1;
    cout<<"Ingresa el numero"<<endl;
    cin>>num1;



    if (num1 %2==0)
    {
        cout<<"Su numero es par"<<endl;
    }
    else {

        cout<<"Su numero es in par "<<endl;
    }
    

return 0;
}