# include <iostream>

using namespace std;

int main (){
/*
Edad y Mayoría de Edad
Escribe un programa que pida la edad de una persona e 
indique si es mayor o menor de edad (18 años o más es mayor de edad).*/

 int edad;
cout<<"Ingrese su edad"<<endl;
cin>>edad;

if (edad>= 18)
{
    cout<<"Es mayor de edad felicidades"<<endl;

    
}
else 
{
cout<<"Es menor de edad no puedes entrar "<<endl;
}

return 0;


}