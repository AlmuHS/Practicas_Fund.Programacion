#include <iostream>

using namespace std;

class generica{
int num;
public:
void informacion();
long int factorial();
};

void generica::informacion(){
cout<<"Introduce un numero entero positivo: ";
cin>>num;
}

long int generica::factorial(){
long int resultado=num;
for(int i=1; i<num; i++)
resultado=resultado*(num-i);
return resultado;
}

int main()
{
    generica factorial;
    factorial.informacion();
    factorial.factorial();
    long int resultado=factorial.factorial();
    cout<<"El factorial es "<<resultado;
    return 0;
}
