#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include <fstream>

#include "Booleano.h"
#include "Real.h"
#include "Entero.h"
#include "Vacia.h"
#include "arreglo_entero_entero.h"




using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //************************************************Ejercicios Taller 2*******************************************
    /*
    cout <<"***************Ejercicios Taller 2****************"<<endl;
    cout << patos(3) << endl;
    cout << patas_granja(3,2,4) << endl;
    cout << Agua(1,2) << endl;
    cout << Agua(2,2) << endl;
    cout << Agua(10,5) << endl;
    cout << Agua(25,2) << endl;
    cout << Agua(2,25) << endl;
    cout << Agua(2,1) << endl;
    cout << Pendiente(1,4,2,6)<< endl;
    cout << Circulo(5,5,2,3,3) << endl;
    cout << Parabola(0,0) << endl;
    cout << Elipse(5,0) << endl;
    cout << Hiperbole(5,0) << endl;
    cout << rectangulo(2,8,3,6,5,9,4,7)<<endl;
    cout << rectangulo(2,8,3,6,5,9,7,9)<<endl;
    cout << rectangulo(2,8,3,6,2,5,1,2)<<endl;
    */

    //************************************************Ejercicios Taller 3*******************************************

    /*
    if(isoceles(70,20,90)){
       cout<<"El triangulo es isoceles"<<endl;
    }else{
        cout<<"\n"<<"El triangulo NO es isoceles"<<endl;
    };
    cout<<"\n"<<"La hipotenusa es: "<<hipotenusa(5,3)<<endl;
    cout<<"\n"<<"El area del triangulo es: "<<area(9,7)<<endl;
    cout<<"\n"<<"El area del rectangulo es: "<<rectangulo(4,8)<<endl;
    angulo(90);
    cout<<"\n"<<"Vueltas del segundo pinon: "<<pinon(9,7,3)<<endl;
    cout<<"\n"<<"distancia recorrida por la llanta: "<<llanta(5,3)<<endl;
    cout<<"\n"<<"Total recorrido aguila: "<<aguila(5,10,3,20)<<endl;
    cout<<"\n"<<"Velocidad p con respecto a observador en b: "<<trenes(60,50,5)<<endl;
    cout<<"\n"<<"cuantas personas caben? "<<parqueadero(4,6,8)<<endl;salida.close();
    cout<<"\n"<<"El vector es: ";
    moda();
    cout<<"\n";
    MayorMenor();
    cout<<"\n"<<"Al chavo le corresponte: "<<chavo(3)<<endl;
    */


    //************************************************Ejercicios Taller 4***********************************************************************************
    /*int l=0;
    cout<<"Digite Numero: "<<endl;
    cin>>l;
    Criba c (l);
    c.Crear();
    c.llenar();
    c.operar();
    c.imprimir();
    */
    //int p[]={2,8,3,4,1,6,9,7,5,10};
    int* v;
    int n;
    /*cout << "Hello world!" << endl;
    sumaelementos(10);
    cout<<"\n"<<endl;
    promedio(10);
    cout<<"\n"<<endl;
    producto(10);
    cout<<"\n"<<endl;
    minimo(10);
    cout<<"\n"<<endl;
    maximo(10);*/
    //cout<<"\n"<<endl;
    //imprime(p,10);
    //cout<<"\n"<<endl;
    //burbuja(p,10);
    //cout<<"\n"<<endl;
    //imprime(p,10);
    //cout<<"\n"<<endl;
    //median(p,10);
    //cout<<"\n"<<endl;
    //n = llenar(v);
    //cout<<"\n"<<endl;
    //imprime(v,n);
    //cout<<"\n"<<endl;
    //final_ceros(v,n);
    //cout<<"\n"<<endl;
    //imprime(v,n);
    //cout<<"\n"<<endl;
    //conv_binario();
    //cout<<"\n"<<endl;
    //n = llenar(v);
    //cout<<"\n"<<endl;
    //imprime(v,n);
    //cout<<"\n"<<endl;
    //conve_decimal(v,n);

    n = llenar(v);
    cout<<"\n"<<endl;
    imprime(v,n);
    cout<<"\n"<<endl;
    if(suma_iguales(v,n)==true)
    {
        cout<<"Existe por lo menos tres numeros, tales que la suma de dos de ellos sean igual al tercero"<<endl;
    }
    else{
    cout<<"No Existe"<<endl;
    };



    return 0;
}
