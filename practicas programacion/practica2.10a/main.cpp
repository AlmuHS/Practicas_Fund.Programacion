#include <iostream>

using namespace std;

char letra1, letra2, letra3;
class comparar{
    public:
    void cargar();
    void resultado();
};

void comparar::cargar(){
cout<< "Introduce una letra: ";
cin >> letra1;
cout << "\nIntroduce otra letra: ";
cin >> letra2;
cout << "\nIntroduce otra letra: ";
cin >> letra3;
}

void comparar::resultado(){
if (letra1==letra2 || letra2==letra3 || letra1==letra3) cout <<"\nHay dos letras iguales";
else cout <<"Las tres letras son diferentes";
}
int main()
{
    comparar letra;
    letra.cargar();
    letra.resultado();
    return 0;
}
