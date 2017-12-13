#include <iostream>

using namespace std;

int num1, num2, num3;
class comparar{
    public:
    void cargar();
    void resultado();
};

void comparar::cargar(){
cout<< "Introduce un numero: ";
cin >> num1;
cout << "\nIntroduce otro numero: ";
cin >> num2;
cout << "\nIntroduce otro numero: ";
cin >> num3;
}

void comparar::resultado(){
if (num1==num2 && num2==num3) cout <<"\nLos tres numeros son iguales";
else cout <<"Los tres numeros son diferentes";
}

int main()
{
comparar numero;
numero.cargar();
numero.resultado();
    return 0;
}
