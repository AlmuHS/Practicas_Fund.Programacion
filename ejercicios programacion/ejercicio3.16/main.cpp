#include <iostream>

using namespace std;

class generica{
int x,n;
float E;
public:
void informacion();
void Ex();
void resultado();
};

void generica::informacion(){
cout<<"Introduce el valor de x: ";
cin>>x;
cout<<"Introduce el valor de n: ";
cin>>n;
}

void generica::Ex(){
for (int i=1; i<=n; i++){
int factorial=1;
for(int j=1; j<n; j++)
factorial=factorial*(n-j);
int potencia=x;
for (int k=1; k<=n; k++)
potencia=x*potencia;
E=E+(potencia/factorial);
}
}

void generica::resultado(){
cout<<"El resultado es "<<E;
}

int main()
{
    generica formula;
    formula.informacion();
    formula.Ex();
    formula.resultado();
    return 0;
}
