#include<iostream>
#include<math.h>
using namespace std;

int main(){
    /* Raices de una expresión cuadrática (0=a²x + bx + c): x1/x2 = (-b +/- sqrt(b²-4ac))/2a
    Para que sean reales b²>4ac */

    float a, b, c, x1=0, x2=0;

    cout << "\nIngrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;

    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    cout << "\nX1= " << x1 << endl;
    cout << "\nX2= " << x2 << endl;

    return 10;
}