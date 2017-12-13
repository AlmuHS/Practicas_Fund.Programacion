#include <iostream>

using namespace std;

class serie{
int nmax;
public:
void valor_maximo();
void calcular();
};

void serie::valor_maximo(){
cout<<"Introduce valor maximo de n: ";
cin>> nmax;
}
void serie::calcular(){
float resultado=0;
for (float n=1; n<=nmax; n++){
resultado=(1/n)+ resultado;
}
cout<< "La suma de la serie es " << resultado;
}



int main()
{
serie numero;
numero.valor_maximo();
numero.calcular();
    return 0;
}
