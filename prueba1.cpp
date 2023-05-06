#include <iostream>
#include <math.h>

using namespace std;
void suma();
void resta();

int main() {

    suma();
    resta();


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

void resta(){

    int c, d, total2;

    cout<<"Ingrese el primer numero: ";
    cin>>c;
    cout<<"Ingrese el segundo numero numero: ";
    cin>>d;

    total2 = c-d;

    cout<<"El resultado es "<<total2<<endl;



}