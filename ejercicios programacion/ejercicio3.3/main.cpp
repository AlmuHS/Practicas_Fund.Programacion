#include <iostream>

using namespace std;

class TipoFecha{
int dia, mes, agno;
int bisiesto();
public:
void informacion();
void diasiguiente();
void fechatexto();
};

void TipoFecha::informacion(){
cout<<"Introduce la fecha";
cout<<"\nIntroduce el dia: ";
cin>>dia;
cout<<"Introduce el mes: ";
cin>>mes;
cout<<"Introduce el año: ";
cin>>agno;
}

int TipoFecha::bisiesto(){
int resultado;
if ( agno%100  || !(agno%400) ) && !(agno%4); resultado=1;
else resultado=0;
return resultado;
}

void TipoFecha::diasiguiente(){
int resultado=bisiesto();
cout<<resultado;
if (mes==2&&dia==28&&resultado==1){
    if (dia>29){
        dia=1;
        mes++;}
    else dia++;}

else if ((mes<=7&&mes%2==1)||(mes>7&&mes%2==0)){
    if (dia<31){ dia++;
        }else if (mes==12&&dia==31){
            agno++;
            dia=1;
            mes=1;
        }
    else{
       dia=1;
       mes++;
        }
    }//Cierre segundo if
else{
    if (dia<30) dia++;
        else{
        dia=1;
        mes++;
        }
    }
}

void TipoFecha::fechatexto(){
cout<<"Huelva, a dia "<<dia<<" de "<<mes<<" de "<<agno;
}

int main()
{
TipoFecha fecha;
fecha.informacion();
fecha.diasiguiente();
fecha.fechatexto();
    return 0;
}
