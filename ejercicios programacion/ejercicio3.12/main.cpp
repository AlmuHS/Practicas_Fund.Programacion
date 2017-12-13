#include <iostream>

using namespace std;

class generica{
int n;
public:
void informacion();
void suma();
};

void generica::informacion(){
cout<<"Introduce la cantidad de numeros que quieres sumar: ";
cin>>n;
}

void generica::suma(){
int sumatorio=0;
for(int i=0; i<n; i++){
int divisores=0;
for(int j=2;j<i; j++){
if (i%j==0) divisores++;}
if (divisores>0) sumatorio=sumatorio+i;
}
cout<<sumatorio;
}


int main()
{

    generica adicion;
    adicion.informacion();
    adicion.suma();
    return 0;
}
