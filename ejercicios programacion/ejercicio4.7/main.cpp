#include <iostream>

using namespace std;

class matriz{
    int a[3][3];
public:
    void cargar();
    bool simetrica();
};

void matriz::cargar(){
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    cout<<"Introduce un numero: ";
    cin>>a[i][j];
    }
    }
}

bool matriz::simetrica(){
    bool evalua=false;
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    if (a[i][j]!=a[j][i]) evalua=true;
    else if ((evalua==true)&&a[i][j]==a[j][i]) evalua=true;
    else if (i==2&&j==2&&evalua==false&&a[i][j]==a[j][i])evalua=false;
    }
    }
return evalua;
}

int main()
{
    matriz generica;
    generica.cargar();
    generica.simetrica();
    bool asimetria=generica.simetrica();
    if (asimetria==true) cout<<"La tabla no es simetrica";
    else cout<<"La tabla es simetrica";
    return 0;
}
