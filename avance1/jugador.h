#pragma once
#include "color-control.h"

class playerModel {
public:
    playerModel() {};
    ~playerModel() {};

    void dibuja_player_M1(int x, int y)//M1 -> Modelo 1
    {
        p(x + 1, y); b_c(1), f_c(11); cout << char(220); b_c(14), f_c(11); cout << char(223) << char(223); b_c(1), f_c(11); cout << char(220);
        p(x, y + 1); cout << char(220); f_c(16); cout << char(223); f_c(6); cout << char(223) << char(223); f_c(16); cout << char(223); f_c(11); cout << char(220);
        p(x, y + 2); b_c(16), f_c(1); cout << char(220); b_c(16), f_c(11); cout << char(223); b_c(6), f_c(14); cout << char(223) << char(223); b_c(16), f_c(11); cout << char(223); b_c(1), f_c(16); cout << char(223);
    }
    void borra_player_M1(int x, int y)
    {
        p(x + 1, y); cout << "    ";
        p(x, y + 1); cout << "      ";
        p(x, y + 2); cout << "      ";
    }
    void dibuja_player_SUR_M1(int x, int y)//M1 -> Modelo 1
    {
        p(x + 1, y); b_c(1), f_c(16); cout << char(220); b_c(14), f_c(11); cout << char(223) << char(223); b_c(1), f_c(11); cout << char(220);
        p(x, y + 1); cout << char(220); f_c(16); cout << char(223); f_c(6); cout << char(223) << char(223); f_c(16); cout << char(223); f_c(11); cout << char(220);
        p(x, y + 2); b_c(16), f_c(1); cout << char(220); b_c(16), f_c(11); cout << char(223); b_c(6), f_c(14); cout << char(223) << char(223); b_c(16), f_c(11); cout << char(223); b_c(1), f_c(16); cout << char(223);
    }
    void borra_player_SUR_M1(int x, int y)
    {
        p(x + 1, y); cout << "    ";
        p(x, y + 1); cout << "      ";
        p(x, y + 2); cout << "      ";
    }
};