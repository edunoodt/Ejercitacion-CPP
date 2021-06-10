#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    float base;

    system("clear");

    cout << "\n\nINgrese numero base a multiplicar >>  "; cin >> base;

    for (int i=0; i<=20; i++){

        cout << "\n==> " << base << " * "<< i << " = " << base*i;
    }
    return 10;
}