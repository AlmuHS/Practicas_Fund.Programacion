#include <iostream>

using namespace std;

int main()
{
    float dolar, euro, peseta;
    cout <<"introduce el valor en pesetas: ";
    cin >> peseta;
    cout <<"\n";
    euro= peseta*0.006;
    dolar=euro*	1.41496;
    cout <<"el valor en euros es: " << euro <<"\n";
    cout << "el valor en dolares es: " <<dolar <<"\n" ;
    return 0;

}
