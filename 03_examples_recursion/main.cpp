#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mayor(int a, int b)
{
	if(a==b)
	{
		return b;
	};
	if(a>b){
		 return a;	
	}else{
		return mayor(b,a);
	};	
};

int suma(int n){
	int s=0;
	if(n==0)
	{
		return s =0;
	}
	return s = suma(n-1)+n;
};

int suma_cuadrados(int n){
	int s=0;
	if(n==1)
	{
		return s =1;
	}
	return s =suma_cuadrados(n-1)+n*n;
};

int producto_cuadrados(int n){
	int s=0;
	if(n==1)
	{
		return s =1;
	}
	return s =producto_cuadrados(n-1)*n*n;
};

double min_maquina(){
double Xo = 1.0;
double Xi = Xo / 2;
while(Xi > 0.0){
Xo = Xi;
Xi = Xo / 2.0;
};
return Xo;
};





int main(int argc, char** argv) {
	
	cout<<producto_cuadrados(4);
	cout<<endl;
	cout<<min_maquina();
	return 0;
}
