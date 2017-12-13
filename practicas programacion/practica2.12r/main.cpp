#include <iostream>

using namespace std;

class descomponer{
int num;
public:
void intro_num();
void descomposicion();
};

void descomponer::intro_num(){
cout<<"Introduce un numero para ver su descomposicion en cifras: ";
cin>>num;
}

void descomponer::descomposicion(){
while(num%10>=1){
cout<<"-"<<num%10;
num=num/10;
}
}

int main()
{
descomponer numero;
numero.intro_num();
numero.descomposicion();
return 0;
}
