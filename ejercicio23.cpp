#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

float prosak(float[],int);
void ordenar(float [],int);
void imprimir(float [],int);

int main(){

    char entrada[10];
    float suma=0,promedio=0,arreglo[20];
    int cont=0;

    do{

        cout << "\n >>  "; cin >> entrada;
        
        if (entrada[0] != 's'){

            arreglo[cont]=atof(entrada);
            cont++;
        }
    }
   while(entrada[0] !='s' && cont < 20);

   cout << "\n";

   imprimir(arreglo,cont);
   ordenar(arreglo,cont);
   imprimir(arreglo,cont);

    cout << "\nPromedio: " << prosak(arreglo,cont) << endl << endl;
    
    return 10;
}

float prosak(float arreglo[],int contador){

    float suma=0,promedio=0;

    for (int i=0; i< contador; i++){
        suma+=arreglo[i];
    }

    return suma/contador;
}

void imprimir(float vector[],int cont){
    cout << "\nVector:  ";
    for (int i=0; i<cont; i++){
       cout << vector[i] << " - ";
    }
    cout << endl;
}

void ordenar(float vector[],int cont){
    bool ordenado;
    float buf;
    while (not ordenado){
        ordenado=true;
        for (int i=0;i<cont;i++){
            if (vector[i]<vector[i+1]){
                buf=vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=buf;
                ordenado=false;
            }
        }
    }
}