#include <iostream>

using namespace std;

class generica{
int n;
public:
void informacion();
void cuadrados();
};

void generica::informacion(){
cout<<"Introduce la cantidad de cuadrados a calcular: ";
cin>>n;
}

void generica::cuadrados(){
for (int i=1; i<=n; i++)
cout<<"\n"<<i<<"²="<<i*i;
}

int main()
{
    generica cuadrado;
    cuadrado.informacion();
    cuadrado.cuadrados();
    return 0;
}
