#include "Real.h"
#include <math.h>

//************************************************Ejercicios Taller 2***********************************************************************************


//4. Dados las coordenadas X y Y de dos puntos, determinar la pendiente de la recta que pasa por estos puntos.
double Pendiente(double x1, double x2, double y1, double y2){

    return (y2-y1)/(x2-x1);
};


//************************************************Ejercicios Taller 3***********************************************************************************

//2. Dada la altura y la base de un tri�ngulo rect�ngulo, calcular la hipotenusa.
double hipotenusa(double x, double y){

        return sqrt((x*x + y*y));
};

//3. Dada la altura y la base de un tri�ngulo rect�ngulo, calcular el �rea del tri�ngulo.
double area(double h, double b){
        return (b*h)/2.0;
};

//4. Dada la altura y la base de un rect�ngulo, calcular el �rea del rect�ngulo.
double rectangulo(double h, double b){
        return b*h;
};

//6. Dado el n�mero de dientes de un pi��n y de un segundo pi��n, determinar cuantas vueltas da el segundo pi��n, dado el n�mero de vueltas del primer pi��n.
double pinon(int p1, int p2, int n1){
        return (n1*p1)/p2;
};

//7. Dado el radio de una llanta y el n�mero de vueltas de llantas determinar la distancia recorrida por el veh�culo.
double llanta(double r, int n){
        return n*2*3.1416*r;
};

//8. Dos trenes viajan en direcciones opuestas, y se est�n acercando el uno con el otro velocidad del tren uno es = V1 y tren dos = v2, un �guila que se encuentra
//en la punta del primer tren con una velocidad V de �guila, el �guila viaja de un tren al otro; que distancia recorri� el �guila, hasta que los dos trenes se
//encontraron.
double aguila(double v1, double v2, double va, double d){
        return (d/(v1+v2))*va;
};

//9. Dos trenes viajando en la misma direcci�n con Va y Vb respectivamente, una persona se encuentra caminando en el tren A, con una velocidad P,
//otra persona en el tren B, cual es la velocidad que observar�a esta persona.
double trenes(double va, double vb, double vp){
        return (vp + va)-vb;
};


//13. Al chavo nadie lo quiere. Kiko tiene 1 tarta de jam�n, tom� la mitad y se la dio a sus amigos, la chilindrina tomo la mitad de la mitad, la popis la mitad
//de la mitad de la mitad....si el chavo tiene k amigos, �cu�nto le toco al chavo?
double chavo(int k){
        return (1/pow(2,k));
};



//INTERES COMPUESTO
double interes_compuesto (int n, double t){
   if (n==1){
    return 1+t;
   }
   return interes_compuesto (n-1,t)*(1+t);
};

