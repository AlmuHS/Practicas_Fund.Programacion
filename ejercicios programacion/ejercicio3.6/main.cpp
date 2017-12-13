#include <iostream>

using namespace std;

class TipoInversion{
float Cinicial, Interes;
public:
void informacion();
float CapitalFinal();
float CapitalInicial();
};

void TipoInversion::informacion(){
cout<<"Introduce el capital inicial: ";
cin>>Cinicial;
cout<<"Introduce el interes de la inversion: ";
cin>>Interes;
}

float TipoInversion::CapitalFinal(){
float CFinal;
CFinal=Cinicial*(1+Interes)*(1+Interes);
return CFinal;
}

float TipoInversion::CapitalInicial(){
return Cinicial;
}

int main()
{
    TipoInversion inversion;
    inversion.informacion();
    inversion.CapitalFinal();
    float Capital_Inicial=inversion.CapitalInicial();
    float Capital_Final=inversion.CapitalFinal();
    cout<<"\nTu capital inicial es "<<Capital_Inicial
        <<"\nTu capital final despues de dos años sera: "<<Capital_Final;
    if (Capital_Final==2*Capital_Inicial) cout<<"\nHas doblado tu capital";
    else if (Capital_Final>Capital_Inicial) cout<<"\nHas aumentado tu capital";
    else if (Capital_Final<Capital_Inicial) cout<<"\nHas reducido tu capital";
    return 0;
}
