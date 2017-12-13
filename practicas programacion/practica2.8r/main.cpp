#include <iostream>

using namespace std;
class factorial{
long double n, resultado;
public:
void introducir_numero();
void calcular();
void mostrar();
};

void factorial::introducir_numero(){
n=0;
cout << "Introduce el numero del que quieres calcular el factorial: ";
cin>>n;
}

void factorial::calcular(){
int num=n;
resultado=1;
for(num=n;num>=1;num--){
resultado=resultado*num;
}
}

void factorial::mostrar(){
cout << "el factorial de " << n << " es " << resultado;
}

int main()
{
factorial numero;
numero.introducir_numero();
numero.calcular();
numero.mostrar();
    return 0;
}
