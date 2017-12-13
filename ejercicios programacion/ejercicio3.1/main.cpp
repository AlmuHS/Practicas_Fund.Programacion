#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

class Generic{
        float numero, root;
        public:
             void informacion();
             void operacion ();
             void resultado();
      };

void Generic::informacion(){
        cout<< "escribe el numero para el que quieres calcular la raiz: ";
        cin>> numero;
}

void Generic::operacion(){
      root=sqrt(numero);}

void Generic::resultado(){
           cout<< "la raiz de "<< numero << " es " << root;}

int main(){
Generic raiz;
raiz.informacion();
raiz.operacion();
raiz.resultado();
    return EXIT_SUCCESS;
}
