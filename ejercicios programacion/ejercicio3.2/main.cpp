#include <iostream>

using namespace std;

class generica{
int num, modulo;
public:
void informacion();
void operacion();
void resultado();
};

void generica::informacion(){
cout<<"Introduce un numero: ";
cin>>num;
}

void generica::operacion(){
modulo=num%2;
}

void generica::resultado(){
if (modulo==0) cout<<"Este numero es par";
if (modulo==1) cout<<"Este numero es impar";
}

int main()
{
    generica numero;
    numero.informacion();
    numero.operacion();
    numero.resultado();
    return 0;
}
