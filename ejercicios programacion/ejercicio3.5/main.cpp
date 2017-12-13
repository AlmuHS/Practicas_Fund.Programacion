#include <iostream>

using namespace std;

class generica{
int num;
public:
void informacion();
int operacion();
};

void generica::informacion(){
cout<<"Introduce un numero: ";
cin>>num;
}

int generica::operacion(){
int resultado;
if (num>=10&&num<=100) resultado=1;
else resultado=0;
return resultado;
}

int main()
{
    generica numero;
    numero.informacion();
    int condicional=numero.operacion();
    if (condicional==1) cout<<"El numero esta en el intervalo [10, 100]";
    else cout<<"El numero no esta en el intervalo [10, 100]";
    return 0;
}
