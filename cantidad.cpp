#include<iostream>

using namespace std;

int main(){
    float entradas;
    int cont=0;

    do{
        cout << "ingrese numero (cero para terminar): "; cin >> entradas;

        if (entradas != 0) cont++;}
    while (entradas!=0);

    cout << "\ningresó " << cont << "números" << endl;
    
    return 10;
}