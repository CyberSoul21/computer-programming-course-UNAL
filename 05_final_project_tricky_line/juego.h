/**
 * @file juego.h 
 * @brief 
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date December - 2014
 * @update: 6/03/2022
 */

#ifndef JUEGO_H
#define JUEGO_H

using namespace std;




class triky{
    private:

      int a[3][3];
      char a1[3][3];

    public:
        triky();

        void crear_tablero_a();
        void crear_tablero_a1();
        void mostrar_tablero_a();
        void mostrar_tablero_a1();
        void marcar_tablero(int m,int j1);
        void jugar(int q,int i);
        int sumar_columna(int j);
        int sumar_fila(int i);
        int sumar_diagonal(int d);
        int hay_ganador();
        void marcar_tablero_maquina(int ma);


};



#endif // TRIKI_H
