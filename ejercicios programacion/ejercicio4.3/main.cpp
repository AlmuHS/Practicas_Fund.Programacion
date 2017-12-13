#include <iostream>
#include <string.h>
using namespace std;

#define M 10
#define N 15
typedef char cadena[30];

class matrices{
    cadena tabla[M][N];
public:
    void cargar();
    void encontrar();
};

void matrices::cargar(){
cadena palabra;
for (int i=0; i<M; i++){
for (int j=0; j<N; j++){
cout<<"Introduce una palabra: ";
cin>>palabra;
strcpy(tabla[i][j], palabra);
}
}
}

void matrices::encontrar(){
cadena palabra2;
cout<<"Introduce una palabra a buscar: ";
cin>>palabra2;
for (int i=0; i<M; i++){
for (int j=0; j<N; j++){
if (strcmp(tabla[i][j],palabra2)==0){
cout<<"La palabra se encuentra en la tabla";
i=M;
j=N;
}
else if (i==(M-1)&&j==(N-1)&&strcmp(tabla[i][j],palabra2)!=0) cout<<"La palabra no se encuentra en la tabla";
}
}
}

int main()
{
    matrices tabla;
    tabla.cargar();
    tabla.encontrar();
    return 0;
}
