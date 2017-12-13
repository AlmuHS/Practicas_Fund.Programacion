#include <iostream>

using namespace std;

class numeros{
int tabla [10];//Una tabla
int par,max, min;
//int pares [10];
//int x;
public:
void cargar();
void mostrar();
int pares();
int nmax();
int nmin();//void introducir_numeros();
//void calcular();
//void resultado();
};
void numeros::cargar(){

for(int i=0; i< 10; i++){
cout<<"Introduce un numero: ";
cin>>tabla[i];
}

}
void numeros::mostrar(){
    for(int i=0; i<10;i++) cout<<tabla[i];
    cout<<"\nHay "<<par<<" numeros pares"
    <<"\nEl numero mayor es "<<max
    <<"\nEl numero menor es "<<min;


}

int numeros::pares(){
    par=0;
    for(int i=0; i<10; i++)
        if(tabla[i]%2==0)
            par++;
            }
int numeros::nmax(){
    max = tabla[0];
    for(int i=0; i<10;i++)
        if(max<tabla[i])
            max = tabla[i];
    }

int numeros::nmin(){
    min = tabla[0];
    for(int i=0; i<10;i++)
        if(min>tabla[i])
            min = tabla[i];
    }

/*void numeros::introducir_numeros(){
i=0,j=0;
for (i=0; i < 10; i++){
cout << "Introduce un numero: ";
cin >> tabla[i];
}
}*/

/*void numeros::calcular(){
int nmayor;
for(i=0; i<10; i++){
if (tabla[i]%2==0){
tabla[i]=pares[j];
j++;
}
}
}

void numeros::resultado(){
for (int k=0; k<j; k++){
cout<<pares[k]<<"\n";
}
}*/


int main()
{

numeros generic;
generic.cargar();
generic.pares();
generic.nmin();
generic.nmax();
generic.mostrar();

    return 0;
}
