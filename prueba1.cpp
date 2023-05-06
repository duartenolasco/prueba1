#include <iostream>
#include <math.h>

using namespace std;
void suma();
int main() {

    suma();



    return 0;
}

void suma(){
    int a, b, total1;

    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero numero: ";
    cin>>b;

    total1 = a+b;

    cout<<"El resultado es "<<total1<<endl;
}
