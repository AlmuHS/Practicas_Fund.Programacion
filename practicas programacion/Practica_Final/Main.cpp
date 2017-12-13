#include <iostream>
using namespace std;

#define cls system("CLS")
#define pause system("PAUSE")

typedef char Cadena[100];

struct Trabajo
{
   int mes, dia;
   float NHoras;
   float Precio;
};

Trabajo PedirTrabajo()
{
Trabajo T;
cout<<"Mes que trabajara: ";
cin>>T.mes;
cout<<"Dia que trabaja: ";
cin>>T.dia;
cout<<"Numero de horas: ";
cin>>T.NHoras;
cout<<"Sueldo que cobrara: ";
cin>>T.Precio;
};


class Empleado
{
     Cadena Nombre;
     Cadena Direccion;
     Cadena Banco;
     float Sueldo;
     Trabajo Horario[250];
     int NoTrabajos;

   public:
     Empleado();
     void PedirDatos();
     void getNombre(Cadena N);
     void getDireccion(Cadena D);
     void getBanco(Cadena B);
     float CalculaSueldo(int Mes);
     void AniadirTrabajo(Trabajo T);
     Trabajo ConsultarTrabajo(int mes, int dia);
     int operator==(Empleado E);

     void GuardarAFichero(FILE *f);
     void LeerDesdeFichero(FILE *f);

};

Empleado::Empleado()
{
strcpy(Nombre, "");
strcpy(Direccion,"");
strcpy(Banco,"");
Sueldo=0;
NoTrabajos=0;
for (int n=0; n<=250; n++) Horario[n]=0;
}

void Empleado::PedirDatos()
{
char opcion;
do{
cout<<"-Introduce tus datos";
getNombre(Cadena N);
getDireccion(Cadena D);
getBanco(Cadena B);
cout<<"Los datos introducidos son: ";
cout<<"\nNombre: "<<Nombre;
cout<<"\nDireccion: "<<Direccion;
cout<<"\nBanco: "<<Banco;
cout<<"\nSon correctos estos datos? (s/n): ";
cin>>opcion;
}while (opcion=='n');
}

void Empleado::getNombre(Cadena N)
{
strcpy(Nombre, N);
}

void Empleado::getDireccion(Cadena D)
{
strcpy(Direccion, D);
}

void Empleado::getBanco(Cadena B)
{
strcpy(Banco, B);
}

float Empleado::CalculaSueldo(int Mes)
{
Trabajo T;
T.mes=Mes;
float horas=Mes.NHoras;
float precio=T.Precio;
float num_dias=T.dia;
Sueldo=horas*precio*num_dias;
return Sueldo;
}


void Empleado::AniadirTrabajo(Trabajo T)
{
cout<<"Introduce el dia de trabajo: ";
cin>>T.dia;
cout<<"Numero de horas del trabajo: ";
cin>>T.NHoras;
cout<<"Sueldo que cobrara: ";
cin>>T.Precio;
}

Trabajo Empleado::ConsultarTrabajo(int mes, int dia)
{
Trabajo T;
mes=T.mes;
dia=T.dia;
cout<<"Numero de horas: "<<T.NHoras;
cout<<"Precio: "<<T.Precio;
if (T.mes==0){
cout<<"Numero de horas: 0";
cout<<"Precio: 0";
}
}

int Empleado::operator==(Empleado E)
{

}

void Empleado::GuardarAFichero(FILE *f)
{
  fwrite(Nombre,sizeof(Nombre),1,f);
  fwrite(Direccion,sizeof(Direccion),1,f);
  fwrite(Banco,sizeof(Banco),1,f);
  fwrite(&Sueldo,sizeof(Sueldo),1,f);
  fwrite(&NoTrabajos,sizeof(NoTrabajos),1,f);
  fwrite(Horario,sizeof(Trabajo),NoTrabajos,f);
}

void Empleado::LeerDesdeFichero(FILE *f)
{
  fread(Nombre,sizeof(Nombre),1,f);
  fread(Direccion,sizeof(Direccion),1,f);
  fread(Banco,sizeof(Banco),1,f);
  fread(&Sueldo,sizeof(Sueldo),1,f);
  fread(&NoTrabajos,sizeof(NoTrabajos),1,f);
  fread(Horario,sizeof(Trabajo),NoTrabajos,f);
}


