#pragma once
#include "pantalla_titulo.h"
//De acuerdo al enunciado, aqui se pondria un logo o nonmbre del equipo (de no tener uno solo decir "GRUPO 1")
//Caracteres identificados [#1GOPRU] - adicionales []

class inicio_proy : protected titulo {
public:
	inicio_proy() {};
	~inicio_proy() {};

	void TEST_KNIGHTSX_15(int x, int y) {
		KNIGHTSX_NUM_15(x, y);
		KNIGHTSX_1_15(x + 18, y);
		KNIGHTSX_G_15(x + 24, y);
		KNIGHTSX_O_15(x + 36, y);
		KNIGHTSX_P_15(x, y + 10);
		KNIGHTSX_R_15(x + 12, y + 10);
		KNIGHTSX_U_15(x + 26, y + 10);
	}
	void PRESENTACION_539_15_v1(int x, int y) {
		//No tiene numeros
		KNIGHTSX_G_15(x, y);
		KNIGHTSX_R_15(x + 13, y);
		KNIGHTSX_U_15(x + 25, y);
		KNIGHTSX_P_15(x + 37, y);
		KNIGHTSX_O_15(x + 49, y);
		KNIGHTSX_NUM_15(x + 20, y + 11);
		KNIGHTSX_1_15(x + 34, y + 11);
	}
	void PRESENTACION_539_15_v2(int x, int y) {
		//Tiene numeros
		KNIGHTSX_G_15(x, y);
		KNIGHTSX_R_15(x + 12, y);
		KNIGHTSX_U_15(x + 23, y);
		KNIGHTSX_P_15(x + 35, y);
		KNIGHTSX_O_15(x + 46, y);
		KNIGHTSX_NUM_15(x + 18, y + 11);
		KNIGHTSX_1_15(x + 32, y + 11);
	}
	void PRESENTACION() {
		//PRESENTACION_539_15_v1(10, 10);
		PRESENTACION_539_15_v2(11, 10);
		system("pause>0");
		system("cls");
		MENU();
	}
};