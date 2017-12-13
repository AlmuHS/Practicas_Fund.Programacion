#include <iostream>
using namespace std;


#define MAXIMO 100
class vector{
int celda[MAXIMO];
int nelem;
public:
vector (int n);
vector (int n, int valores[]);
int longitud();
int get(int n);
int &put(int n);
};

int vector::longitud(){
return MAXIMO;
}

int vector::get(int n){
int copia=celda[n];
return copia;
}

int vector::&put(int n){
return &celda[n];
}


int main()
{

    return 0;
}
