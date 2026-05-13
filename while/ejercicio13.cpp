/*
Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci utilizando while.

*/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int num;
    int secuencia;
    int contador= 0;
     int f1=0,f2 =1;
     cout << "Bienvendios a la serie de fibonacci ingresa el numero hasta donde se vera esa secuencia " << endl;

     cin>>num;

     while (num != contador)
     {
         
            cout << "la secuencia de fibonnaci fue de y su resultado es :" <<contador +1 <<"con su resultado: "<< f1<< endl;
          
        secuencia= f1+f2;
        f1=f2;
        f2=secuencia;
        

        contador ++;
        
   
     }


     
  

}