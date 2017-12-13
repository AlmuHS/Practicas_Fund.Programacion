#include <iostream>

using namespace std;
class num_perfecto{
int num, sumatorio;
public:
void introducir();
void divisores();
void resultado();
};

void num_perfecto::introducir(){
cout<<"Introduce un numero: ";
cin>>num;
}

void num_perfecto::divisores(){
sumatorio=0;
for (int n=1; n<num; n++){
if (num%n==0) sumatorio=sumatorio+n;
}
}

void num_perfecto::resultado(){
if (sumatorio==num) cout <<"el numero es perfecto";
else cout <<"el numero no es perfecto";
}

int main()
{
num_perfecto numero;
numero.introducir();
numero.divisores();
numero.resultado();
    return 0;
}
