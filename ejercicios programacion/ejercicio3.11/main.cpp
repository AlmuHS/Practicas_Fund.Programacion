#include <iostream>

using namespace std;

class generica{
int n;
public:
void informacion();
void cuadrados();
};

void generica::informacion(){
cout<<"Introduce el numero de cuadrados que quiere calcular: ";
cin>>n;
}

void generica::cuadrados(){
int divisores=0;
for (int a=1; divisores<n; a++){
if (a%3==0){
divisores++;
cout<<"\n"<<a<<"²="<<a*a;
}
}
}

int main()
{
    generica cuadrado;
    cuadrado.informacion();
    cuadrado.cuadrados();
    return 0;
}
