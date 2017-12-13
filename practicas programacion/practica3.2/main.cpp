#include <iostream>
using namespace std;


class tabla{
int t [3][3];
    public:
       void cargar();
       int maximo();
       void ver();
};

void tabla::cargar(){
    for (int i=0; i<3; i++){
    cout<<"Introduzca tres valores separados por espacios: ";
    for (int j=0; j<3; j++) cin >> t[i][j];
    }
};
void tabla::ver(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++)
        cout << t[i][j] <<"\t";
    cout <<"\n";
    };
};

int tabla::maximo(){
    int f1, max;
    cout <<"Indica la fila para calcular el maximo\n";
    cin >> f1;
    //max=t[f1][0];
    for(int j=0; j<10;j++)
        if(max<tabla[f1][j]) max = tabla[f1][j];
}

int main()
{
    int maximo;
    tabla tab;
    tab.cargar();
    tab.ver();
    maximo= tab.maximo();
    cout << "\nEl  valor maximo de la fila es: " << maximo;

    return 0;
}
