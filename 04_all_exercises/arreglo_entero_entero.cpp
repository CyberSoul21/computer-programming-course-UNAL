#include "arreglo_entero_entero.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//************************************************Ejercicios Taller 4***********************************************************************************
//1. Implementar la criba de Eratostenes para calcular los números primos en el rango 1 a n, donde n es un número natural dado por el usuario.
Criba::Criba(int x){
    n = x;
    c = 2;
}

void Criba::Crear(){
    v = new int[n];
};

void Criba::llenar(){

    for(int i=0; i<n; i++){
        v[i] = c;
        c++;
        cout<<" "<<v[i];
   };
};
void Criba::operar(){

    for(int i =0; i<n; i++){
        if((v[i]*v[i]<v[n-1])&&(v[i]!=0))
        {
            for(int k=i+2; k<n;k++){
                if((v[k]%v[i])==0){
                v[k]=0;
                };
            };
       }
    };
};

void Criba::imprimir(){
cout<<"\n";
   cout<<"\n";
   cout<<"Los numeros primos son: "<<endl;
   cout<<"\n";
    for(int k=0; k<n;k++){
        if(v[k]!=0){
        cout<<" "<<v[k];
        };
    };
};


//2.Desarrollar un algoritmo que calcule la suma de los elementos de un arreglo de números enteros (reales).
void sumaelementos(int n){
    int* suma;
    int s = 0;
    srand(time(0));
    //rand()%n;
    suma = new int[n];
    for(int i = 0; i<n; i++){
            suma[i]=rand()%n;
            cout <<" "<<suma[i];
    };
    for(int i=0; i<n;i++){
        s += suma[i];
    };
    cout<<"\n";
    cout<<"La suma de los elementos es: "<<s<<endl;;
};

//3.Desarrollar un algoritmo que calcule el promedio de un arreglo de enteros (reales).
void promedio(int n){
    double prom=0;
    int* p;
    p = new int[n];
    srand(time(0));
    for(int i =0; i<n; i++){
        p[i]=rand()%n;
        cout <<" "<<p[i];
    };
    for(int i =0; i<n; i++){
        prom += p[i];
    };
    prom = prom/n;
    cout<<"\n"<<"El promedio es: "<<prom<<endl;
};

//4.Desarrollar un algoritmo que calcule el producto de dos arreglos de números enteros (reales)
//de igual tamaño. Sean v=(v1,v2,..., vn) y w=(w1,w2,..., wn) dos arreglos, el producto de v y w (notado v.w) es el número: v1 * w1 + v2*w2 +...+ vn * wn
void producto1(int n){
    int* v;
    int* w;
    int* r;
    v = new int[n];
    w = new int[n];
    r = new int[n];
    int suma =0;
    srand(time(0));
    cout<<"Los vectores son: "<<endl;
    for(int i=0; i<n; i++){
      v[i]=rand()%n;
      cout<<" "<<v[i];
    };
    cout<<"\n"<<endl;cout<<"\n"<<endl;
    for(int i=0; i<n; i++){
      w[i]=rand()%n;
      cout<<" "<<w[i];
    };
    cout<<"\n"<<endl;
    cout<<"El producto entre estos es: "<<endl;
    for(int i=0; i<n; i++){
       r[i]=v[i]*w[i];
       suma +=r[i];
    };
    cout<<"Resultado: "<<suma;
};
//5.Desarrollar un algoritmo que calcule el mínimo de un arreglo de números enteros (reales)
void minimo(int n){
    int* mini;
    int m=0;
    mini =new int[n];
    srand(time(0));
    cout<<"El vector es: "<<endl;
    for(int i=0;i<n;i++){
        mini[i]=rand()%n;
        cout <<" "<<mini[i];
    };
    cout<<"\n"<<endl;
    m=mini[0];
    for(int i=0;i<n;i++){
        if(m>mini[i]){
           m=mini[i];
        };
    };
    cout<<"El minimo del arreglo es: "<<m<<endl;
};
//6.Desarrollar un algoritmo que calcule el máximo de un arreglo de números enteros (reales).
void maximo(int n){
    int* maxi;
    int m=0;
    maxi =new int[n];
    srand(time(0));
    cout<<"El vector es: "<<endl;
    for(int i=0;i<n;i++){
        maxi[i]=rand()%n;
        cout <<" "<<maxi[i];
    };
    cout<<"\n"<<endl;
    m=maxi[0];
    for(int i=0;i<n;i++){
        if(m<maxi[i]){
           m=maxi[i];
        };
    };
    cout<<"El maximo del arreglo es: "<<m<<endl;

};
//7.Desarrollar un algoritmo que calcule el producto directo de dos arreglos de enteros (reales) de igual tamaño.
//Sean v=(v1,v2,..., vn) y w=(w1,w2,..., wn) dos arreglos, el producto directo de v y w (notado v*w) es el vector: [v1 * w1 , v2*w2 ,..., vn * wn]
void producto2(int n){
    int* v;
    int* w;
    int* r;
    v = new int[n];
    w = new int[n];
    r = new int[n];

    srand(time(0));
    cout<<"Los vectores son: "<<endl;
    for(int i=0; i<n; i++){
      v[i]=rand()%n;
      cout<<" "<<v[i];
    };
    cout<<"\n"<<endl;cout<<"\n"<<endl;
    for(int i=0; i<n; i++){
      w[i]=rand()%n;
      cout<<" "<<w[i];
    };
    cout<<"\n"<<endl;
    cout<<"El producto entre estos es: "<<endl;
    for(int i=0; i<n; i++){
       r[i]=v[i]*w[i];
       cout<<" "<<r[i];
    };

};

