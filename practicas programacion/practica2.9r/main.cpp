#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Introduce un numero para saber si es primo: ";
    cin>>num;
    int contador=0;
    int n=1;

    for (n=2; n<num; n++){
    if (num%n==0) contador++;
    }
    if (contador==0) cout <<"El numero es primo";
    else cout << "El numero no es primo";
    return 0;
}
