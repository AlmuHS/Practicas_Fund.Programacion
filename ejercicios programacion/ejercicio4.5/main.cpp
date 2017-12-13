#include <iostream>

using namespace std;
#define N 5

class vector{
    int uno[N];
    int num;
public:
    void cargar();
    void invertir();
};


void vector::cargar(){
 num=0;
 for(int i=0; i<N; i++){
 cout<<"Introduce un numero entero: ";
 cin>>uno[i];
 num++;
}
}

void vector::invertir(){
for (int i=0; i<(N/2); i++){
cout<<"\n";
int tmp=uno[i];
int tmp2=uno[N-1-i];
uno[i]=tmp2;
uno[N-1-i]=tmp;
}
cout<<"\n";
for (int i=0; i<N; i++)
cout<<uno[i]<<"\t";
}



int main()
{
    vector dos;
    dos.cargar();
    dos.invertir();
    return 0;
}
