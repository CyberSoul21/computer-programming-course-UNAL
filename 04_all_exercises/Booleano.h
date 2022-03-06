#ifndef BOOLEANO_H
#define BOOLEANO_H

//************************************************Ejercicios Taller 2***********************************************************************************

//5. Dadas las coordenadas de un punto, el radio del círculo y el centro de la circunferencia determinar si ese unto está dentro de la circunferencia.
bool Circulo(double x, double y, double a, double b, double r);

//6. Dados los coeficientes cuadrados de una ecuación cuadrática determinar si define la ecuación una parábola.
bool Parabola(double a, double b);


//7. Dados los coeficientes cuadrados de una ecuación cuadrática determinar si define la ecuación una Elipse.
bool Elipse(double a, double b);

//8. Dados los coeficientes cuadrados de una ecuación cuadrática determinar si define la ecuación una Hipérbole
bool Hiperbole(double a, double b);

//9. Dadas las coordenadas superior izquierda e inferior derecha de dos rectángulos; determinar si se intersectan.
bool rectangulo(double x1, double x2, double y1, double y2, double x3, double x4, double y3, double y4);

//10.Dadas las 5 notas de un estudiante y la ponderación de las notas, determinar si el estudiante pasa o no pasa la materia.
bool Notas(double a,double b,double c,double d,double e);


//************************************************Ejercicios Taller 3***********************************************************************************

//1. Dados tres reales, determinar si con ellos se puede formar un triángulo isósceles.
bool isoceles(double a, double b, double c);

//************************************************Sustentacion***********************************************************************************
//1.Dado un arreglo de enteros, determinar si en dicho arreglo hay tres números, tales que la suma de dos de ellos sean igual al tercero
bool suma_iguales(int *v,int n);


#endif
