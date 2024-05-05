#pragma once
//PANTALLA VICTORIA
//Contendria:
//TITULO PRINCIPAL:		YOU WON (TASK SUCCSESSFULL, YOU DID IT)
//SUBTITULO:			Archivos recuperados y protegidos
//INSTRUCCIONES:		Presiona la tecla "Esc" para salir
//COMPLEMTENTO:			Dibujo de computadora feliz

//Letras necesarias identificadas [NOUWY] - adicionales [ADEFIKLST]

class ganar{
private:
	//BROKNSRT.TDF (Brokener Short) - N° 115 - By:	Dragoon Kain & Roy/SAC
	void BROKNSRT_N(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x, y + 1); cout << char(219); f_c(14); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219); b_c(14), f_c(7); cout << char(223); b_c(1), f_c(7); cout << char(220);
		p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219); b_c(1); cout << char(223);
		p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 11); f_c(8); cout << char(219); b_c(9), f_c(7); cout << char(220) << char(220) << char(220) << char(219);
		p(x + 6, y + 11); f_c(8); cout << char(219); b_c(9), f_c(7); cout << char(220) << char(220) << char(220) << char(219);
	}
	void BROKNSRT_O(int x, int y) {
		p(x + 3, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 1, y + 1); cout << char(220); b_c(14), f_c(7); cout << char(223) << "   ";
		p(x + 6, y + 1); cout << "  " << char(223); b_c(1), f_c(7); cout << char(220);
		p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219); b_c(1); cout << char(223);
		p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219); b_c(1), f_c(8); cout << char(220);
		p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
		p(x + 6, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
	}
	void BROKNSRT_U(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 6, y); cout << char(220) << char(220);
		p(x, y + 1); cout << char(219); b_c(14), f_c(7); cout << "   " << char(219);
		p(x + 6, y + 1); f_c(8); cout << char(219); f_c(14); cout << char(219); b_c(14), f_c(7); cout << char(223); b_c(1), f_c(8); cout << char(220);
		p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219); b_c(1), f_c(8); cout << char(220);
		p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
		p(x + 6, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
	}
	void BROKNSRT_W(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 11, y); cout << char(220) << char(220);
		p(x, y + 1); cout << char(219); b_c(14), f_c(7); cout << "   " << char(219);
		p(x + 11, y + 1); f_c(8); cout << char(219); f_c(14); cout << char(219); b_c(14), f_c(7); cout << char(223); b_c(1), f_c(8); cout << char(220);
		p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(7); cout << char(223); b_c(1); cout << char(220);
		p(x + 11, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 11, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 11, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 11, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 11, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 11, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 8); b_c(8), f_c(7); cout << char(176); f_c(2); cout << char(219) << char(219) << char(219); b_c(7), f_c(8); cout << char(176);
		p(x + 6, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219); b_c(7), f_c(8); cout << char(176);
		p(x + 11, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 9); b_c(8), f_c(7); cout << char(177); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); b_c(8), f_c(7); cout << char(177);
		p(x + 6, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176); b_c(8), f_c(7); cout << char(177);
		p(x + 11, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 10); b_c(7), f_c(8); cout << char(176); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); b_c(8), f_c(7); cout << char(176); b_c(1), f_c(8); cout << char(220);
		p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177); b_c(8), f_c(7); cout << char(176); b_c(1), f_c(8); cout << char(220);
		p(x + 11, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
		p(x + 6, y + 11); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 11, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
	}
	void BROKNSRT_Y(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x + 6, y); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x, y + 1); cout << char(219); b_c(14), f_c(7); cout << "   " << char(219);
		p(x + 6, y + 1); f_c(8); cout << char(219); f_c(14), f_c(7); cout << "   " << char(219);
		p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 6, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); b_c(7), f_c(8); cout << char(176);
		p(x + 6, y + 4); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 5); b_c(8), f_c(7); cout << char(176); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); b_c(8), f_c(7); cout << char(177);
		p(x + 6, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 6); b_c(8), f_c(7); cout << char(177); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); b_c(8), f_c(7); cout << char(176);
		p(x + 6, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 7);  b_c(7), f_c(8); cout << char(176); b_c(1), f_c(6); cout << char(177) << char(177) << char(177) << char(177) << char(177);
		p(x + 6, y + 7); cout << char(177) << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 1, y + 8); b_c(1); cout << char(223) << char(223) << char(223) << char(223) << char(223);
		p(x + 6, y + 8); b_c(8), f_c(7); cout << char(177); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 9); b_c(8); cout << char(176); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x + 6, y + 9); b_c(8); cout << char(176); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219); b_c(1), f_c(8); cout << char(220);
		p(x + 6, y + 10); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x + 1, y + 11); b_c(1); cout << char(223); b_c(9); cout << char(220) << char(220) << char(220) << char(220);
		p(x + 6, y + 11); cout << char(220) << char(220) << char(220); b_c(1); cout << char(223);
	}

	void BROKNSRT_I(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(220) << char(220) << char(220) << char(220) << char(220);
		p(x, y + 1); cout << char(219); f_c(14); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 2); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 3); f_c(8); cout << char(219); b_c(14), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 4); f_c(8); cout << char(219); b_c(6), f_c(14); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 5); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 6); f_c(8); cout << char(219); b_c(6), f_c(1); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 7); f_c(8); cout << char(219); b_c(1), f_c(6); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 8); f_c(8); cout << char(219); f_c(2); cout << char(219) << char(219) << char(219); f_c(7); cout << char(219);
		p(x, y + 9); f_c(8); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176) << char(176); f_c(7); cout << char(219);
		p(x, y + 10); f_c(8); cout << char(219); b_c(9), f_c(2); cout << char(177) << char(177) << char(177); f_c(7); cout << char(219);
		p(x, y + 11); f_c(8); cout << char(219); b_c(9), f_c(7); cout << char(220) << char(220) << char(220) << char(219);
	}
public:
	ganar() {};
	~ganar() {};

	void TEST_BROKNSRT(int x, int y) {
		BROKNSRT_N(x + 14, y);
		BROKNSRT_O(x + 28, y);
		BROKNSRT_U(x, y + 14);
		BROKNSRT_W(x + 14, y + 14);
		BROKNSRT_Y(x + 36, y + 14);
	}
	void TITULO_YOUWON_v2(int x, int y) {
		BROKNSRT_Y(x, y);
		BROKNSRT_O(x + 12, y);
		BROKNSRT_U(x + 24, y);
		BROKNSRT_W(x + 38, y);
		BROKNSRT_O(x + 55, y);
		BROKNSRT_N(x + 67, y);
	}

	void TITULO_GANAR_v2() {
		TITULO_YOUWON_v2(1, 12);
		p(1, 38); b_c(1), f_c(15); cout << "Presiona la tecla 'Esc' y luego vuelve a  presionar cualquier tecla para salir";
		system("pause>0");
		while (true) {
			if (kbhit()) {
				char tecla = getch();
				if (tecla == '\033'); //Presiona la tecla "Esc" para salir
				system("cls");
				break;
			}
		}
	}

	void TITULO_GANAR_v1(int x, int y) {
		p(x + 36, y + 19); f_c(10); cout << "YOU WIN";
		system("pause>0");
		while (true) {
			if (kbhit()) {
				char tecla = getch();
				if (tecla == '\033') break; //Presiona la tecla "Esc" para salir
			}
		}
	}
};