#include "Booleano.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>


using namespace std;
//**********************************************Ejercicios Taller 2***************************************************


//5. Dadas las coordenadas de un punto, el radio del círculo y el centro de la circunferencia determinar si ese unto está dentro de la circunferencia.
bool Circulo(double x, double y, double a, double b, double r){

    return (x-a)*(x-a)+(y-b)*(y-b)<= r*r;

};

//6. Dados los coeficientes cuadrados de una ecuación cuadrática determinar si define la ecuación una parábola.
bool Parabola(double a, double b){

    return (((a!=0)&&(b==0))||((a==0)&&(b!=0)))==1;
};

//7. Dados los coeficientes cuadrados de una ecuación cuadrática determinar si define la ecuación una Elipse.
bool Elipse(double a, double b){

    return (((a!=b)&&(a>0)&&(b>0))||((a!=b)&&(a<0)&&(b<0)))==1;
};

//8. Dados los coeficientes cuadrados de una ecuación cuadrática determinar si define la ecuación una Hipérbole
bool Hiperbole(double a, double b){

    return (((a!=b)&&(a>0)&&(b<0))||((a!=b)&&(a<0)&&(b>0)))==1;
};

//9. Dadas las coordenadas superior izquierda e inferior derecha de dos rectángulos; determinar si se intersectan.
bool rectangulo(double x1, double x2, double y1, double y2, double x3, double x4, double y3, double y4){

    return (((x1<=x3)&&(x3<=x2))||((x1<=x4)&&(x4<=x2)))&&(((y1<=y3)&&(y3<=y2))||((y1<=y4)&&(y4<=y2)))== 1;


};

//10.Dadas las 5 notas de un estudiante y la ponderación de las notas, determinar si el estudiante pasa o no pasa la materia.
bool Notas(double a,double b,double c,double d,double e){

    return (a+b+c+d+e)/5>=3;

};

//************************************************Ejercicios Taller 3***********************************************************************************

//1. Dados tres reales, determinar si con ellos se puede formar un triángulo isósceles.
bool isoceles(double a, double b, double c){
    bool t=false;
    if(((a==b)&&(b!=c))||((b==c)&&(b!=a))||((a==c)&&(b!=a))){
        t=true;
    };
    return t;
};

//************************************************Sustentacion***********************************************************************************
//1.Dado un arreglo de enteros, determinar si en dicho arreglo hay tres números, tales que la suma de dos de ellos sean igual al tercero

bool suma_iguales(int *v, int n){
    int p=0;
    bool existe = false;

    for(int i = 0; i<n; i++){

            for(int k= 0; k<n; k++)
            {
               if(k!=i){
                    p= v[i]+v[k];
                };
                for(int j= 0; j<n; j++){
                    if(v[j]==p)
                    {
                        existe = true;
                        i = n;
                        k=n;
                    };
                };
            };
    };
    return existe;
};









