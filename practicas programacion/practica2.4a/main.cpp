#include <iostream>

using namespace std;
class media{
int num,contador, sumatorio, tmp;
public:
void introducir();
};

void media::introducir(){
do{
cout << "introduce un numero: ";
cin >>num;
num=tmp;
sumatorio=num+tmp;
}
while (num>0);
contador=contador+1;
float resmedia=sumatorio/contador;
cout << "la media es " << resmedia;
}


int main()
{
    media serie;
    serie.introducir();
    return 0;
}
