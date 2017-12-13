#include <iostream>

using namespace std;

#define N 100
typedef char cadena[20];

class contacto {
    cadena nombre;
    double tlfns[4];
    int ntlf; // cantidad de teléfonos distintos del contacto

    public:
        contacto() { ntlf = 0; }
        contacto(cadena nom, double tfs[], int nt);
        int getntlf() { return ntlf; }
        int buscartlf(double t); // 1 si t existe, 0 si no
        void getnombre(cadena nom);
        void cambiar_nombre(cadena nom);
        int operator==(contacto c); // 1 si son iguales y 0 si no
        int operator!=(contacto c); // 1 si son distintos,0 si no
        void operator=(contacto c); // permite asignar objetos
        // de la clase contacto
        contacto operator+(double t); // añade un teléfono
        // a un contacto
};

class agenda {
contacto listin[N];
int nc;
public:
agenda(){ nc = 0; }
int buscar_contacto(contacto c);
/*Devuelve la posición del listin donde se encuentra el
contacto. Si no se encuentra devuelve -1*/
void eliminar_contacto(contacto c);
/*Elimina el contacto si existe, si no no hace nada*/
void modificar_nombre(contacto c, cadena nom);
/*Modifica el nombre del contacto c con el nuevo nombre
nom, si no existe el contacto no hace nada*/
void insertar_contacto(contacto c);
/*Inserta el nuevo contacto c en la agenda siempre que no
exista y que no esté llena*/
void nuevo_telf(contacto c, double tlfn);
/*Añade un nuevo teléfono a un contacto existente siempre
que no exista y no tenga ya 4 telefonos asignados*/
};
int agenda::buscar_contacto(contacto c){
int pos;
for (int n=0; n<=N; n++){
for (int i=0; i<4;i++){
if (c[i]==listin[n]) pos=n;



































































else pos=-1;}
}
return pos;
}
int main()
{
    return 0;
}
