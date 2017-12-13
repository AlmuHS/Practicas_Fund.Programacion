#include <iostream>

using namespace std;

#define M 10
class matrices{
    int tabla [M];
public:
    void cargar();
    void encontrar();
};

void matrices::cargar(){
for(int i=0;i<M; i++)
tabla[i]=i;
}

void matrices::encontrar(){
int num,i;
cout<<"Introduce un numero: ";
cin>>num;
for(i=0; i<M; i++){
if (tabla[i]==num) cout<<"Este numero se encuentra en la tabla";
else if (i==(M-1)&&tabla[i]!=num) cout<<"Este numero no esta en la tabla";
}
}


int main()
{
matrices matriz;
matriz.cargar();
matriz.encontrar();
    return 0;
}
