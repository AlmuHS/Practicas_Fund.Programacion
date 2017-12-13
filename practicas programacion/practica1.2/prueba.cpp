#include <iostream>
using namespace std;

int main()
{
float longitud, superficie, volumen, radio;
 float Pi =3.14159;
  cout<< "Introduce el radio de la circunferencia: "<<"\n";
  cin >> radio;
 longitud= 2*Pi*radio;
 superficie=Pi*radio*radio;
 volumen=4*Pi*radio*radio*radio/3;
cout<<" La longitud de la circunferencia es: " << longitud <<" metros"<<"\n";
cout<<" La superficie de la circunferencia es: " << superficie << " metros cuadrados"<<"\n";
cout<<" el volumen de la circunferencia es: " << volumen << "metros cubicos"<<"\n";

 return 0;
 }
