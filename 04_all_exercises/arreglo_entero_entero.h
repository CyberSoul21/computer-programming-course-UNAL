#ifndef ARREGLO_ENTERO_H
#define ARREGLO_ENTERO_H
#include <iostream>

#include <stdlib.h>
#include <time.h>
#include <math.h>


using namespace std;

//************************************************Ejercicios Taller 4***********************************************************************************
//1. Implementar la criba de Eratostenes para calcular los n�meros primos en el rango 1 a n, donde n es un n�mero natural dado por el usuario.
class Criba
{
    private:
        int* v;
        int c;
        int n;
	public:
        Criba(int x);
		void Crear();
		void llenar();
		void operar();
		void imprimir();
};



//2.Desarrollar un algoritmo que calcule la suma de los elementos de un arreglo de n�meros enteros (reales).
void sumaelementos(int n);

//3.Desarrollar un algoritmo que calcule el promedio de un arreglo de enteros (reales).
void promedio(int n);

//4.Desarrollar un algoritmo que calcule el producto de dos arreglos de n�meros enteros (reales)
//de igual tama�o. Sean v=(v1,v2,..., vn) y w=(w1,w2,..., wn) dos arreglos, el producto de v y w (notado v.w) es el n�mero: v1 * w1 + v2*w2 +...+ vn * wn
void producto1(int n);

//5.Desarrollar un algoritmo que calcule el m�nimo de un arreglo de n�meros enteros (reales)
void minimo(int n);

//6.Desarrollar un algoritmo que calcule el m�ximo de un arreglo de n�meros enteros (reales).
void maximo(int n);

//7.Desarrollar un algoritmo que calcule el producto directo de dos arreglos de enteros (reales) de igual tama�o.
//Sean v=(v1,v2,..., vn) y w=(w1,w2,..., wn) dos arreglos, el producto directo de v y w (notado v*w) es el vector: [v1 * w1 , v2*w2 ,..., vn * wn]
void producto2(int n);

//8.Desarrollar un algoritmo que determine la mediana de un arreglo de enteros (reales).  La mediana es el n�mero que queda en la mitad del arreglo despues de ser ordenado.
void burbuja(int * v, int n);
void imprime(int * v, int n);
void median (int* v,int n);
int llenar(int* &v);

//9.Hacer un algoritmo que deje al final de un arreglo de n�meros todos los ceros que aparezcan en dicho arreglo.
void final_ceros(int* &v,int n);

//10.Suponga que un arreglo de enteros esta lleno de unos y ceros y que el arreglo representa un n�mero binario al rev�s.
//Hacer un algoritmo que calcule los n�meros en decimal que representa dicho arreglo de unos y ceros.
void conve_decimal(int* v,int n);

//11.Hacer un algoritmo que dado un n�mero entero no negativo, cree un arreglo de unos y ceros que representa el n�mero en binario al rev�s.
void conv_binario();


#endif // ARREGLO_ENTERO_H
