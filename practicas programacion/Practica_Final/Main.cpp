#include <iostream>
#include <string.h>

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
    struct Trabajo T;

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
    Sueldo = 0;
    NoTrabajos = 0;

    for (int n = 0; n < 250; n++)
    {
        Horario[n].dia = 0;
        Horario[n].mes = 0;
        Horario[n].NHoras = 0;
        Horario[n].Precio = 0;
    }
}

void Empleado::PedirDatos()
{
    char opcion;
    do
    {
        cout<<"Introduce tus datos\n\n"
            <<"Nombre: ";
        cin.ignore();
        cin.getline(Nombre, 100);

        cout<<"Direccion: ";
        //cin.ignore();
        cin.getline(Direccion, 100);

        cout<<"Banco: ";
        cin.getline(Banco, 100);

        cout<<"Los datos introducidos son: ";
        cout<<"\nNombre: "<<Nombre;
        cout<<"\nDireccion: "<<Direccion;
        cout<<"\nBanco: "<<Banco;
        cout<<"\nSon correctos estos datos? (s/n): ";
        cin>>opcion;
    }
    while (opcion=='n');
}

void Empleado::getNombre(Cadena N)
{
    strcpy(N, Nombre);
}

void Empleado::getDireccion(Cadena D)
{
    strcpy(D, Direccion);
}

void Empleado::getBanco(Cadena B)
{
    strcpy(B, Banco);
}

float Empleado::CalculaSueldo(int Mes)
{
    float Sueldo = 0;

    for(int i = 0; i < 250; i++)
    {
        if(Horario[i].mes = Mes)
        {
            Sueldo += Horario[i].NHoras * Horario[i].Precio;
        }
    }

    return Sueldo;
}


void Empleado::AniadirTrabajo(Trabajo T)
{
    Horario[NoTrabajos] = T;
    NoTrabajos++;
}

Trabajo Empleado::ConsultarTrabajo(int mes, int dia)
{
    Trabajo T;

    int pos = 0;

    bool encontrado = false;

    while(!encontrado && pos < NoTrabajos)
    {
        if(Horario[pos].dia == dia && Horario[pos].mes == mes)
        {
            encontrado = true;
            T = Horario[pos];
        }
        else pos++;
    }

    return T;

}

int Empleado::operator==(Empleado E)
{
    int igual;

    if(strcmp(E.Nombre, Nombre) == 0) igual = 0;
    else igual = 1;

    return igual;
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
    int NoEmpleados()
    {
        return NEmpleados;
    }

    Cuadrilla operator+(Empleado E);
    Cuadrilla operator-(Empleado E);

    Cuadrilla operator+(Trabajo T);

    bool GuardarAFichero(Cadena NombreFichero);
    bool LeerDesdeFichero(Cadena NombreFichero);
};


Cuadrilla::Cuadrilla()
{
    NEmpleados = 0;
}

Empleado Cuadrilla::getEncargado()
{
    return Encargado;
}

void Cuadrilla::setEncargado(Empleado P)
{
    Encargado = P;
}


Empleado Cuadrilla::operator[](int Pos)
{
    Empleado E;

    if(Pos < NEmpleados)
    {
        E = Plantilla[Pos];
    }

    return E;
}


Cuadrilla Cuadrilla::operator+(Empleado E)
{
    Cuadrilla C;
    C.Encargado = Encargado;
    C.NEmpleados = NEmpleados;


    for(int i = 0; i < NEmpleados; i++)
    {
        C.Plantilla[i] = Plantilla[i];
    }

    int pos = 0;
    while(!(Plantilla[pos] == E) && pos < NEmpleados) pos++;

    if(pos == NEmpleados)
    {
        Plantilla[NEmpleados] = E;
        C.NEmpleados++;
    }

    return C;

}

Cuadrilla Cuadrilla::operator-(Empleado E)
{
    Cuadrilla C;
    C.Encargado = Encargado;
    C.NEmpleados = NEmpleados;


    for(int i = 0; i < NEmpleados; i++)
    {
        C.Plantilla[i] = Plantilla[i];
    }

    int pos = 0;
    while(!(Plantilla[pos] == E) && pos < NEmpleados) pos++;

    if(pos < NEmpleados)
    {

        for(int i = pos; i < NEmpleados; i++)
        {
            Empleado aux;
            C.Plantilla[i] = C.Plantilla[i+1];
        }

        C.NEmpleados--;
    }

    return C;
}


