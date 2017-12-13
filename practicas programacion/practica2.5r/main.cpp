#include <iostream>

using namespace std;

class media{
int num, contador;
float sumatorio, med;
public:
void introducir();
void calcular();
void resultado();
};

void media::introducir(){
contador=0;
sumatorio=0;
num=1;
while(num>0){
cout <<"Introduce un numero: ";
cin>>num;;
contador++;
sumatorio=num+sumatorio;
}
}
void media::calcular(){
med=sumatorio/(contador-1);
}

void media::resultado(){
cout<<"La media es " << med;
}
int main()
{
media numero;
numero.introducir();
numero.calcular();
numero.resultado();
    return 0;
}
