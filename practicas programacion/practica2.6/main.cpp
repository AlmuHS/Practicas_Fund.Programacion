#include <iostream>

using namespace std;

int num1, num2, opcion;
class calculadora{

    public:
        void introducir();
        void menu();
};
void calculadora::introducir(){
cout<<"Introduce un numero: ";
cin >> num1;
cout<<"\nIntroduce otro numero: ";
cin >> num2;
};
void calculadora::menu(){
cout<<"\n1. Sumar"
<<"\n2. Restar"
<<"\n3. Multiplicar"
<<"\n4. Dividir"
<<"\n5. Salir";
cout << "\nOpcion: ";
cin >> opcion;
}

int main()
{
    char salir;
    float resultado;
    calculadora prueba;
    prueba.introducir();

    do{
        prueba.menu();
        switch(opcion){
            case 1:
                resultado= num1+num2;
                cout << "El resultado es " <<resultado;
                prueba.menu();
            break;
            case 2:
                resultado= num1-num2;
                cout << "El resultado es "<<resultado;
                prueba.menu();
            break;
            case 3:
                resultado=num1*num2;
                cout << "El resultado es "<<resultado;
                prueba.menu();
            break;
            case 4:
                resultado=float(num1/num2);
                cout << "El resultado es "<<resultado;
                prueba.menu();
            break;
            case 5:
                cout <<"Realmente quieres salir? (S/N): ";
                cin >> salir;
                break;

            default: cout <<"Error de opcion";
            break;
        }
    } while (salir=='n');
    if (salir=='s') return 0;
}
