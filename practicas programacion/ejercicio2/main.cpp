#include <iostream>

using namespace std;

typedef char cadena[20];
class tipopalabra{
bool resultado;
cadena pal;
public:
void cargar();
bool palindroma();
};
void tipopalabra::cargar(){
cout<<"\nIndica la palabra a cargar: ";
cin>>pal;
}

bool tipopalabra::palindroma(){
for (int i=0; i<20; i++){
for (int j=20; j>=0; j--){
if (pal[j]==pal[i]) resultado=true;
else resultado=false;
}//Fin bucle for(j)
}//Fin bucle for(i)
if (resultado==true) cout<<"Palabra palindroma";
else cout<<"Palabra no palindroma";
}//Fin metodo

int main()
{
tipopalabra palabra;
palabra.cargar();
palabra.palindroma();
return 0;
}
