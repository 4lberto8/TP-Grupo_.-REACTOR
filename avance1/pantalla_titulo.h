#pragma once
#include "nivel.h"
#include "font_control.h"
//PANTALLA TITULO
//Nombre del juego: "Cazador de virus" o "Virus letal"
//Caracteres identificados [aCedorz][irsuV] - adicionales [L]

//Debe incorporar las siguientes opciones
//		1. Jugar (Nueva partida, Comenzar)
//		2. Instrucciones (Como jugar, Controles)
//		3. Creditos
//		4. Salir

//Letras necesarias identificadas [ACDEGIJLNORSTU] - adicionales [MPVZ]

class titulo : public fontC, nivel {
public:
	void TITULO_JUGAR_116(int x, int y) {
		BROTHOOD_j_15(x, y);
		BROTHOOD_u_15(x + 4, y);
		BROTHOOD_g_15(x + 10, y);
		BROTHOOD_a_15(x + 16, y);
		BROTHOOD_r_15(x + 22, y);
	}
	void TITULO_INSTRUCCIONES_116(int x, int y) {
		BROTHOOD_i_15(x, y);
		BROTHOOD_n_15(x + 3, y);
		BROTHOOD_s_15(x + 9, y);
		BROTHOOD_t_15(x + 15, y);
		BROTHOOD_r_15(x + 20, y);
		BROTHOOD_u_15(x + 26, y);
		BROTHOOD_c_15(x + 32, y);
		BROTHOOD_c_15(x + 38, y);
		BROTHOOD_i_15(x + 44, y);
		BROTHOOD_o_15(x + 47, y);
		BROTHOOD_n_15(x + 53, y);
		BROTHOOD_e_15(x + 59, y);
		BROTHOOD_s_15(x + 65, y);
	}
	void TITULO_CREDITOS_116(int x, int y) {
		BROTHOOD_c_15(x, y);
		BROTHOOD_r_15(x + 6, y);
		BROTHOOD_e_15(x + 12, y);
		BROTHOOD_d_15(x + 18, y);
		BROTHOOD_i_15(x + 24, y);
		BROTHOOD_t_15(x + 27, y);
		BROTHOOD_o_15(x + 32, y);
		BROTHOOD_s_15(x + 38, y);
	}
	void TITULO_SALIR_116(int x, int y) {
		BROTHOOD_s_15(x, y);
		BROTHOOD_a_15(x + 6, y);
		BROTHOOD_l_15(x + 12, y);
		BROTHOOD_i_15(x + 16, y);
		BROTHOOD_r_15(x + 19, y);
	}
	void TITULO_SALIR_116_2(int x, int y) {
		BROTHOOD_s_4(x, y);
		BROTHOOD_a_4(x + 6, y);
		BROTHOOD_l_4(x + 12, y);
		BROTHOOD_i_4(x + 16, y);
		BROTHOOD_r_4(x + 19, y);
	}

	void TITULO_JUGAR_252(int x, int y) {
		DREADLK_J_15(x, y);
		DREADLK_U_15(x + 4, y);
		DREADLK_G_15(x + 8, y);
		DREADLK_A_15(x + 12, y);
		DREADLK_R_15(x + 16, y);
	}
	void TITULO_INSTRUCCIONES_252(int x, int y) {
		DREADLK_I_15(x, y);
		DREADLK_N_15(x + 4, y);
		DREADLK_S_15(x + 8, y);
		DREADLK_T_15(x + 12, y);
		DREADLK_R_15(x + 18, y);
		DREADLK_U_15(x + 22, y);
		DREADLK_C_15(x + 26, y);
		DREADLK_C_15(x + 30, y);
		DREADLK_I_15(x + 34, y);
		DREADLK_O_15(x + 38, y);
		DREADLK_N_15(x + 42, y);
		DREADLK_E_15(x + 46, y);
		DREADLK_S_15(x + 50, y);
	}
	void TITULO_CREDITOS_252(int x, int y) {
		DREADLK_C_15(x, y);
		DREADLK_R_15(x + 4, y);
		DREADLK_E_15(x + 8, y);
		DREADLK_D_15(x + 12, y);
		DREADLK_I_15(x + 16, y);
		DREADLK_T_15(x + 20, y);
		DREADLK_O_15(x + 26, y);
		DREADLK_S_15(x + 30, y);
	}
	void TITULO_SALIR_252(int x, int y) {
		DREADLK_S_15(x, y);
		DREADLK_A_15(x + 4, y);
		DREADLK_L_15(x + 8, y);
		DREADLK_I_15(x + 12, y);
		DREADLK_R_15(x + 16, y);
	}

