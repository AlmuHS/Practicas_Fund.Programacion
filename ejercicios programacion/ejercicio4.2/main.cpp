#include <iostream>

using namespace std;

#define M 10
#define N 15
class matrices{
    int tabla[M][N];
public:
    void cargar();
    void encontrar();
};

void matrices::cargar(){
    for(int i=0; i<M; i++){
    for(int j=0; j<N; j++)
    tabla[i][j]=i+j;
    }
}

void matrices::encontrar(){
    int num;
    cout<<"Introduce un numero: ";
    cin>>num;
    for(int i=0; i<M; i++){
    for(int j=0; j<N; j++)
        if (tabla[i][j]==num){
        cout<<"Este numero se encuentra en la tabla";
        i=M;
        }
        else if (i==(M-1)&&j==(N-1)&&tabla[i][j]!=num) cout<<"Este numero no se encuentra en la tabla";
    }
}

int main()
{
    matrices tabla;
    tabla.cargar();
    tabla.encontrar();
    return 0;
}
