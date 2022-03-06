/**
 * @file main.cpp 
 * @brief Game tricky line, written in C++
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date December - 2014
 * @update: 6/03/2022
 */

#include "juego.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>


using namespace std;

int main()
{
    int m=0,s=0,i=0;
   //Jugador 1 = 1 X
   //Jugador 2 = 2 O <---- Aplicara para el pc
   //237 = O + O + O
   //264 = X + X + X
   //255 ='X'+'X'+'O';
   //246 ='X'+'O'+'O';
   //222 ='X'+'.'+'X';
   //204 ='O'+'.'+'O';
   //171 ='O'+'.'+'.'

    triky j;
    j.crear_tablero_a();
    j.crear_tablero_a1();
 do{
    system("cls");
    cout<<"INTEGRANTES: "<<endl;
    cout<<"-> Diana Maldonado"<<endl;
    cout<<"-> Angie Torres"<<endl;
    cout<<"-> Nicolas Gonzalez"<<endl;
    cout<<"-> Andres Pinzon"<<endl;
    cout<<"-> Wilson J. Almario"<<endl;
    cout<<endl;
    cout<<"\t\t     ***********************************  "<<endl;
    cout<<"\t\t     ***                             ***  "<<endl;
    cout<<"\t\t     ***     BIENVENIDO AL JUEGO     ***  "<<endl;
    cout<<"\t\t     ***           TRIQUI-UN         ***  "<<endl;
    cout<<"\t\t     ***                             ***  "<<endl;
    cout<<"\t\t     ***********************************  "<<endl<<endl;
    cout<<endl;
    cout<<"                              Elija Modo De Juego: "<<endl;
    cout<<endl;
    cout<<"                              1. Un Jugador"<<endl;
    cout<<"                              2. Dos Jugadores"<<endl;
    cout<<"                              3. Salir"<<endl;
    cin>>m;
    switch(m){

        case 1: cout<<"¿Desea Iniciar?"<<endl;
                cout<<"1.Si"<<endl;
                cout<<"2.No"<<endl;
                cin>>i;
                if(i==1){
                    j.jugar(1,2);
                };
                if(i==2){
                    j.jugar(1,3);
                };
                break;
        case 2:j.jugar(0,2);
                break;
        case 3:s=1;
                break;
        default:cout<<"Comando invalido, solo numeros del 1 al 3 segun su eleccion"<<endl;
        cout<<endl;
        cout<<"PRESIONE 0 POR FAVOR PARA VOLVER A INTENTAR"<<endl;
        cin>>m;

    }
 }while(s==0);





    return 0;
}
