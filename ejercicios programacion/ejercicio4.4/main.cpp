#include <iostream>
#include <string.h>
using namespace std;

#define M 2
#define N 3
typedef char cadena[30];
struct persona{
    cadena dni;
    cadena nombre;
};

class matrices{
    persona tabla[M][N];
public:
    void cargar();
    void encontrar();
};


void matrices::cargar(){
for (int i=0; i<M; i++){
for (int j=0; j<N; j++){
cout<<"Introduce el DNI: ";
cin>>tabla[i][j].dni;
cout<<"Introduce el nombre: ";
cin>>tabla[i][j].nombre;
}
}
}

void matrices::encontrar(){
cadena DNI;
cout<<"Introduce el DNI a buscar: ";
cin>>DNI;
for(int i=0; i<M; i++){
for (int j=0; j<N; j++){
if (strcmp(tabla[i][j].dni,DNI)==0){
cout<<"Este DNI se encuentra en la tabla en la fila "<<i<<" y columna "<<j;
i=M;j=N;
}//Cierre sentencia if
else if (i==(M-1)&&j==(N-1)&&strcmp(tabla[i][j].dni,DNI)!=0) cout<<"Este DNI no se encuentra en la tabla";
}//Cierre for j
}//Cierre for i
}



int main()
{
    matrices DNI;
    DNI.cargar();
    DNI.encontrar();
    return 0;
}
