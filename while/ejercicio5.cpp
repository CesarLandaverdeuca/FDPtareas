/*
Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de los 
números pares desde 1 hasta N.


*/

#include <iostream>
#include<cmath>

using namespace std;

int main(){
int n ;
int suma =0; 
cout<<"Ingresa su numero: "<<endl;
int contador =1;
cin>>n;
while (contador<=n)
{
    if (contador %2 == 0)
    {
     suma= contador +suma;
    }
    
  
   contador++;
  
}



cout<<suma<<endl;
}

