#include <iostream>
using namespace std;


#define MAXIMO 100
class vector{
int celda[MAXIMO];
int nelem;
public:
vector (int n);
vector (int n, int valores[]);
int longitud();
int get(int n);
int &put(int n);
void invertir();
void visualizar();
void mezclar();

};


vector::vector(int n){
nelem=n;
}

vector::vector(int n, int valores[]){
nelem=n;
for(int i=0; i<n; i++)
celda[i]=valores[i];
}


int vector::longitud(){
return nelem;
}

int vector::get(int n){
return celda[n];
}

int& vector::put(int n){
int& refer=celda[n];
return refer;
}

void vector::invertir(){
for (int i=0; i<(nelem/2); i++){
int tmp=celda[i];
int tmp2=celda[nelem-1-i];
celda[i]=tmp2;
celda[nelem-1-i]=tmp;
}
cout<<"\nEl vector invertido es ";
for (int i=0; i<nelem; i++)
cout<<celda[i]<<"\t";
}

void vector::visualizar(){
for(int i=0; i<nelem; i++)
cout<<celda[i]<<"\t";
}

void vector::mezclar(){
int fus[2*nelem], dos[nelem];
for(int i=0; i<nelem; i++){
cout<<"Introduce un valor: ";
cin>>dos[i];
}
for(int i=0; i<nelem; i++){
        fus[i]=celda[i];
    }
for (int j=(2*nelem); j>=nelem; j--)
        fus[j]=dos[j];
for(int i=0; i<(2*nelem); i++)
cout<<fus[i];
}

int main()
{
int n=0, tabla[MAXIMO], casilla=0, valor=0;
do{
cout<<"Introduce el tamaño del vector: ";
cin>>n;
}while(n<=0||n>100);
for (int i=0; i<n; i++){
    cout<<"Introduce un valor: ";
    cin>>tabla[i];
}
vector mi_vector(n, tabla);
valor=mi_vector.longitud();
cout<<"\nEl vector introducido es: ";
mi_vector.visualizar();
mi_vector.invertir();
cout<<"\nLa longitud del vector es "<<valor<<"\n";
do{
cout<<"Introduce la celda de la que quieres mostrar el valor: ";
cin>>casilla;
}while (casilla<0||casilla>=n);
valor=mi_vector.get(casilla);
cout<<"El valor de la celda "<<casilla<<" es "<<valor;
valor=mi_vector.put(casilla);
cout<<"\nLa referencia a la celda "<<casilla<<" es "<<valor<<"\n";
mi_vector.mezclar();
    return 0;
}
