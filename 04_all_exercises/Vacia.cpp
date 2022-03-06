#include <iostream>
#include "Vacia.h"

using namespace std;


//************************************************Ejercicios Taller 3***********************************************************************************

//5. Dado un ángulo en grados, determinar si es obtuso, recto o agudo.
void angulo(double x){
    if((x>90)&&(x<180)){
      cout<<"\n"<<"Angulo Obtuso"<<endl;
    }
    if(x==90){
      cout<<"\n"<<"Angulo Recto"<<endl;

    }
    if(x<90){
      cout<<"\n"<<"Angulo Agudo"<<endl;
    }
    if(x>=180){
      cout<<"\n"<<"Otro tipo de angulo"<<endl;
    };
};

//11. Dado un arreglo de datos enteros de tamaño n, decir el número que está de moda.
void moda(){
    int v[10]={2,3,1,3,4,9,3,2,7,2};
    int b = 0; int f = 0; int moda = 0; int a = 0;
    for(int i = 0; i<10; i++){
        b = v[i];
        for(int j = 0; j<10; j++){
            if(b==v[j]){
            f++;
        };
    };
    if(f>a){
        moda = b;
        a = f;
    };
    f=0;
    cout <<v[i]<<" ";
    };
    cout <<"\n"<<"La moda es "<<moda<<endl;
};

//12. Dado un arreglo de enteros decir: ¿Cuál es el menor y cuál es el mayor?
void MayorMenor(){

    int v[10]={2,3,1,3,4,9,3,2,7,2};
    int mayor = 0; int menor = v[0];
    for(int i = 0; i<10; i++){
        if(v[i]>mayor){
          mayor = v[i];
        };
        if(v[i]<menor){
          menor = v[i];
        };
        cout <<v[i]<<" ";
    };
    cout <<"\n"<<"El mayor es "<<mayor<<endl;
    cout <<"\n"<<"El menor es "<<menor<<endl;
};
