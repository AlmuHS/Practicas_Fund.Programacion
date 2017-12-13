#include <iostream>
#include <string.h>
using namespace std;
string tipo_variable;
int tamanio;

void cargar(){
if (tipo_variable=="char") tamanio= sizeof(char);
else if (tipo_variable=="unsigned char") tamanio= sizeof(unsigned char);
else if (tipo_variable== "int") tamanio=sizeof(int);
else if (tipo_variable=="short int") tamanio=sizeof(short int);
else if (tipo_variable=="unsigned short int") tamanio=sizeof(unsigned short int);
else if (tipo_variable=="long int") tamanio=sizeof(long int);
else if (tipo_variable=="float") tamanio=sizeof(float);
else if (tipo_variable=="double") tamanio=sizeof(double);
}

void imprimir(){
cout << "Una variable de tipo " << tipo_variable << " ocupa en memoria " << tamanio << " bytes\n";
}



int main()
{
tipo_variable="char";
cargar();
imprimir();
tipo_variable="unsigned char";
cargar();
imprimir();
tipo_variable="int";
cargar();
imprimir();
tipo_variable="short int";
cargar();
imprimir();
tipo_variable="unsigned short int";
cargar();
imprimir();
tipo_variable="long int";
cargar();
imprimir();
tipo_variable="float";
cargar();
imprimir();
tipo_variable="double";
cargar();
imprimir();
    return 0;
}
