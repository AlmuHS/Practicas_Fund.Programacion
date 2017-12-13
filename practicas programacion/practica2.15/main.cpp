#include <iostream>

using namespace std;


    class tipobillete{
    float precio_final;
    int distancia, dias, edad;
    public:
    void informacion();
    void operacion();
    void resultado();
    };
    void tipobillete::informacion(){
    cout <<"Distancia del viaje: ";
    cin >> distancia;
    cout <<"\nNumero de dias: ";
    cin >> dias;
    cout <<"\nEdad del turista: ";
    cin >> edad;
    };

    void tipobillete::operacion(){
    float precio;
    precio=0.50*distancia;
    if (dias>7 && (distancia>800 || edad>55)) precio_final=precio*0.25;
    else precio_final=precio;
    };

    void tipobillete::resultado(){
    cout << "El precio final del viaje es " << precio_final;
    };

    int main(){
    tipobillete viaje;
    viaje.informacion();
    viaje.operacion();
    viaje.resultado();
    }



