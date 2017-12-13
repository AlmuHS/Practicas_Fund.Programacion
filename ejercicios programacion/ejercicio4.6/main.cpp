#include <iostream>

using namespace std;

class vector{
    int tab1[10], tab2[10];
public:
    void cargar();
    int comparar();
};

void vector::cargar(){
    cout<<"**Tabla 1**";
    for (int i=0; i<10; i++){
        cout<<"\nIntroduce un numero: ";
        cin>>tab1[i];
    }
    cout<<"**Tabla 2**";
    for (int j=0; j<10; j++){
        cout<<"\nIntroduce un numero: ";
        cin>>tab2[j];
    }
}

int vector::comparar(){
int compara=0;
for (int i=0; i<10; i++){
if (tab1[i]!=tab2[i]) compara++;
if (i==9&&(tab1[i]!=tab2[i]||compara!=0)) compara=1;
}
return compara;
}

int main()
{
vector generico;
generico.cargar();
int igualdad=generico.comparar();
generico.comparar();
if (igualdad==0) cout<<"Las dos tablas son iguales";
else cout<<"Las dos tablas son diferentes";
    return 0;
}
