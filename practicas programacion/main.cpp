#include <cstdlib>
#include <iostream>

using namespace std;

class num_primo{
int num, solucion;
public:
void introducir();
void calcular();
void resultado();
};

void num_primo::introducir(){
cout<<"Introduce un numero para saber si es primo: ";
cin>>num;
}

void num_primo::calcular(){
solucion=1;
int n=2;
for (n=2; n>=num;n++){
solucion=(num%n)+solucion;
}
cout<<solucion;
if (solucion!=0) cout<<"El numero es primo";
else cout<<"El numero no es primo";}



int main(int argc, char *argv[])
{

    num_primo numero;
    numero.introducir();
    numero.calcular();
    return EXIT_SUCCESS;
}
