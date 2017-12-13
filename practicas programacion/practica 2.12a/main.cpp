#include <iostream>

using namespace std;

class calculadora
{
    int numero1, numero2, opcion, resultado;
    public:
    void menu();
    void operacion();
};
void calculadora::menu(){
    opcion=0;
    cout <<"Escribe un numero: ";
    cin >> numero1;
    cout <<"\nEscribe otro numero: ";
    cin >> numero2;
    cout << "Elige la opcion: ""\n";
    cout << "1. Sumar""\n";
    cout << "2. Restar""\n";
    cout << "3. Multiplicar""\n";
    cout << "4. Dividir""\n";
    cout << "Opcion: ";
    cin >> opcion;
    cout << "\n";
};
    void calculadora::operacion(){
    switch(opcion){
    case 1:
    resultado= (numero1 + numero2);
    cout << "El resultado de la suma es " << resultado;
    break;
    case 2:
    resultado = (numero1 - numero2);
    cout << "El resultado de la resta es " << resultado;
    break;
    case 3:
    resultado =(numero1*numero2);
    cout << "El resultado de la multiplicacion es " << resultado;
    break;
    case 4:
    resultado =(numero1/numero2);
    cout << "El resultado de la division es " << resultado;
    break;
    default: cout<<"Error. Opcion no valida";
    }
    }
    int main(){
    calculadora prueba;
    prueba.menu();
    prueba.operacion();
    }
