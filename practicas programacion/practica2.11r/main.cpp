#include <iostream>

using namespace std;

class num_digito{
int num, contador, copy_num;
public:
void intro_num();
void calculo();
void resultado();
};

void num_digito::intro_num(){
cout <<"Introduce un numero: ";
cin>>num;
}

void num_digito::calculo(){
copy_num=0;
copy_num=num;
contador=0;
while(num%10!=0){
num=num/10;
contador=contador+1;
}
}

void num_digito::resultado(){
cout<<"el numero " << copy_num<<" tiene "<<contador<<" cifras";
}

int main()
{
num_digito numero;
numero.intro_num();
numero.calculo();
numero.resultado();
   return 0;
}
