#include <iostream>

using namespace std;

class generica{
int x,n;
public:
void informacion();
float elevar();
};

void generica::informacion(){
cout<<"Introduce la base: ";
cin>>x;
cout<<"Introduce el exponente: ";
cin>>n;
}

float generica::elevar(){
int resultado=x;
for (int i=1; i<n; i++){
resultado=x*resultado;
}
return resultado;
}

int main()
{
    generica potencia;
    potencia.informacion();
    potencia.elevar();
    int resultado=potencia.elevar();
    cout<<"El resultado es "<<resultado;
    return 0;
}
