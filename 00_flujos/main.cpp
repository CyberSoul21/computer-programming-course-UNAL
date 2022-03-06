/**
 * @file main.cpp 
 * @brief Files in C++, manage files in C++
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date August - 2014
 * @update: 6/03/2022
 */

#include <iostream>
#include <fstream>
#include<cstdlib>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


double leer(istream& is){
	double a =0;
	is >> a;
	return a;
};
bool leer_b(istream& is){

	bool valor = false;
	is >> valor;
	return valor;

};

ostream& escribir_b(ostream& os,bool v)
{
	string bol = "";

	if(v){
		bol="true";
		os << bol;
	}else{
		bol="false";
		os << bol;
	};
	
	return os;
};

ostream& escribir(ostream& os,double n)
{
	n=(n)*(-1);
	os << n;
	return os;	
}; 

int main(int argc, char** argv) {
	
	char p ='h';
	string y = "hola";
	p = y[3];
	cout<<p<<endl;
	double x;
	bool estado = true;
	ifstream archivo("input.txt"); 
	ifstream archivo_b("input_b.txt"); 
	cout<<"Digite un entero: ";
	x = leer(cin);
	escribir(cout,x);
	cout << endl;
	x = leer(archivo);
	ofstream salida("output.txt");
	escribir(salida,x);
	if(leer_b(archivo_b)){
		cout<<"El valor en el archivo es true";
	};
	for(int i=0; i<10; i++){
		escribir(salida,i);		
	};
	ofstream salida_b("output_b.txt");
	escribir_b(salida_b,estado);
	
	archivo.close();
	salida.close();
	
	return 0;
}
