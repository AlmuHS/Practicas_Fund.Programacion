#include <iostream>

using namespace std;

class generica{
int num, num2;
public:
void informacion();
void operacion();
};

void generica::informacion(){
cout<<"Introduce un numero: ";
cin>>num;
cout<<"Introduce otro numero: ";
cin>>num2;
}

void generica::operacion(){
char opcion;
cout<<"Elige operacion: "
    <<"\nSuma (S/s/+)"
    <<"\nResta (R/r/-)"
    <<"\nOpcion: ";
cin>>opcion;
if(opcion=='S'||opcion=='s'||opcion=='+')
cout<<num<<"+"<<num2<<"="<<num+num2;
else if(opcion=='R'||opcion=='r'||opcion=='-')
cout<<num<<"-"<<num2<<"="<<num-num2;
else cout<<"Opcion no valida";
}


int main()
{
    generica calculo;
    calculo.informacion();
    calculo.operacion();
    return 0;
}
