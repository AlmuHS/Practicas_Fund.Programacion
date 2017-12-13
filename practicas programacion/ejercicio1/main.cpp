#include <iostream>

using namespace std;

int main()
{

char opcion, salida='n';
int num;
do{
cout<<"A. Leer un numero por teclado"
    <<"\nB. Mostrar el valor de la suma especial"
    <<"\nC. Salir"
    <<"\nOpcion: ";
    cin>>opcion;




    if (opcion=='A'){
        num=0;
        cout<<"\nIntroduzca un numero: ";
        cin>>num;
    };

    if (opcion=='C'){
        cout<<"desea salir del programa(s/n): ";
        cin>>salida;
    }

    } while (salida!='s');
    if (opcion=='B'){
        float resultado=0;
        for (int i=1; i<num; i++){
            resultado=(1/i)+resultado;
        }//Cierre bucle for
    };//Cierre sentencia if




}


