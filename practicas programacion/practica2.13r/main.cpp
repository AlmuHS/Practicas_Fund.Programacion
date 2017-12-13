#include <iostream>

using namespace std;

class generica{
float suma, media;
public:
void informacion();
void resultado();
};

void generica::informacion(){
suma=0;
int cantidad=0,num=0, n=0;
cout<<"¿Cuantos numeros quiere sumar?: ";
cin>>cantidad;
while(n<cantidad){
cout<<"Introduce un numero: ";
cin>>num;
suma=num+suma;
n++;
}
media=suma/cantidad;
}

void generica::resultado(){
cout<<"La suma de los numeros es "<<suma;
cout<<"\nLa media es "<<media;
}


int main()
{
 generica numero;
 numero.informacion();
 numero.resultado();
    return 0;
}
