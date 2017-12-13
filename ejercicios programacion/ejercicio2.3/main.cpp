#include <iostream>

using namespace std;

class conversor{
float horas, minutos;
public:
void convertir(float segundos);
void mostrar();
};

void conversor::convertir(float segundos){
minutos=segundos/60;
horas=minutos/60;
}

void conversor::mostrar(){
cout<<"El tiempo en minutos es "<<minutos
    <<"\nEl tiempo en horas es "<<horas;
}

int main()
{
    float Segundos;
    conversor tiempo;
    cout<<"Introduce el tiempo en segundos: ";
    cin>>Segundos;
    tiempo.convertir(Segundos);
    tiempo.mostrar();
    return 0;
}
