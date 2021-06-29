#include<iostream>

using namespace std;

void cambio(int, int& ,int& ,int& ,int& ,int& ,int&);

int main(){
    int pago, cambio100=0, cambio50=0, cambio20,cambio10=0, cambio05=0, cambio01=0;

    cout << "\nIngrese pago: "; cin >> pago;
    cambio(pago, cambio100, cambio50, cambio20, cambio10, cambio05, cambio01);
    cout << "\nBilletes de us$ 100: " << cambio100;
    cout << "\nBilletes de us$ 50: " << cambio50;
    cout << "\nBilletes de us$ 20: " << cambio20;
    cout << "\nBilletes de us$ 10: " << cambio10;
    cout << "\nBilletes de us$ 5: " << cambio05;
    cout << "\nBilletes de us$ 1: " << cambio01 << endl;
    return 10;
}

void cambio(int pago, int& cambio100,int& cambio50,int& cambio20 ,int& cambio10 ,int&cambio05 ,int& cambio01){
    int resto=0;
    cambio100 = pago/100;
    resto = (pago-cambio100*100);
    cambio50 = resto/50;
    resto = (resto-cambio50*50);
    cambio20 = resto/20;
    resto = (resto-cambio20*20);
    cambio10 = resto/10;
    resto = (resto-cambio10*10);
    cambio05 = resto/5;
    cambio01 = (resto-cambio05*5);
}