/* "CALCULO DEL AREA DE LA CIRCUNFERENCIA" escrito en C++ */
#include <iostream>
using namespace std;
int main () {

    float radio,pi, area;

    cout<<"INTRODUZCA EL VALOR DEL RADIO:"<<endl;
    cin>>radio;

    pi=3.141592;

    area=pi*(radio*radio);

    cout<<"el area del circulo es:"<<area<<endl;

    return 0;
}
