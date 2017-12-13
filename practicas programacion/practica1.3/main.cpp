#include <iostream>

using namespace std;

class generica{
int anyo_nacimiento, anyo_actual, dias;
public:
void intro_datos();
void calcular();
void mostrar();
};

void generica::intro_datos(){
cout<<"Introduce tu anyo de nacimiento: ";
cin>>anyo_nacimiento;
cout<<"Introduce el anyo actual: ";
cin>>anyo_actual;
};

void generica::calcular(){
dias=(anyo_actual-anyo_nacimiento)*365;
}

void generica::mostrar(){
cout<<"\nllevas "<<dias<< " dias viviendo";
}

int main(){
generica persona;
persona.intro_datos();
persona.calcular();
persona.mostrar();
    return 0;
}
