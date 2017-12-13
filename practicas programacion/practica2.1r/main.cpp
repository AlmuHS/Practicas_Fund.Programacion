#include <iostream>

using namespace std;

class tabla_multiplicar{
int num, resultado;
public:
void introducir_numero();
void calcular_tabla();
};

void tabla_multiplicar::introducir_numero(){
cout << "Introduce un numero del 1 al 9: ";
cin >> num;
};

void tabla_multiplicar::calcular_tabla(){
for (int n=0; n<11; n++){
    resultado=n*num;
    cout << n << " x " << num << " = " << resultado << "\n";
};
};


int main()
{
tabla_multiplicar numero;
numero.introducir_numero();
numero.calcular_tabla();
    return 0;
}