	void TITULO_Cazador_644_11(int x, int y) {
		ONKELZX_C_11(x, y);
		ONKELZX_a_11(x + 8, y);
		ONKELZX_z_11(x + 19, y);
		ONKELZX_a_11(x + 27, y);
		ONKELZX_d_11(x + 38, y);
		ONKELZX_o_11(x + 49, y);
		ONKELZX_r_11(x + 60, y);
	}
	void TITULO_de_644_11(int x, int y) {
		ONKELZX_d_11(x, y + 8);
		ONKELZX_e_11(x + 11, y + 8);
	}
	void TITULO_Virus_644_11(int x, int y) {
		ONKELZX_V_2(x, y + 16);
		ONKELZX_i_2(x + 11, y + 16);
		ONKELZX_r_2(x + 16, y + 16);
		ONKELZX_u_2(x + 27, y + 16);
		ONKELZX_s_2(x + 38, y + 16);
	}
	void TITULO_NOMBREJUEGO_644_v1(int x, int y) {
		TITULO_Cazador_644_11(x + 1, y);
		TITULO_de_644_11(x, y);
		TITULO_Virus_644_11(x + 25, y - 8);
	}

	void TITULO_MENU_116_v1(int x, int y) {
		TITULO_JUGAR_116(51, y);
		TITULO_INSTRUCCIONES_116(8, y + 4);
		TITULO_CREDITOS_116(35, y + 8);
		TITULO_SALIR_116(54, y + 12);
	}
	void TITULO_MENU_116_v2(int x, int y) {
		TITULO_JUGAR_116(51, y);
		TITULO_INSTRUCCIONES_116(8, y + 4);
		TITULO_CREDITOS_116(35, y + 8);
		TITULO_SALIR_116_2(54, y + 12);
	}

	void TITULO_MENU_252_v1(int x, int y) {
		DREADLK_1_14(51, y); b_c(1), f_c(8); cout << " " << char(223);
		TITULO_JUGAR_252(59, y);
		DREADLK_2_14(17, y + 3); b_c(1), f_c(8); cout << " " << char(223);
		TITULO_INSTRUCCIONES_252(25, y + 3);
		DREADLK_3_14(37, y + 6); b_c(1), f_c(8); cout << " " << char(223);
		TITULO_CREDITOS_252(45, y + 6);
		DREADLK_4_14(51, y + 9); b_c(1), f_c(8); cout << " " << char(223);
		TITULO_SALIR_252(59, y + 9);
	}

	void TILESET_BLUESIDE1_M1(int x, int y) {

	}

