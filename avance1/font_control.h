#pragma once
#include "color-control.h"

//"Innecesario pero se ve bien"
//ENLACE DE LAS FUENTES DE LETRA: http://www.roysac.com/thedrawfonts-tdf.html#1
class fontC {
public:
	//FONT INFO
	//BROTHOOD.TDF (Brotherhood) - N° 116 - By: Roy/SAC
	void BROTHOOD_a_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219) << char(223) << char(219) << char(219);
		p(x, y + 3); cout << char(223) << char(223) << " " << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_c_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219) << " " << char(220) << char(220);
		p(x + 1, y + 3); cout << char(223) << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_d_15(int x, int y) {
		p(x + 3, y); b_c(1), f_c(15); cout << char(219) << char(219);
		p(x, y + 1); cout << char(220) << char(219) << char(223) << char(219) << char(219);
		p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
		p(x + 1, y + 3); cout << char(223) << char(223) << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_e_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219) << char(223) << char(223);
		p(x + 1, y + 3); cout << char(223) << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_g_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219); b_c(7); cout << char(220);
		p(x, y + 2); b_c(1); cout << char(219) << char(219) << " " << char(219) << char(219);
		p(x + 1, y + 3); cout << char(223) << char(223) << char(219) << char(219);
		p(x + 2, y + 4); cout << char(223) << char(223);
	}
	void BROTHOOD_i_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(223) << char(223);
		p(x, y + 2); cout << char(219); b_c(7); cout << char(220);
		p(x, y + 3); b_c(1); cout << char(223) << char(223);
	}
	void BROTHOOD_j_15(int x, int y) {
		p(x + 1, y); b_c(7), f_c(15); cout << char(220) << char(219);
		p(x + 1, y + 1); cout << char(219) << char(219);
		p(x + 1, y + 2); cout << char(219) << char(219);
		p(x, y + 3); b_c(1); cout << char(223) << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_l_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(219); b_c(7); cout << char(220);
		p(x, y + 1); cout << char(219) << char(219);
		p(x, y + 2); cout << char(219) << char(219);
		p(x, y + 3); b_c(1), f_c(7); cout << char(223); f_c(15); cout << char(223) << char(223);
	}
	void BROTHOOD_n_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(219) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
		p(x, y + 3); cout << char(223) << char(223) << " " << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_o_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223); b_c(7); cout << char(220); b_c(1); cout << char(220);
		p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
		p(x + 1, y + 3); cout << char(223) << char(223) << char(223);
	}
	void BROTHOOD_r_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219);
		p(x, y + 3); cout << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_s_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(223) << char(223) << char(223);
		p(x + 1, y + 2); cout << char(223) << char(223) << char(219) << char(220);
		p(x, y + 3); cout << char(223) << char(223) << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_t_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(220) << char(219) << char(219) << char(220);
		p(x + 1, y + 2); cout << char(219) << char(219);
		p(x + 1, y + 3); cout << char(223); f_c(7); cout << char(223);
	}
	void BROTHOOD_u_15(int x, int y) {
		p(x, y + 1); b_c(1), f_c(15); cout << char(219) << char(219) << " "; b_c(7); cout << char(220); b_c(1); cout << char(220);
		p(x, y + 2); cout << char(219) << char(219) << " " << char(219) << char(219);
		p(x + 1, y + 3); cout << char(223) << char(223) << char(223);
	}

	void BROTHOOD_a_4(int x, int y) {
		p(x, y + 1); b_c(1), f_c(12); cout << char(220) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219) << char(223) << char(219) << char(219);
		p(x, y + 3); cout << char(223) << char(223) << " " << char(223); f_c(4); cout << char(223);
	}
	void BROTHOOD_i_4(int x, int y) {
		p(x, y + 1); b_c(1), f_c(12); cout << char(223) << char(223);
		p(x, y + 2); cout << char(219); b_c(4); cout << char(220);
		p(x, y + 3); b_c(1); cout << char(223) << char(223);
	}
	void BROTHOOD_l_4(int x, int y) {
		p(x, y); b_c(1), f_c(12); cout << char(219); b_c(4); cout << char(220);
		p(x, y + 1); cout << char(219) << char(219);
		p(x, y + 2); cout << char(219) << char(219);
		p(x, y + 3); b_c(1), f_c(4); cout << char(223); f_c(12); cout << char(223) << char(223);
	}
	void BROTHOOD_r_4(int x, int y) {
		p(x, y + 1); b_c(1), f_c(12); cout << char(220) << char(219) << char(223) << char(219) << char(220);
		p(x, y + 2); cout << char(219) << char(219);
		p(x, y + 3); cout << char(223); f_c(4); cout << char(223);
	}
	void BROTHOOD_s_4(int x, int y) {
		p(x, y + 1); b_c(1), f_c(12); cout << char(220) << char(219) << char(223) << char(223) << char(223);
		p(x + 1, y + 2); cout << char(223) << char(223) << char(219) << char(220);
		p(x, y + 3); cout << char(223) << char(223) << char(223); f_c(4); cout << char(223);
	}

	//CARBONX.TDF (Carbon) - N°123 - By:	Vindication & Roy/SAC
	//NO ENTRA EN 80 DE ANCHO
	void CARBONX_A_11(int x, int y) {
		p(x + 11, y); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(8); cout << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x + 9, y + 1); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(15); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x + 7, y + 2); b_c(1); cout << char(220); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178); b_c(1); cout << char(223) << char(220) << char(220) << char(220);
		p(x + 5, y + 3); b_c(1), f_c(15); cout << char(220); b_c(15), f_c(7); cout << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223); b_c(1), f_c(7); cout << char(220); b_c(15), f_c(7); cout << char(176) << char(176) << char(176) << char(176);
		p(x + 3, y + 4); b_c(1), f_c(16); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 12, y + 4); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 1, y + 5); cout << char(220); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(16); cout << char(223);
		p(x + 12, y + 5); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(11), f_c(16); cout << char(177) << char(177) << char(177) << char(177) << char(177); b_c(1), f_c(11); cout << char(223) << char(220); b_c(11), f_c(16); cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177);
		p(x, y + 7); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(223) << char(220); b_c(11), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
	}
	void CARBONX_C_11(int x, int y) {
		p(x + 3, y); b_c(1), f_c(7); cout << char(220) << char(220); b_c(7), f_c(8); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x + 1, y + 1); cout << char(220); b_c(7), f_c(15); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x, y + 2); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178); b_c(1); cout << char(223);
		p(x, y + 3); b_c(15); cout << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x, y + 4); b_c(1), f_c(16); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x, y + 5); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(16); cout << char(220);
		p(x + 1, y + 6); b_c(1), f_c(11); cout << char(223); b_c(11), f_c(16); cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177);
		p(x + 3, y + 7); b_c(1), f_c(11); cout << char(223) << char(223); b_c(11), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
	}
	void CARBONX_D_11(int x, int y) {
		p(x, y); b_c(7), f_c(8); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(220) << char(220);
		p(x + 1, y + 1); cout << char(223); b_c(7), f_c(15); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(220);
		p(x + 2, y + 2); b_c(1), f_c(7); cout << char(220) << char(220) << char(220);
		p(x + 9, y + 2); cout << char(223); b_c(15); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178);
		p(x, y + 3); b_c(1); cout << char(220); b_c(15); cout << char(176) << char(176) << char(176) << char(176);
		p(x + 11, y + 3); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x, y + 4); b_c(1), f_c(16); cout << char(220) << char(220) << char(220) << char(220);
		p(x + 11, y + 4); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x, y + 5); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x + 9, y + 5); b_c(1), f_c(16); cout << char(220); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(11), f_c(16); cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177); b_c(1), f_c(11); cout << char(223);
		p(x, y + 7); b_c(11), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(223) << char(223);
	}
	void CARBONX_E_11(int x, int y) {
		p(x + 3, y); b_c(1), f_c(7); cout << char(220) << char(220); b_c(7), f_c(8); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x + 1, y + 1); cout << char(220); b_c(7), f_c(15); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x, y + 2); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178); b_c(1); cout << char(223);
		p(x, y + 3); b_c(15); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x, y + 4); b_c(1), f_c(16); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x, y + 5); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(16); cout << char(220);
		p(x + 1, y + 6); b_c(1), f_c(11); cout << char(223); b_c(11), f_c(16); cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177);
		p(x + 3, y + 7); b_c(1), f_c(11); cout << char(223) << char(223); b_c(11), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
	}
	void CARBONX_I_13(int x, int y) {
	}
	void CARBONX_O_11(int x, int y) {
		p(x, y); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(8); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176);
		p(x, y + 1);
		p(x, y + 2);
		p(x + 8, y + 2);
		p(x, y + 3);
		p(x + 8, y + 3);
		p(x, y + 4);
		p(x + 8, y + 4);
		p(x, y + 5);
		p(x + 8, y + 5);
		p(x, y + 6);
		p(x, y + 7);
	}
	void CARBONX_R_11(int x, int y) {

	}
	void CARBONX_R_14(int x, int y) {

	}
	void CARBONX_S_14(int x, int y) {

	}
	void CARBONX_U_14(int x, int y) {

	}
	void CARBONX_V_13(int x, int y) {

	}
	void CARBONX_Z_11(int x, int y) {

	}

	//ONKELZX.TDF (Onkelz) - N° 644 - By:	Roy/SAC & Paraside
	void ONKELZX_a_11(int x, int y) {
		p(x + 1, y + 2); b_c(1), f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(177) << char(177) << char(177); b_c(1), f_c(11); cout << char(221);
		p(x + 1, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	void ONKELZX_C_11(int x, int y) {
		p(x, y); b_c(1), f_c(16); cout << char(222); b_c(11), f_c(16); cout << char(176); f_c(1); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 1); f_c(16); cout << char(222); b_c(1), f_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 2); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1); cout << char(221);
		p(x, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	void ONKELZX_e_11(int x, int y) {
		p(x + 1, y + 2); b_c(1), f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 1, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	void ONKELZX_d_11(int x, int y) {
		p(x + 6, y); b_c(1), f_c(16); cout << char(222); b_c(11), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 1); f_c(16); cout << char(222); b_c(1), f_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x + 1, y + 2); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(177) << char(177) << char(177); b_c(1), f_c(11); cout << char(221);
		p(x + 1, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	void ONKELZX_o_11(int x, int y) {
		p(x + 1, y + 2); b_c(1), f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(177) << char(177) << char(177); b_c(1), f_c(11); cout << char(221);
		p(x + 1, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	void ONKELZX_r_11(int x, int y) {
		p(x, y + 2); b_c(1), f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 2); f_c(16); cout << char(222); b_c(16), f_c(11); cout  << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 3); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(178) << char(178); f_c(1); cout << char(177); f_c(11); cout << char(178); f_c(1); cout << char(177); f_c(11); cout << char(178); f_c(1); cout << char(177) << char(177); f_c(11); cout << char(178); b_c(1), f_c(11); cout << char(221);
		p(x, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 6, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout  << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	void ONKELZX_z_11(int x, int y) {
		p(x, y + 2); b_c(1), f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 3, y + 3); f_c(16); cout << char(222); b_c(11); cout << char(178) << char(178) << char(178); b_c(1), f_c(11); cout << char(221);
		p(x + 2, y + 4); f_c(16); cout << char(222); b_c(16), f_c(11); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x + 1, y + 5); f_c(16); cout << char(222); b_c(16), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
		p(x, y + 6); f_c(16); cout << char(222); b_c(1), f_c(16); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(11); cout << char(221);
	}
	
	void ONKELZX_i_2(int x, int y) {
		p(x, y); b_c(1), f_c(2); cout << char(222); b_c(9), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 2); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 3); f_c(2); cout << char(222); b_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 6); f_c(2); cout << char(222); b_c(1), f_c(2); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
	}
	void ONKELZX_r_2(int x, int y) {
		p(x, y + 2); b_c(1), f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 2); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 3); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(178) << char(178); f_c(1); cout << char(177); f_c(9); cout << char(178); f_c(1); cout << char(177); f_c(9); cout << char(178); f_c(1); cout << char(177) << char(177); f_c(9); cout << char(178); b_c(1), f_c(9); cout << char(221);
		p(x, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 6); f_c(2); cout << char(222); b_c(1), f_c(2); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
	}
	void ONKELZX_s_2(int x, int y) {
		p(x + 1, y + 2); b_c(1), f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 3); f_c(2); cout << char(222); b_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x + 1, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 6); f_c(2); cout << char(222); b_c(1), f_c(2); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
	}
	void ONKELZX_u_2(int x, int y) {
		p(x, y + 2); b_c(1), f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 2); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 3); f_c(2); cout << char(222); b_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 3); f_c(2); cout << char(222); b_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(177) << char(177) << char(177); b_c(1), f_c(9); cout << char(221);
		p(x + 1, y + 6); f_c(2); cout << char(222); b_c(1), f_c(2); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
	}
	void ONKELZX_V_2(int x, int y) {
		p(x, y); b_c(1), f_c(2); cout << char(222); b_c(9), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y); f_c(2); cout << char(222); b_c(9), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 1); f_c(2); cout << char(222); b_c(1), f_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 1); f_c(2); cout << char(222); b_c(1), f_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x, y + 2); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 2); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 3); f_c(2); cout << char(222); b_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 3); f_c(2); cout << char(222); b_c(9); cout << char(178) << char(178) << char(178); b_c(1), f_c(9); cout << char(221);
		p(x, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 4); f_c(2); cout << char(222); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
		p(x + 6, y + 5); f_c(2); cout << char(222); b_c(2), f_c(1); cout << char(177) << char(177) << char(177); b_c(1), f_c(9); cout << char(221);
		p(x + 1, y + 6); f_c(2); cout << char(222); b_c(1), f_c(2); cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(9); cout << char(221);
	}

	//DREADLK.TDF (Dreadlock) - N° 252 - By: Nailz & Roy.SAC
	void DREADLK_A_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1), f_c(15); cout << char(196); b_c(15), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << " " << char(223);
	}
	void DREADLK_C_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_D_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(196) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1); cout << " "; b_c(15); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(196) << char(196) << char(223);
	}
	void DREADLK_E_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1), f_c(15); cout << char(196);
		p(x, y + 2); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_G_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1), f_c(15); cout << char(196) << char(220);
		p(x, y + 2); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_I_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(196) << char(220) << char(196);
		p(x + 1, y + 1); b_c(15), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(196) << char(223) << char(196);
	}
	void DREADLK_J_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(220);
		p(x + 2, y + 1); b_c(15), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_L_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_N_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1); cout << " "; b_c(15); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << " " << char(223);
	}
	void DREADLK_O_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1); cout << " "; b_c(15); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_R_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1), f_c(15); cout << char(196) << char(223);
		p(x, y + 2); cout << char(223) << " " << char(223);
	}
	void DREADLK_S_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220);
		p(x, y + 1); cout << char(223) << char(196) << char(220);
		p(x, y + 2); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_T_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << char(196) << char(220) << char(196) << char(220);
		p(x + 2, y + 1); b_c(15), f_c(7); cout << char(177);
		p(x + 2, y + 2); b_c(1), f_c(15); cout << char(223);
	}
	void DREADLK_U_15(int x, int y) {
		p(x, y); b_c(1), f_c(15); cout << char(220) << " " << char(220);
		p(x, y + 1); b_c(15), f_c(7); cout << char(177); b_c(1); cout << " "; b_c(15); cout << char(177);
		p(x, y + 2); b_c(1), f_c(15); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_1_14(int x, int y) {
		p(x, y); b_c(1), f_c(14); cout << char(196) << char(220);
		p(x + 1, y + 1); b_c(14), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(14); cout << char(196) << char(223) << char(196);
	}
	void DREADLK_2_14(int x, int y) {
		p(x, y); b_c(1), f_c(14); cout << char(220) << char(196) << char(220);
		p(x, y + 1); cout << char(220) << char(196) << char(223);
		p(x, y + 2); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_3_14(int x, int y) {
		p(x, y); b_c(1), f_c(14); cout << char(220) << char(196) << char(220);
		p(x + 1, y + 1); cout << char(196); b_c(14), f_c(7); cout << char(177);
		p(x, y + 2); b_c(1), f_c(14); cout << char(223) << char(196) << char(223);
	}
	void DREADLK_4_14(int x, int y) {
		p(x, y); b_c(1), f_c(14); cout << char(220) << " " << char(220);
		p(x, y + 1); cout << char(223) << char(196); b_c(14), f_c(7); cout << char(177);
		p(x + 2, y + 2); b_c(1), f_c(14); cout << char(223);
	}

	//KNIGHTSX.TDF (Knights) - N° 539 - By:	The Silent Killer & Roy/SAC
	void KNIGHTSX_NUM_15(int x, int y) {
		p(x + 3, y); b_c(1), f_c(15); cout << char(219) << char(219) << char(219);
		p(x + 9, y); cout << char(219) << char(219) << char(219);
		p(x + 3, y + 1); cout << char(219) << char(219) << char(219);
		p(x + 9, y + 1); cout << char(219) << char(219) << char(219);
		p(x, y + 2); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
		p(x + 2, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 2, y + 4); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 4); cout << char(176) << char(176) << char(176);
		p(x + 2, y + 5); cout << char(178) << char(178) << char(178);
		p(x + 8, y + 5); cout << char(178) << char(178) << char(178);
		p(x, y + 6); b_c(1); cout << char(219) << char(219); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(219) << char(219) << char(219) << char(219); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 7); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 7, y + 7); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 1, y + 8); b_c(7), f_c(1); cout << char(176) << char(176) << char(176);
		p(x + 7, y + 8); cout << char(176) << char(176) << char(176);
	}
	void KNIGHTSX_SEPARADOR_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(219); f_c(14); cout << char(219) << char(219);
		p(x + 2, y + 1); f_c(15); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 1, y + 5); cout << char(178) << char(178) << char(178);
		p(x, y + 6); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 7); b_c(1); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 8); b_c(7), f_c(1); cout << char(176) << char(176) << char(176);
	}
	void KNIGHTSX_1_15(int x, int y) {
		p(x + 2, y + 1); b_c(1), f_c(15); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 1, y + 5); cout << char(178) << char(178) << char(178);
		p(x, y + 6); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 7); b_c(1); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
	}
	void KNIGHTSX_G_15(int x, int y) {
		p(x + 5, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(220) << char(220) << char(219) << char(220) << char(220);
		p(x + 2, y + 1); cout << char(220) << char(219) << char(219) << char(219) << char(223) << char(223) << char(223) << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 2); cout << char(219) << char(219) << char(219) << char(223);
		p(x + 9, y + 2); cout << char(219) << char(219) << char(219);
		p(x, y + 3); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x + 8, y + 3); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x + 6, y + 5); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(219) << char(219) << char(221);
		p(x, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 6); cout << char(219) << char(219) << char(219);
		p(x + 1, y + 7); cout << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(220) << char(220) << char(220) << char(219) << char(219) << char(219);
		p(x + 5, y + 8); cout << char(223) << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
	}
	void KNIGHTSX_O_15(int x, int y) {
		p(x + 4, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 2, y + 1); b_c(15), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223) << char(223) << char(223) << char(219) << char(219) << char(219) << char(220);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(219);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 3); b_c(1), f_c(15); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178);
		p(x + 8, y + 4); cout << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1), f_c(7); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 8, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(7); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 7, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 7); cout << char(219) << char(219) << char(219) << char(220) << char(220); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x + 2, y + 8); cout << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
	}
	void KNIGHTSX_P_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(219) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 1, y + 1); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223) << char(223) << char(223) << char(219) << char(219) << char(219) << char(221);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 7, y + 3); b_c(1), f_c(15); cout << char(220); b_c(15), f_c(1); cout << char(176); f_c(7); cout << char(176); b_c(1), f_c(15); cout << char(223);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x, y + 7); cout << char(219) << char(219) << char(219);
		p(x, y + 8); b_c(7), f_c(1); cout << char(176) << char(176) << char(176);
	}
	void KNIGHTSX_R_15(int x, int y) {
		p(x + 2, y); b_c(1), f_c(15); cout << char(220) << char(220) << char(219) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 1, y + 1); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(15); cout << char(223) << char(223) << char(223) << char(219) << char(219) << char(219) << char(221);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 7, y + 3); b_c(1), f_c(15); cout << char(220); b_c(15), f_c(1); cout << char(176); f_c(7); cout << char(176); b_c(1), f_c(15); cout << char(223);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 5, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(7); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 5, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x, y + 7); cout << char(219) << char(219) << char(219);
		p(x + 6, y + 7); cout << char(219); b_c(7), f_c(1); cout << char(176) << char(176);
		p(x, y + 8); cout << char(176) << char(176) << char(176);
		p(x + 6, y + 8); b_c(1), f_c(7); cout << char(222); b_c(7), f_c(1); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
	}
	void KNIGHTSX_U_15(int x, int y) {
		p(x + 3, y); b_c(1), f_c(15); cout << char(220) << char(220);
		p(x + 9, y); cout << char(220) << char(220);
		p(x + 2, y + 1); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 1); b_c(1), f_c(15); cout << char(222) << char(219) << char(219) << char(219);
		p(x + 1, y + 2); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 8, y + 2); cout << char(222) << char(219) << char(219) << char(219);
		p(x + 1, y + 3); b_c(15), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 8, y + 3); b_c(1), f_c(15); cout << char(222); b_c(15), f_c(7); cout << char(176) << char(176); b_c(1), f_c(15); cout << char(221);
		p(x + 1, y + 4); b_c(15), f_c(7); cout << char(178) << char(178) << char(178);
		p(x + 8, y + 4); cout << char(178) << char(178) << char(178);
		p(x, y + 5); b_c(1), f_c(7); cout << char(222); b_c(7), f_c(15); cout << char(176) << char(176); b_c(1), f_c(7); cout << char(221);
		p(x + 8, y + 5); b_c(7), f_c(15); cout << char(176) << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(7); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 7, y + 6); cout << char(222) << char(219) << char(219) << char(221);
		p(x + 1, y + 7); cout << char(219) << char(219) << char(219) << char(220) << char(220); b_c(7), f_c(1); cout << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
		p(x + 2, y + 8); cout << char(223); b_c(7), f_c(1); cout << char(176) << char(176) << char(176) << char(176); b_c(1), f_c(7); cout << char(223);
	}

	fontC() {};
	~fontC() {};

};