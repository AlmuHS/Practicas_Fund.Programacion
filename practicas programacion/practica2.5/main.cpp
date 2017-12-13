#include <iostream>

using namespace std;

int num1, num2, num3;
class comparar{
    public:
    void introducir();
    void resultado();
};
void comparar::introducir(){
cout << "Introduce un numero: ";
cin >> num1;
cout << "\nIntroduce otro numero: ";
cin >> num2;
cout <<"\nIntroduce otro numero: ";
cin >> num3;
};
void comparar::resultado(){
if (num1==num2 && num1==num3) cout <<"los tres numeros son iguales";
else if (num1>=num2 && num1>=num3) cout<< "el numero mayor es " <<num1;
else if (num2>=num1 && num2>=num3) cout <<"el numero mayor es " << num2;
else if (num1>=num2 && num3>=num2) cout <<"el numero mayor es " << num3;
else if (num2>=num3 && num3>=num1) cout <<"el numero mayor es " <<num2;
}
int main()
{
    comparar numero;
    numero.introducir();
    numero.resultado();
    return 0;
}
