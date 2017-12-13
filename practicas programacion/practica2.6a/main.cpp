#include <iostream>

using namespace std;
int num1, num2, num3;
class evalua_orden{
    public:
    void introducir();
    void evaluar();
};
void evalua_orden::introducir(){
cout << "Introduce un numero: ";
cin >> num1;
cout << "\nIntroduce otro numero: ";
cin >> num2;
cout << "\nIntroduce otro numero: ";
cin >> num3;
};
void evalua_orden::evaluar(){
if (num1>num2 && num2>num3) cout<<"El orden es decreciente";
else if (num1<num2 && num2<num3) cout <<"El orden es creciente";
else cout<<"No hay ningun orden";
}


int main()
{
evalua_orden generico;
generico.introducir();
generico.evaluar();
    return 0;
}