//---------------------------------------------------------------------------

class Cuadrilla
{
     Empleado Encargado;
     Empleado Plantilla[30];
     int NEmpleados;
  public:
     Cuadrilla();
     Empleado getEncargado();
     void setEncargado(Empleado P);

     Empleado operator[](int Pos);
     int NoEmpleados() {return NEmpleados;}

     Cuadrilla operator+(Empleado E);
     Cuadrilla operator-(Empleado E);

     Cuadrilla operator+(Trabajo T);

     bool GuardarAFichero(Cadena NombreFichero);
     bool LeerDesdeFichero(Cadena NombreFichero);
};


Cuadrilla::Cuadrilla()
{
NEmpleados=0;
}

Empleado Cuadrilla::getEncargado()
{
cout<<"\nDireccion: "<<Encargado.Direccion;
cout<<"\nHorario: "<<Encargado.Horario;
cout<<"\nNumero de trabajos: "<<Encargado.NoTrabajos;
cout<<"\nSueldo: "<<Encargado.Sueldo;
};

void Cuadrilla::setEncargado(Empleado P)
{
strcpy(Encargado.Nombre, P.Nombre);
strcpy(Encargado.Horario, P.Horario);
strcpy(Encargado.Banco, P.Banco);
strcpy(Encargado.Direccion, P.Direccion);
Encargado.NoTrabajos=P.NoTrabajos;
Encargado.Sueldo=P.Sueldo;
}


Empleado Cuadrilla::operator[](int Pos)
{
if (Plantilla[Pos].Nombre==""&&Plantilla.[Pos].Direccion==""&&Plantilla[Pos].Banco==""&&Plantilla[Pos].NoTrabajos==""){
cout<<"Nombre: ";
cout<<"\nDireccion: ";
cout<<"\nBanco: ";
cout<<"\nNumero de trabajos: ";
}
else{
cout<<"Nombre: "<<Plantilla[Pos].Nombre;
cout<<"\nDireccion: "<<Plantilla[Pos].Direccion;
cout<<"\nBanco: "<<Plantilla[Pos].Banco;
cout<<"\nNumero de trabajos: "<<Plantilla[Pos].NoTrabajos;
}
}


Cuadrilla Cuadrilla::operator+(Empleado E)
{
cout<<Cuadrilla.Encargado;
cout<<Cuadrilla.NEmpleados;
cout<<Cuadrilla.Plantilla;
cout<<E.Nombre;
cout<<E.Direccion;
cout<<E.Banco;
cout<<E.NoTrabajos;
cout<<E.Sueldo;
}

Cuadrilla Cuadrilla::operator-(Empleado E)
{

}


Cuadrilla Cuadrilla::operator+(Trabajo T)
{

}

bool Cuadrilla::GuardarAFichero(Cadena NombreFichero)
{
   bool Salida=false;
   FILE *f=fopen(NombreFichero,"wb");
   if (f!=NULL)
   {
      fwrite (&NEmpleados,sizeof(NEmpleados),1,f);
      Encargado.GuardarAFichero(f);
      for (int i=0; i<NEmpleados; i++)
          Plantilla[i].GuardarAFichero(f);
      fclose(f);
      Salida=true;
   };
   return Salida;
};

bool Cuadrilla::LeerDesdeFichero(Cadena NombreFichero)
{
   bool Salida=false;
   FILE *f=fopen(NombreFichero,"rb");
   if (f!=NULL)
   {
      fread (&NEmpleados,sizeof(NEmpleados),1,f);
      Encargado.LeerDesdeFichero(f);
      for (int i=0; i<NEmpleados; i++)
          Plantilla[i].LeerDesdeFichero(f);
      fclose(f);
      Salida=true;
   };
   return Salida;
};


int main(int argc, char* argv[])
{
   cls;

   pause;
   return 0;
}
//---------------------------------------------------------------------------
