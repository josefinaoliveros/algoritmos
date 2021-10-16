/* "CALCULADORA" escrito en C++ */
#include <iostream>
using namespace std;
int main () {

    float a, b,suma, resta, multiplicacion, division;

    cout<<"INTRODUZCA EL PRIMER NUMERO:"<<endl;
    cin>>a;
    cout<<"INTRODUZCA EL SEGUNDO NUMERO:"<<endl;
    cin>>b;

    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    division=a/b;

    cout<<"el resultado de su operación es:"<<endl;

    cout<<"Suma: "<<suma<<endl<<"Resta: "<<resta<<endl<<"Multiplicacion: "<<multiplicacion<<endl<<"Division: "<<division;



    return 0;
}
