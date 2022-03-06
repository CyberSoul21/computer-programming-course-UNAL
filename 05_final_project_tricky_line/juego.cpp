/**
 * @file juego.cpp 
 * @brief 
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date December - 2014
 * @update: 6/03/2022
 */

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "juego.h"
#include <time.h>

using namespace std;

triky::triky(){

};
void triky::crear_tablero_a(){

    int vacio=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        a[i][j]= vacio++;
        if(j<2){
        cout<<" "<<a[i][j]<<" *";
        }else{
        cout<<" "<<a[i][j]<<"  ";
        };
    };
    if(i<2){
      printf("\n-----------\n");
    };
  };
  cout<<endl;
  cout<<endl;
};
void triky::crear_tablero_a1(){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        a1[i][j]= '.';
        if(j<2){
        cout<<" "<<a1[i][j]<<" |";
        }else{
        cout<<" "<<a1[i][j]<<"  ";
        };
    };
    if(i<2){
      printf("\n-----------\n");
    };
  };
  cout<<endl;
  cout<<endl;
};
void triky::mostrar_tablero_a(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(j<2){
          cout<<" "<<a[i][j]<<" |";
          }else{
          cout<<" "<<a[i][j]<<"  ";
          };
        };
        if(i<2){
          printf("\n-----------\n");
        };
      };
      cout<<endl;
      cout<<endl;
};
void triky::mostrar_tablero_a1(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(j<2){
          cout<<" "<<a1[i][j]<<" |";
          }else{
          cout<<" "<<a1[i][j]<<"  ";
          };
        };
        if(i<2){
          printf("\n-----------\n");
        };
      };
      cout<<endl;
      cout<<endl;
};
void triky::marcar_tablero(int m,int j1){
    int c=0;
    int n = 0;
 do{
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
              if((a[i][j]==m)&&(j1==1)&&(a1[i][j]=='.')){
                    a1[i][j]='X';
                    c=1;

              };
              if((a[i][j]==m)&&(j1==2)&&(a1[i][j]=='.')){
                    a1[i][j]='O';
                    c=1;

              };
            };
    };
    if(c==0){
       cout<<"Digite "<<endl;
       cin>>n;
       m=n;
    };
 }while(c==0);
};
void triky::marcar_tablero_maquina(int ma){
    int sumf=0;
    int sumc=0;
    int sumd1=0;
    int sumd2=0;
    int poss=0;
    int c=0;
    int pu=0;
    int ind=0;
    srand(time(NULL));
    if(ma==1)
    {
        for(int i=0;i<3;i++){
               for(int j=0;j<3;j++){
                 if(a1[i][j]=='X'){
                       c=a[i][j];
                       j=3;
                       i=3;
                 };
               };
         };
         do{
           poss = rand() % 10 + 1;
         }while(poss==c||poss==0);
         for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                  if((a[i][j]==poss)&&(a1[i][j]=='.')){
                        a1[i][j]='O';
                  };
                };
         };
    }
    if(ma>1)
    {
        for(int i=0; i<3; i++){
            sumf+=sumar_fila(i);
            if(sumf==204){
                pu=i;
                i=3;
                for(int j=0;j<3;j++){
                    if(a1[pu][j]=='.'&&ind==0){
                        a1[pu][j]='O';
                        ind=1;
                        pu=0;
                    };
                };
            }else{sumf=0;};
        };
        for(int i=0; i<3; i++){
            sumf+=sumar_fila(i);
            if(sumf==222){
                pu=i;
                i=3;
                for(int j=0;j<3;j++){
                    if(a1[pu][j]=='.'&&ind==0){
                        a1[pu][j]='O';
                        ind=1;
                        pu=0;
                    };
                };
            }else{sumf=0;};
        };
        for(int i=0; i<3; i++){
            sumc+=sumar_columna(i);
            if(sumc==204){
                pu=i;
                i=3;
                for(int j=0;j<3;j++){
                    if(a1[j][pu]=='.'&&ind==0){
                        a1[j][pu]='O';
                        ind=1;
                    };
                };
            }else{sumc=0;};
        };

        for(int i=0; i<3; i++){
            sumc+=sumar_columna(i);
            if(sumc==222){
                pu=i;
                i=3;
                for(int j=0;j<3;j++){
                    if(a1[j][pu]=='.'&&ind==0){
                        a1[j][pu]='O';
                        ind=1;
                    };
                };
            }else{sumc=0;};
        };
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i==j){
                    sumd1+=a1[i][j];
                    if(sumd1==222){
                        for(int k=0; k<3; k++){
                            for(int l=0; l<3; l++){
                                if((l==k)&&(a1[k][l]=='.')&&(ind==0)){
                                    a1[k][l]='O';
                                    ind=1;
                                }
                            }
                        }
                    }
                }//else{sumd1=0;};
            };
        };
        int j=3-1;
        for(int i=0; i<3; i++){
            sumd2+=a1[i][j];
            j--;
            if(sumd2==222){
                int l=3-1;
                for(int k=0; k<3; k++){

                        if((a1[k][l]=='.')&&(ind==0)){
                            a1[k][l]='O';
                            ind=1;
                        }
                        l--;

                }
            }
        };




        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a1[i][j]=='.'&&ind==0){
                    a1[i][j]='O';
                    j=3;
                    i=3;
                };
            };
        };
    };
};
int triky::sumar_columna(int j){
    int suma =0;
    for(int i=0; i<3; i++){
        suma+=a1[i][j];
    };
    return suma;
};
int triky::sumar_fila(int i){
    int suma =0;
    for(int j=0; j<3; j++){
        suma+=a1[i][j];
    };
    return suma;
};
int triky::sumar_diagonal(int d){
    int suma=0, m=3,n=3;
    if(d==1)
    {
        for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(i==j){
                        suma+=a1[i][j];
                    };
                };
        };
    };
    if(d==2){
        int j=m-1;
        for(int i=0; i<n; i++){
            suma+=a1[i][j];
            j--;
        };

    };
    return suma;
};
int triky::hay_ganador(){
    int sumf=0;
    int sumc=0;
    int sumd1=0;
    int sumd2=0;
    int c=0;
    for(int i=0; i<3; i++){
        sumf+=sumar_fila(i);
        if((sumf==237)||(sumf==264)){
                i=3;
        }else{sumf=0;};
    };
    for(int i=0; i<3; i++){
        sumc+=sumar_columna(i);
        if((sumc==237)||(sumc==264)){
                i=3;
        }else{sumc=0;};
    };
    sumd1 = sumar_diagonal(1);
    sumd2 = sumar_diagonal(2);
    if((sumf==237)||(sumc==237)||(sumd1==237)||(sumd2==237)){
            return 2;
    }else if((sumf==264)||(sumc==264)||(sumd1==264)||(sumd2==264)){
            return 1;
    }else {
            for(int i=0; i<3;i++){
                for(int j=0;j<3;j++){
                    if(a1[i][j]=='X'||a1[i][j]=='O'){
                        c++;
                    };
                }
            };
            if(c==9){
                return 3;
            }else{
                return 0;
                }

    };
};
void triky::jugar(int q,int i){
    int n=0,g=0,ma=1;
    do{
        if(i%2==0)
        {
            system("cls");
            mostrar_tablero_a();
            mostrar_tablero_a1();
            cout<<"Jugador 1 X: ";
            cin>>n;
            marcar_tablero(n,1);
            g=hay_ganador();
        };
            system("cls");
            mostrar_tablero_a();
            mostrar_tablero_a1();
            g=hay_ganador();
        if((i%2!=0)&&(q==0))
        {


            cout<<"Jugador 2 O: ";
            cin>>n;
            marcar_tablero(n,2);

            system("cls");
            mostrar_tablero_a();
            mostrar_tablero_a1();
            g=hay_ganador();
        };
        if((i%2!=0)&&(q==1))
        {
            marcar_tablero_maquina(ma);
            ma++;
            system("cls");
            mostrar_tablero_a();
            mostrar_tablero_a1();
            g=hay_ganador();
        };
        i++;
    }while(g==0);
    if(g==1){
                cout<<"¡GANA JUGADOR 1!"<<endl;
                cout<<endl;
                cout<<"Digite 0 para regresar al menu"<<endl;
                cin>>g;
        }else if(g==2){
                cout<<"¡GANA JUGADOR 2!"<<endl;
                cout<<endl;
                cout<<"Digite 0 para regresar al menu"<<endl;
                cin>>g;
        }else if(g==3){
                cout<<"EMPATE"<<endl;
                cout<<endl;
                cout<<"Digite 0 para regresar al menu"<<endl;
                cin>>g;
        };
};



