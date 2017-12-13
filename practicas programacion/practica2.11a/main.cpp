#include <iostream>

using namespace std;

class clasificar{
public:
int num1, num2;
void cargar();
void resultado();
};

void clasificar::cargar(){
cout << "Introduce un numero: ";
cin >> num1;
};

void clasificar::resultado(){
if (num1%2==0) cout<<"\nEl numero es par";
else if (num1%2==1) cout<<"El numero es impar";
}

int main()
{
clasificar numero;
numero.cargar();
numero.resultado();
return 0;
}
