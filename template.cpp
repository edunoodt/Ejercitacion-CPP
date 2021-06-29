#include<iostream>

using namespace std;

template <class dtipo>
dtipo maximo(dtipo x,dtipo y,dtipo z);

int main(){
    int x=4, y=5, z=1;
    float a=56.5, b=45.3, c=84.9;

    cout << endl << maximo(x,y,z) << endl;

    cout << endl << maximo(a,b,c) << endl;



    return 10;
}


template <class dtipo>
dtipo maximo(dtipo x,dtipo y,dtipo z){
    
    if(x<y)
    if (z<y)
        return y;
    else
        return z;
    else 
    if (x<z)

        return z;
    else
        return x;
}