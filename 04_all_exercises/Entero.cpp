#include "Entero.h"

//************************************************Ejercicios Taller 2***********************************************************************************

//1. Dado el n�mero de patos en una granja, calcular el n�mero de patas de los patos
int patos(int n){

    return 2*n;
};

//2. Dado el n�mero de patos, caballos, moscas en una granja; calcular el n�mero de patas en esa granja.
int patas_granja(int p,int c, int m){

    return 2*p + 4*c + 6*m;
};


//3. Dado el n�mero de �tomos de hidrogeno y ox�geno, cuantas mol�culas de agua puedo formar.
int Agua(int h, int o){
    int valor;
    if(((h/2)<=o)||(h==o)){
       valor = h/2;

    }else{

        valor = o;
    };
    return valor;
};


//************************************************Ejercicios Taller 3***********************************************************************************

//10. En un parqueadero, hay k carros, m motos y s camionetas. Si en los carros caben 5 personas, en las motos 2 y en las camionetas 7 �Cuantas personas caben dado el
// n�mero de carros, motos y camionetas?
int parqueadero(int k, int m, int s){
        return 5*k + 2*m + 7*s;
};


//************************************************Sustentacion***********************************************************************************

// 2. atrapados por una tribu de canibales comedores de tortuga; se organizaron en fila
//yo soy: 3 8 18 38 78......n �Que n�mero sera el �ltimo?
int n_canibal (int n){
     if(n==1){
        return 3;
     };
     return 2*n_canibal(n-1)+2;
};

