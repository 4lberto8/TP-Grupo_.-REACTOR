#pragma once
#include "color-control.h"

class enemyModel {
public:
    enemyModel() {
    }
    ~enemyModel() {};


    void dibujar_enemigo1_M1(int x, int y)//M1 -> Modelo 1
    {
        p(x + 1, y); b_c(1), f_c(7); cout << char(220) << char(219) << char(219);
        p(x + 10, y); cout << char(219) << char(219) << char(220);
        p(x, y + 1); cout << char(220) << char(219) << char(219) << char(219);
        p(x + 6, y + 1); cout << char(219) << char(219);
        p(x + 10, y + 1); cout << char(219) << char(219) << char(219) << char(220);
        //TERMINA ESTE DIBUJO PARA EL 27 DE ABRIL HASTA EL MEDIO DIA
        p(x, y + 2); cout << char(219) << char(219); b_c(15), f_c(7); cout << char(220); f_c(8); cout << char(223); b_c(15), f_c(7); cout << char(223);
        p(x, y + 3);
        p(x, y + 4);
        p(x + 1, y + 5);
        p(x + 5, y + 5);
        p(x + 10, y + 5);
    }
    void borrar_enemigo1_M1(int x, int y)
    {
        p(x + 1, y); cout << "   ";
        p(x + 10, y); cout << "   ";
        p(x, y + 1); cout << "    ";
        p(x + 6, y + 1); cout << "  ";
        p(x + 10, y + 1); cout << "    ";
        p(x, y + 2); cout << "              ";
        p(x, y + 3); cout << "              ";
        p(x, y + 4); cout << "              ";
        p(x + 1, y + 5); cout << "   ";
        p(x + 5, y + 5); cout << "    ";
        p(x + 10, y + 5); cout << "   ";
    }
    void dibujar_enemigo2_M1(int x, int y)//M1 -> Modelo 1
    {
        p(x, y); b_c(1), f_c(2); cout << char(254) << char(219) << char(254);
    }
    void borrar_enemigo2_M1(int x, int y)
    {
        p(x, y); cout << "   ";
    }
    void mover_enemigo2_M1(int& x, int& y, int& dy)
    {
        borrar_enemigo2_M1(x, y);
        if (x < 17)dy *= -1;
        if (x > 42)dy *= -1;
        x = x + dy;
        dibujar_enemigo2_M1(x, y);
    }

    void dibujar_enemigo3_M1(int x, int y)//M1 -> Modelo 1
    {
        p(x, y); b_c(1), f_c(6); cout << char(223) << " " << char(223);
        p(x + 1, y + 1); cout << char(219);
        p(x, y + 2); cout << char(220) << " " << char(220);
    }
    void borrar_enemigo3_M1(int x, int y)
    {
        p(x, y); cout << "   ";
        p(x + 1, y + 1); cout << " ";
        p(x, y + 2); cout << "   ";
    }
    void mover_enemigo3_M1(int& x, int& y, int& dy)
    {
        borrar_enemigo2_M1(x, y);
        if (y < 11)dy *= -1;
        if (x > 60)dy *= -1;
        x = y + dy;
        dibujar_enemigo2_M1(x, y);
    }

    void dibujar_enemigo1_T(int x, int y)//M1 -> Modelo 1
    {
        p(x + 1, y); b_c(1), f_c(7); cout << char(220); b_c(7); cout << "          "; b_c(1), f_c(7); cout << char(220);
        p(x, y + 1); b_c(1), f_c(7); cout << char(220); b_c(7); cout << "            "; b_c(1), f_c(7); cout << char(220);
        p(x, y + 2); b_c(7); cout << "              ";
        p(x, y + 3); b_c(7); cout << "              ";
        p(x, y + 4); b_c(1); cout << char(223); b_c(7); cout << "            "; b_c(1), f_c(7); cout << char(223);
        p(x + 1, y + 5); b_c(1), f_c(7); cout << char(223); b_c(7); cout << "          "; b_c(1), f_c(7); cout << char(223);
    }
    void borrar_enemigo1_T(int x, int y)
    {
        p(x + 1, y); cout << "            ";
        p(x, y + 1); cout << "              ";
        p(x, y + 2); cout << "              ";
        p(x, y + 3); cout << "              ";
        p(x, y + 4); cout << "              ";
        p(x + 1, y + 5); cout << "            ";
    }
};