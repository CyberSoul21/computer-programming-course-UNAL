#ifndef REAL_H
#define REAL_H


//************************************************Ejercicios Taller 2***********************************************************************************

//4. Dados las coordenadas X y Y de dos puntos, determinar la pendiente de la recta que pasa por estos puntos.
double Pendiente(double x1, double x2, double y1, double y2);


//************************************************Ejercicios Taller 3***********************************************************************************

//2. Dada la altura y la base de un triángulo rectángulo, calcular la hipotenusa.
double hipotenusa(double x, double y);

//3. Dada la altura y la base de un triángulo rectángulo, calcular el área del triángulo.
double area(double h, double b);


//4. Dada la altura y la base de un rectángulo, calcular el área del rectángulo.
double rectangulo(double h, double b);


//6. Dado el número de dientes de un piñón y de un segundo piñón, determinar cuantas vueltas da el segundo piñón, dado el número de vueltas del primer piñón.
double pinon(int p1, int p2, int n1);


//7. Dado el radio de una llanta y el número de vueltas de llantas determinar la distancia recorrida por el vehículo.
double llanta(double r, int n);


//8. Dos trenes viajan en direcciones opuestas, y se están acercando el uno con el otro velocidad del tren uno es = V1 y tren dos = v2, un águila que se encuentra
//en la punta del primer tren con una velocidad V de águila, el águila viaja de un tren al otro; que distancia recorrió el águila, hasta que los dos trenes se
//encontraron.
double aguila(double v1, double v2, double va, double d);


//9. Dos trenes viajando en la misma dirección con Va y Vb respectivamente, una persona se encuentra caminando en el tren A, con una velocidad P,
//otra persona en el tren B, cual es la velocidad que observaría esta persona.
double trenes(double va, double vb, double vp);


//13. Al chavo nadie lo quiere. Kiko tiene 1 tarta de jamón, tomó la mitad y se la dio a sus amigos, la chilindrina tomo la mitad de la mitad, la popis la mitad
//de la mitad de la mitad....si el chavo tiene k amigos, ¿cuánto le toco al chavo?
double chavo(int k);



//INTERES COMPUESTO
double interes_compuesto (int n, double t);

#endif
