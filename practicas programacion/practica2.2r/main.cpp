#include <iostream>

using namespace std;

int main()
{
int num, n, resultado;
for (num=1; num<11; num++){
    for (n=0; n<11; n++){
    resultado=num*n;
    cout << n << " x " << num << " = " << resultado << "\n";
    }
}
    return 0;
}