//8.Desarrollar un algoritmo que determine la mediana de un arreglo de enteros (reales).  La mediana es el número que queda en la mitad del arreglo despues de ser ordenado.
void burbuja(int * v, int n){
 /* ordenamiento de burbuja */
    int tem=0;
    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; j < n; j++) {
            if ( v[i] > v[j] ) { //realiza la comparación
                tem = v[i]; //si es cierta intercambia los datos
                v[i] = v[j];
                v[j] = tem;
            };
         };
};
void imprime(int * v, int n){
     cout <<"El vector es: "<<endl;
     for(int i=0;i<n;i++){

        cout <<" "<<v[i];
    };
};

void median (int* v,int n){
    int pos=0;
    double med=0.0;
    if((n%2)==0){
       pos=n/2;
       med=(v[pos]+v[pos+1])/2.0;
    }
    else{
        pos=(n+1)/2;
        med=v[pos-1];
    };
    cout <<"La mediana es: "<<med;
};
int llenar(int* &v){

    int tam=0;
    int d=0;
    cout<<"Digite tamaño del vector: "<<endl;
    cin >>tam;
    v = new int[tam];
    for(int i =0; i<tam; i++){
        cout<<"Digite dato: "<<endl;
        cin >>d;
        v[i]=d;
    };
    return tam;
};
//9.Hacer un algoritmo que deje al final de un arreglo de números todos los ceros que aparezcan en dicho arreglo.
void final_ceros(int* &v,int n){
    int c = 0;
    int p = 1;
    for(int i = 0; i<n; i++){
            if((v[i]==0)&&(i!=(n-1))){
                c=i;
                do{
                 c++;
                 if(v[c]!=0){
                        v[i]=v[c];
                        v[c]=0;
                        c=i;
                        p=2;
                 }
                 if(c==(n-1))
                 {
                     p=2;
                 }
                }while(p==1);
                p=1;
            };
    };
};

//10.Suponga que un arreglo de enteros esta lleno de unos y ceros y que el arreglo representa un número binario al revés.
//Hacer un algoritmo que calcule los números en decimal que representa dicho arreglo de unos y ceros.
void conve_decimal(int* v,int n){
    int ax[n];
    int c   = n-1;
    int num = 0;
    for(int i=0; i<n; i++){
        ax[c]=v[i];
        if(v[i]==1){
            num +=pow(2,i);
        };
        c--;
    };
    for(int i=0; i<n; i++){
        cout<<" "<<ax[i];
    };
    cout<<"\n";
    cout<<"El numero en decimal es: "<<num<<endl;
};
//11.Hacer un algoritmo que dado un número entero no negativo, cree un arreglo de unos y ceros que representa el número en binario al revés.
void conv_binario(){
    int x = 0;
	int n = 0;
	int c = 0;
	int* v;cout<<"\n"<<endl;
	cout<<"Digite numero: "<<endl;
	cin>>x;
	while(x>=(pow(2,n))){//Calculo del exponente, buscamos el numero que este mas cercano a 2^n
		n++;
	};
	cout<<n<<endl;
	v = new int[n];//Creamos el arreglo que contendra los unos y ceros
	c=n-1;//como n quedo una posicion n+1 la restamos para llenar el vector con 2^c
	for(int i=0; i<n; i++){//Se llena el vector con los valores 2^0=1,2^1=2,2^2=4...etc según rl tamaño
		v[i]=pow(2,c);
		c--;
	};
	for(int i=0; i<n; i++){
		cout<<" "<<v[i];//Imprimimos lo que se encuentra actualmente el vector
		if(x>=v[i]){//Se llena de 1 o 0 según el caso
			x = x-v[i];
			v[i]=1;
		}else{
			v[i]=0;
		};
	};
	cout<<"\n";
	for(int i=0; i<n; i++){//Imrpime el vector con 1 y 0
		cout<<" "<<v[i];
	};
	int j = n-1;
	int *p;
	p = new int[n];
	for(int i=0; i<n; i++){//Invierte el vector
	    p[j]=v[i];
	    j--;
	};
	cout<<"\n";
	for(int i=0; i<n; i++){//imprime el vector invertido
	    cout<<" "<<p[i];
	};
};