Cuadrilla Cuadrilla::operator+(Trabajo T)
{
    Cuadrilla C;
    C.Encargado = Encargado;
    C.NEmpleados = NEmpleados;


    for(int i = 0; i < NEmpleados; i++)
    {
        C.Plantilla[i] = Plantilla[i];
        C.Plantilla[i].AniadirTrabajo(T);
    }

    return C;

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
    int opcion;
    Cuadrilla C;

    char respuesta;
    Cadena ruta;

    cout<<"¿Desea cargar los datos desde fichero? (s/n): ";
    cin>>respuesta;

    if(respuesta == 's' || respuesta == 'S')
    {


        cout<<"Introduce el nombre del fichero: ";
        cin>>ruta;



        if(C.LeerDesdeFichero(ruta)) cout<<"Datos cargados correctamente";
        else cout<<"Error al cargar los datos";
    }

    do
    {
        cout<<"\nMenu principal\n"
            <<"-----------------\n"
            <<"1. Anadir Encargado\n"
            <<"2. Anadir empleado\n"
            <<"3. Eliminar un empleado\n"
            <<"4. Anadir un trabajo\n"
            <<"5. Mostrar la cuadrilla\n"
            <<"6. Buscar un empleado\n"
            <<"7. Salir\n\n"
            <<"Elige una opcion: ";
        cin>>opcion;

        if(opcion < 1) cout<<"Error: debe introducir un numero entre el 1 y el 7";


        Empleado E;
        Trabajo T;
        bool fin = false;
        int pos = 0;
        Cadena nombre, nombre2, direccion, banco;
        int mes;
        float sueldo;
        int dias_mes;

        switch(opcion)
        {

        case 1:
            E.PedirDatos();
            C.setEncargado(E);
            break;

        case 2:
            E.PedirDatos();
            C = C+E;
            break;

        case 3:
            E.PedirDatos();
            C = C-E;
            break;

        case 4:
            T = PedirTrabajo();
            C = C+T;
            break;

        case 5:
            E = C.getEncargado();
            E.getNombre(nombre);


            if(strcmp(nombre, "") == 0) cout<<"\nError: no existe encargado asignado a la plantilla\n";
            else
            {
                E.getDireccion(direccion);
                E.getBanco(banco);

                cout<<"Datos del encargado: \n"
                    <<"Nombre: "<<nombre
                    <<"\nDireccion: "<<direccion
                    <<"\nBanco: "<<banco;
            }

            if(C.NoEmpleados() == 0) cout<<"\nError: no tenemos empleados en plantilla\n";

            for(int i = 0; i < C.NoEmpleados(); i++)
            {
                E = C[i];
                E.getNombre(nombre);
                E.getDireccion(direccion);
                E.getBanco(banco);

                cout<<"\n\nDatos del empleado "<<pos<<": \n"
                    <<"Nombre: "<<nombre
                    <<"\nDireccion: "<<direccion
                    <<"\nBanco: "<<banco;
            }

            break;

        case 6:
            cin.ignore();
            cout<<"Introduzca nombre del empleado a buscar: ";
            cin.getline(nombre2, 100);

            cout<<"Empleado a buscar: "<<nombre2;

            pos = 0;
            fin = false;

            while(!fin && pos < C.NoEmpleados())
            {
                E = C[pos];
                E.getNombre(nombre);
                if(strcmp(nombre, nombre2) == 0) fin = true;
                pos++;
            }

            E.getBanco(banco);
            E.getDireccion(direccion);

            if(pos < C.NoEmpleados())
            {

                cout<<"Empleado encontrado.\n"
                    <<"Datos del empleado: \n"
                    <<"Nombre: "<<nombre
                    <<"\nDireccion: "<<direccion
                    <<"\nBanco: "<<banco;

                cout<<"\n\nIntroduzca mes actual: ";
                cin>>mes;

                sueldo = E.CalculaSueldo(mes);
                cout<<"\nEl sueldo correspondiente al mes actual es "<<sueldo;


                cout<<"\nConsultando trabajos asignados para este mes...\n";
                for(int i = 0; i < 31; i++)
                {
                    T = E.ConsultarTrabajo(mes, i);

                    if(T.dia > 0)
                    {
                        cout<<"Dia :"<<T.dia;
                        cout<<"\nNumero de horas: "<<T.NHoras;
                        cout<<"\nPrecio: "<<T.Precio;
                    }
                }
            }
            else{
                cout<<"\nError: empleado no encontrado\n";
            }

            break;

        case 7:
            cout<<"\n¿desea guardar los datos en el fichero? (s/n): ";
            if(respuesta == 's' || respuesta == 'S')
            {
                if(C.GuardarAFichero(ruta)) cout<<"\nDatos guardados correctamente";
                else cout<<"\nError al guardar los datos";
            }

            break;
        }


    }
    while(opcion < 7);

    cls;

    pause;
    return 0;
}
//---------------------------------------------------------------------------
