#include <cstdlib>
#include <iostream>

using namespace std;

  class nomina {
        float horas, extras, resultado;
        public:
               void calcular();
               void cargar();  
 };
               
void nomina::cargar(){
               float precio_extras, precio_normal;
               cout << "numeros de horas normales realizadas: ";
               cin >> horas;
               precio_normal= horas*5;
               cout << "numeros de horas extras realizadas: ";
               cin >> extras;
               precio_extras=extras*8;
               resultado= (precio_extras+precio_normal)*0.85;
               }
void nomina::calcular(){
               cout <<"el resultado de la nomina es: " << resultado;
               }
               
      int main(){
      nomina yo;
      yo.cargar();
      yo.calcular();
      system("PAUSE");
      return EXIT_SUCCESS;
}      

