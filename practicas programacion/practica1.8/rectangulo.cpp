#include <cstdlib>
#include <iostream>

using namespace std;

class rectangulo {
      int largo, ancho, valor_area;
      public:
             void iniciar();
             void cargar();
             void area();
             void cambiar();
             };
      void rectangulo::iniciar(){
           largo=4;
           ancho=2;
           };
      void rectangulo::cargar(){
           cout <<"pon el largo del rectangulo: "<<"\n";
           cin >> largo;
           cout <<"pon el ancho del rectangulo: "<<"\n";
           cin >> ancho;
           };
      void rectangulo::area(){
           valor_area=largo*ancho;
           cout<<"el area del rectangulo es " <<valor_area<<"\n";
           };
      void rectangulo::cambiar(){
           int tmp;
           tmp=largo;
           largo= ancho;
           ancho=tmp;
           }

      int main(){
          rectangulo generico;
          generico.iniciar();
          generico.area();
          generico.cargar();
          generico.area();
          cout << "tras intercambiar ancho por alto, ";
          generico.cambiar();
          generico.area();
          return EXIT_SUCCESS;
          }








