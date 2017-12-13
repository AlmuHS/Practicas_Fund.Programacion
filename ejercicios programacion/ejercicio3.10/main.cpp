#include <iostream>

using namespace std;

class TipoEstadistica{
int nalum, susp, apr, nots, sob;
public:
void informacion();
void elaborarEstadistica();
void resultado();
};

void TipoEstadistica::informacion(){
nalum=0;
cout<<"Numero de alumnos presentados al examen: ";
cin>>nalum;
}

void TipoEstadistica::elaborarEstadistica(){
float nota=0;
susp=0; apr=0; nots=0, sob=0;
for (int n=0; n<nalum; n++){
cout<<"Introduce la nota entre 1 y 10: ";
cin>>nota;
if (nota<5) susp++;
else if (nota>=5&&nota<7) apr++;
else if (nota>=7&&nota<9) nots++;
else if (nota>=9) sob++;
}
}

void TipoEstadistica::resultado(){
cout<<"Numero de Suspensos: "<<susp
    <<"\nNumero de Aprobados: "<<apr
    <<"\nNumero de Notables:  "<<nots
    <<"\nNumero de Sobresalientes: "<<sob;
}

int main()
{
    TipoEstadistica notas;
    notas.informacion();
    notas.elaborarEstadistica();
    notas.resultado();
    return 0;
}
