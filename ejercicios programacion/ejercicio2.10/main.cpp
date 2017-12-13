#include <iostream>

using namespace std;

int main()
{
    int a=1, b=2, tmp=0;
    cout<<a<<"\t"<<b<<"\n";
    tmp=a;
    a=b;
    b=tmp;
    cout<<a<<"\t"<<b;
    return 0;
}
