#include <iostream>

using namespace std;

int num1, num2;
class comparar{
    public:
        void cargar();
        void resultado();
};
void comparar::cargar(){
cout << "Introduce un numero: ";
cin >> num1;
cout <<"\nIntroduce otro numero: ";
cin >> num2;
};
void comparar::resultado(){
if (num1<num2) cout << num1 <<" es menor que " << num2;
else if (num1>num2) cout << num1 <<" es mayor que " << num2;
else cout << num1 << " es igual que " << num2;
}

int main()
{
 comparar numero;
 numero.cargar();
 numero.resultado();

    return 0;
}
