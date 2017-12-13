#include <iostream>

using namespace std;

class generica{
int inf, sup;
public:
void informacion();
void PrimosIntervalo();
};

void generica::informacion(){
cout<<"Introduce el limite inferior: ";
cin>>inf;
cout<<"Introduce el limite superior: ";
cin>>sup;
}

void generica::PrimosIntervalo(){
cout<<"Los numeros primos en el intervalo ["<<inf<<","<<sup<<"] son: \n";
for(int i=inf; i<sup; i++){
int divisores=0;
for(int j=2;j<i; j++){
if (i%j==0) divisores++;}
if (divisores==0) cout<<i<<"\t";
}
}

int main()
{
    generica primo;
    primo.informacion();
    primo.PrimosIntervalo();
    return 0;
}
