#include <iostream>

using namespace std;
#define MAXIMO 100

class vector{
    int celda[MAXIMO], celda2[MAXIMO], fus[2*MAXIMO];
    int nelem;
public:
    vector (int n, int valores[], int valores2[]);
    void mezclar();
    bool operator ==(const vector &v);

};


vector::vector(int n, int valores[], int valores2[]){
nelem=n;
for(int i=0; i<n; i++){
celda[i]=valores[i];
celda2[i]=valores[i];
}
}

void vector::mezclar(){
for(int i=0; i<nelem; i++){
fus[i]=celda[i];
}
for(int i=nelem; i>(nelem/2); i--)
fus[i]=celda2[i];
}

bool vector::operator ==(const vector &v){
int diff=0;
for(int i=0; i<nelem; i++){
if (v.celda[i]!=v.celda2[i]) diff++;
if (i==(nelem-1)&&(v.celda[i]!=v.celda2[i]||diff!=0)) diff=1;
}
if (diff==0) return true;
else return false;
}

int main()
{
    int n, vector1[MAXIMO],vector2[MAXIMO];
    cout<<"Introduce el numero de elementos del vector: ";
    cin>>n;
    cout<<"**Vector1**";
    for(int i=0; i<n; i++){
    cout<<"Introduce un valor: ";
    cin>>vector1[i];
    }
    cout<<"**Vector2**";
    for(int j=0; j<n; j++){
    cout<<"Introduce un valor: ";
    cin>>vector2[j];
    }
    if (vector1==vector2) cout<<"Los dos vectores son iguales";
    else cout<<"Los dos vectores son diferentes";
    vector array(n, vector1, vector2);
    array.mezclar();
    return 0;
}
