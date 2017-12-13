#include <iostream>

using namespace std;
#define N 4
class tabla
{
    int t[N][N];
    public:
        void cargar();
        void ver();
        void trasponer();
};

void tabla::cargar(){
for (int i=0; i<N; i++);
        for (int j=0; j<N; j++);
            cin >> t[i][j];
};

void tabla::ver(){
for (int i=0; i<N; i++){
        cout << t[i][j] <<"\t";
    cout <<"\n";
};

void tabla::trasponer(){
    int f1, f2, tmp;
    cout << "Introduzca las filas a intercambiar: ";
    cin >> f1 >>f2;
    for (int j=0; j<N; j++){
        tmp=t[f1][j];
        t[f1][j]=t[f2][j];
        t[f2][j]=tmp;
    };
};


int main()
{
    tabla tab;
    tab.cargar();
    tab.ver();
    tab.trasponer();
    tab.ver();
    return 0;
}