	void ICON_RIGHTKEY(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << " " << char(223) << char(223) << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
		p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(220) << char(223) << char(219) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
		p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
	}
	void ICON_LEFTKEY(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << char(223) << char(223) << " " << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
		p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(219) << char(223) << char(220) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
		p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
	}
	void ICON_UPKEY(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << char(220) << " " << char(220) << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
		p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
		p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
	}
	void ICON_DOWNKEY(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220); b_c(7); cout << char(223) << char(223); b_c(1), f_c(7); cout << char(219) << char(223) << char(219) << char(219); b_c(7), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(176) << char(219); b_c(1); cout << char(223) << char(219) << " " << char(219) << char(223) << char(219); b_c(7), f_c(8); cout << char(178);
		p(x, y + 2); b_c(7), f_c(15); cout << char(178); b_c(1), f_c(7); cout << char(219) << char(219) << char(220) << " " << char(220) << char(219) << char(219); b_c(8), f_c(7); cout << char(176);
		p(x, y + 3); b_c(1), f_c(7); cout << char(223); b_c(8); cout << char(223) << char(219) << char(219) << char(219) << char(219) << char(223) << char(223); b_c(1), f_c(8); cout << char(223);
	}

	void TEXT_CONTOLS_v1(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << "Las teclas asignadas";
		p(x, y + 1); cout << "son las direccionales.";
	}
	void TEXT_ENEMIGOS_v1(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << "Al acercarte a uno los enemigos";
		p(x, y + 1); cout << "va a empezar una pregunta.";
		p(x, y + 2); cout << "Si la respondes correctamente,";
		p(x, y + 3); cout << "continuaras al siguiente nivel.";
		p(x, y + 4); cout << "Si la respondes incorrectamente,";
		p(x, y + 5); cout << "regresaras al principio del nivel.";
	}
	void TEXT_MISION_v1(int x, int y) {
		p(x + 7, y); b_c(1), f_c(15); cout << "Para terminar con la partida";
		p(x + 11, y + 1); cout << "deberas responder mas 10";
		p(x, y + 2); cout << "preguntas para terminar la partida.";
	}

	void TEXT_INTEGRANTE1_L(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << "Almeida Mora, Rodrigo Fernando";
	}
	void TEXT_INTEGRANTE2_L(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << "Peña Guerra, Alberto Antonio";
	}
	void TEXT_INTEGRANTE3_L(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << "Rocca León, Anhelo Rodrigo";
	}

	void dibuja_player_v1(int x, int y)//M1 -> Modelo 1
	{
		p(x + 1, y); b_c(1), f_c(11); cout << char(220); b_c(14), f_c(11); cout << char(223) << char(223); b_c(1), f_c(11); cout << char(220);
		p(x, y + 1); cout << char(220); f_c(16); cout << char(223); f_c(6); cout << char(223) << char(223); f_c(16); cout << char(223); f_c(11); cout << char(220);
		p(x, y + 2); b_c(16), f_c(1); cout << char(220); b_c(16), f_c(11); cout << char(223); b_c(6), f_c(14); cout << char(223) << char(223); b_c(16), f_c(11); cout << char(223); b_c(1), f_c(16); cout << char(223);
	}

	void ICON_DIRECTIONALKEYS(int x, int y) {
		ICON_RIGHTKEY(x, y + 5);
		ICON_LEFTKEY(x + 20, y + 5);
		ICON_UPKEY(x + 10, y);
		ICON_DOWNKEY(x + 10, y + 5);
	}
	void TEXT_INSTRUCCIONES_v1(int x, int y) {
		TEXT_CONTOLS_v1(x + 53, y + 12);
		TEXT_ENEMIGOS_v1(x + 5, y + 21);
		TEXT_MISION_v1(x + 40, y + 33);
	}
	void TEXT_CREDITOS_v1(int x, int y) {
		TEXT_INTEGRANTE1_L(x, y);
		TEXT_INTEGRANTE2_L(x, y + 2);
		TEXT_INTEGRANTE3_L(x, y + 4);
	}
	void TEXT_CREDITOS_v2(int x, int y) {
		TEXT_INTEGRANTE1_L(x - 1, y);
		TEXT_INTEGRANTE2_L(x, y + 2);
		TEXT_INTEGRANTE3_L(x + 1, y + 4);
	}
	void TEXT_CREDITOS_v3(int x, int y) {
		TEXT_INTEGRANTE1_L(x, y);
		TEXT_INTEGRANTE2_L(x + 2, y + 2);
		TEXT_INTEGRANTE3_L(x + 4, y + 4);
	}

	void TEST_CARBONX_M1(int x, int y) {
		CARBONX_A_11(x, y);
		CARBONX_C_11(x + 17, y);
		CARBONX_D_11(x + 33, y);
		CARBONX_E_11(x + 49, y);
		CARBONX_I_13(x, y + 9);
		CARBONX_O_11(x + 66, y);
	}
	void TEST_ONKELZX_M1(int x, int y) {
		ONKELZX_a_11(x, y);
		ONKELZX_C_11(x + 12, y);
		ONKELZX_e_11(x + 24, y);
		ONKELZX_d_11(x + 36, y);
		ONKELZX_o_11(x, y + 7);
		ONKELZX_r_11(x + 12, y + 7);
		ONKELZX_z_11(x + 24, y + 7);
	}
	void TEST_BROTHOOD_15(int x, int y) {
		BROTHOOD_a_15(x, y);
		BROTHOOD_c_15(x + 6, y);
		BROTHOOD_d_15(x + 12, y);
		BROTHOOD_e_15(x + 18, y);
		BROTHOOD_g_15(x + 24, y);
		BROTHOOD_i_15(x + 30, y);
		BROTHOOD_j_15(x + 36, y);
		BROTHOOD_l_15(x + 42, y);
		BROTHOOD_n_15(x, y + 6);
		BROTHOOD_o_15(x + 6, y + 6);
		BROTHOOD_r_15(x + 12, y + 6);
		BROTHOOD_s_15(x + 19, y + 6);
		BROTHOOD_t_15(x + 24, y + 6);
		BROTHOOD_u_15(x + 30, y + 6);
	}
	void TEST_DREADLK_15(int x, int y) {
		DREADLK_A_15(x, y);
		DREADLK_C_15(x + 6, y);
		DREADLK_D_15(x + 12, y);
		DREADLK_E_15(x + 18, y);
		DREADLK_G_15(x + 24, y);
		DREADLK_I_15(x + 30, y);
		DREADLK_J_15(x + 36, y);
		DREADLK_L_15(x + 42, y);
		DREADLK_N_15(x, y + 6);
		DREADLK_O_15(x + 6, y + 6);
		DREADLK_R_15(x + 12, y + 6);
		DREADLK_S_15(x + 19, y + 6);
		DREADLK_T_15(x + 24, y + 6);
		DREADLK_U_15(x + 30, y + 6);
		DREADLK_1_14(x, y + 12);
		DREADLK_2_14(x + 6, y + 12);
		DREADLK_3_14(x + 12, y + 12);
		DREADLK_4_14(x + 18, y + 12);
	}

	titulo() {};
	~titulo() {};

	void INSTRUCCIONES() {
		TITULO_INSTRUCCIONES_116(5, 2);
		dibuja_player_v1(10, 9);
		ICON_DIRECTIONALKEYS(12, 9);
		TEXT_INSTRUCCIONES_v1(0, 0);
		p(16, 38); b_c(1), f_c(15); cout << "Presione cualquier tecla para continuar al juego";
		system("pause>0");
		system("cls");
		nivel1_1();
	}
	void INSTRUCCIONES_ALT() {
		TITULO_INSTRUCCIONES_116(5, 2);
		dibuja_player_v1(10, 9);
		ICON_DIRECTIONALKEYS(12, 9);
		TEXT_INSTRUCCIONES_v1(0, 0);
		p(16, 38); b_c(1), f_c(15); cout << "Presione cualquier tecla para regresar al menu";
		system("pause>0");
		system("cls");
		MENU();
	}

	void CREDITOS() {
		TITULO_CREDITOS_116(18, 2);
		//TEXT_CREDITOS_v1(2, 10);
		//TEXT_CREDITOS_v2(26, 10);
		TEXT_CREDITOS_v3(45, 10);
		p(16, 38); b_c(1), f_c(15); cout << "Presione cualquier tecla para regresar al menu";
		system("pause>0");
		system("cls");
		MENU();
	}

	void MENU() {
		TITULO_NOMBREJUEGO_644_v1(3, 6);
		TITULO_MENU_252_v1(0, 27);

		//Segun el enunciado:	El menu debe esperar a que el jugador escriba el numero asignado
		//						a la opcion y inmediatamente ser seleccionado sin presionar la tecla "ENTER"
		//						Ya pregunte y me dijeron que no es necesario resolverlo

		int opc;
		cin >> opc;
		switch (opc)
		{
		case 1:
			system("cls");
			INSTRUCCIONES();
			break;
		case 2:
			system("cls");
			INSTRUCCIONES_ALT();
			break;
		case 3:
			system("cls");
			CREDITOS();
			break;
		case 4:
			system("cls");
			break;
		}
	}
};