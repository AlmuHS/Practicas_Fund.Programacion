#include <iostream>

using namespace std;

class operacion{
int num1, num2;
public:
void introducir();
void mostrar();
};

void operacion::introducir(){
cout<<"Introduce un numero: ";
cin>>num1;
cout<<"introduce otro numero: ";
cin>>num2;
}
void operacion::mostrar(){
cout<<"La suma de los numeros da "<<num1+num2;
cout<<"\nla resta da "<<num1-num2;
cout<<"\nEl producto da "<<num1*num2;
cout<<"\nLa division da "<<float(num1)/num2;
}
int main()
{
operacion numero;
numero.introducir();
numero.mostrar();
    return 0;
}
