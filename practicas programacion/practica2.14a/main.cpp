#include <iostream>

using namespace std;

class generica{
public:
int num1,num2, mod12, mod21;

void informacion();
void operacion();
void resultado();
};

void generica::informacion(){
cout << "Introduce un numero: ";
cin >> num1;
cout << "\nIntroduce otro numero: ";
cin >> num2;
}

void generica::operacion(){
mod12=num1%num2;
mod21=num2%num1;
}

void generica::resultado(){
if (mod12==0) cout << num1 << " es divisor de " << num2;
else if (mod21==0) cout << num2 << " es divisor de " << num1;
else cout << num1 << " y " << num2 << " no son divisores";
}

int main()
{
    generica numero;
    numero.informacion();
    numero.operacion();
    numero.resultado();
    return 0;
}
