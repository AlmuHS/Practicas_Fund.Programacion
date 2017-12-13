#include <iostream>

using namespace std;

int main()
{
    float nota;
    cout<< "introduce la nota del alumno: ";
    cin >> nota;
    if (nota<0||nota>10) cout<<"Error: La nota debe estar comprendida entre 0 y 10";
    if (nota>=0 && nota < 5.0) cout<< "Estas suspendido";
    else if ((nota >= 5.0)&& (nota<7.0)) cout <<"Estas aprobado";
    else if ((nota >=7.0) && (nota<9.0)) cout << "Tienes un notable";
    else if ((nota>=9.0)&& (nota<10)) cout <<"Tienes un sobresaliente";
    else if (nota==10) cout <<"Tienes una matricula de honor";

    return 0;

}
