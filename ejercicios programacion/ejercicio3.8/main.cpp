#include <iostream>

using namespace std;

class generica{
int num;
public:
void informacion();
void tabla();
};

void generica::informacion(){
cout<<"Introduce un numero para mostrar su tabla de multiplicar: ";
cin>>num;
}

void generica::tabla(){
for (int n=0; n<=10; n++)
cout<<"\n"<<num<<"x"<<n<<"="<<num*n;
}

int main()
{
 generica numero;
 numero.informacion();
 numero.tabla();
    return 0;
}
