#include <iostream>

using namespace std;

class TipoFecha{
int guarismo, dia;
public:
    void informacion();
    void nombredia();
};

void TipoFecha::informacion(){
cout<<"Introduce un dia: ";
cin>>guarismo;
}

void TipoFecha::nombredia(){
//int nsemana=0;
//dia=guarismo+(5-7*nsemana);
    int agno=2003;
   int mes_cod[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
   int aux = (agno-1)%7;
   int aux2 = (((agno-1)/4)- ((3*(((agno-1)/100)+1))/4) )%7;
   int aux3=guarismo%7;
   dia = (aux+aux2+aux3+3)%7;
    if (dia==6) cout<<"El "<<guarismo<<" de Marzo es Sabado";
        else if (dia==0) cout<<"El "<<guarismo<<" de Marzo es Domingo";
        else if (dia==1) cout<<"El "<<guarismo<<" de Marzo es Lunes";
        else if (dia==2) cout<<"El "<<guarismo<<" de Marzo es Martes";
        else if (dia==3) cout<<"El "<<guarismo<<" de Marzo es Miercoles";
        else if (dia==4) cout<<"El "<<guarismo<<" de Marzo es Jueves";
        else if (dia==5) cout<<"El "<<guarismo<<" de Marzo es Viernes";
}

int main()
{
    TipoFecha fecha;
    fecha.informacion();
    fecha.nombredia();
    return 0;
}
