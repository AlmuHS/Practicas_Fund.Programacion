#include <iostream>

using namespace std;

class vector{
    int uno[5], dos[5], fus[10];
    int numuno, numdos;
public:
    void cargar();
    void mezclar();
};

void vector::cargar(){
    cout<<"**Tabla 1**";
    numuno=0;
    for(int i=0; i<5; i++){
        cout<<"\nIntroduce un valor: ";
        cin>>uno[i];
        numuno++;
    }
    cout<<"**Tabla 2**";
    numdos=0;
    for(int j=0; j<5; j++){
        cout<<"\nIntroduce un valor: ";
        cin>>dos[j];
        numdos++;
    }
}

void vector::mezclar(){
    for(int i=0; i<5; i++){
        fus[i]=uno[i];
    }
    for (int j=10; j>=5; j--){
        fus[j]=dos[j];
    }
    for(int k=0; k<10; k++){
        if(fus[k+1]<fus[k]){
        int tmp=fus[k];
        fus[k]=fus[k+1];
        fus[k+1]=tmp;
        }
   }
   for(int l=0; l<10; l++)
   cout<<fus[l]<<"\t";
}


int main()
{
    vector array;
    array.cargar();
    array.mezclar();
    return 0;
}
