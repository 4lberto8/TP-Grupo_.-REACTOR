#pragma once
//PANTALLA VICTORIA
//Contendria:
//TITULO PRINCIPAL:		GAME OVER (TASK FAILURE, FATAL FAILURE)
//SUBTITULO:			Archivos encriptados, reintentado.
//INSTRUCCIONES:		Opcion 1:  Reitentar	Opcion 2:  Abortar tarea (Salir)
//COMPLEMTENTO:			Dibujo de computadora triste

//Letras necesarias identificadas [AERGMOR] - adicionales [FIKLSYU]

class perder {
private:
	//FONT59X.TDF (Font 59 Skyfall) - N° 390 - By:	Roy/SAC
	void FONT59X_A_12(int x, int y) {
		p(x, y); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(12); cout << char(177) << char(177); f_c(15); cout << char(177); b_c(15), f_c(7); cout << char(178) << char(177) << char(178); b_c(7), f_c(15); cout << char(177); f_c(12); cout << char(177); b_c(1), f_c(7); cout << char(220);
		p(x, y + 1); b_c(7), f_c(12); cout << char(177) << char(178) << char(178); b_c(12), f_c(1); cout << char(176); b_c(1), f_c(7); cout << char(223) << char(223); b_c(12), f_c(1); cout << char(176); b_c(7), f_c(12); cout << char(178) << char(178); b_c(7), f_c(12); cout << char(177);
		p(x, y + 2); cout << char(178); b_c(12), f_c(7); cout << char(176) << char(176); b_c(1), f_c(12); cout << char(178);
		p(x + 6, y + 2); cout << char(178); b_c(12), f_c(7); cout << char(176) << char(176); b_c(7), f_c(12); cout << char(178);
		p(x, y + 3); b_c(12), f_c(7); cout << char(176) << char(176) << char(176); b_c(1), f_c(12); cout << char(176);
		p(x + 5, y + 3); cout << char(220); b_c(12), f_c(7); cout << char(176) << char(176) << char(176) << char(176);
		p(x, y + 4); f_c(12); cout << char(219); f_c(7); cout << char(176) << char(176); b_c(1), f_c(8); cout << char(220); b_c(8), f_c(12); cout << char(176); b_c(12), f_c(8); cout << char(178); b_c(12), f_c(7); cout << char(176) << char(176) << char(176); f_c(4); cout << char(176);
		p(x, y + 5); b_c(4), f_c(12); cout << char(178); b_c(12), f_c(4); cout << char(176) << char(176); b_c(12), f_c(8); cout << char(178); f_c(12); cout << char(219); b_c(1); cout << char(223) << char(176); b_c(12), f_c(4); cout << char(176) << char(176); b_c(4), f_c(12); cout << char(178);
		p(x, y + 6); cout << char(178); b_c(12), f_c(4); cout << char(176) << char(176); b_c(1), f_c(8); cout << char(223);
		p(x + 6, y + 6); b_c(1), f_c(12); cout << char(178); b_c(12), f_c(4); cout << char(176) << char(176); b_c(4), f_c(12); cout << char(178);
		p(x, y + 7); b_c(4), f_c(12); cout << char(176) << char(178) << char(178); b_c(1); cout << char(176);
		p(x + 6, y + 7); cout << char(176); b_c(4); cout << char(178) << char(178) << char(176);
		p(x, y + 8); b_c(1), f_c(4); cout << char(223) << char(223) << char(223) << char(223);
		p(x + 6, y + 8); cout << char(223) << char(223) << char(223) << char(223);
	}
	void FONT59X_E_12(int x, int y) {
		p(x, y); b_c(1), f_c(7); cout << char(220); b_c(7), f_c(12); cout << char(177) << char(177); f_c(15); cout << char(177); b_c(15), f_c(7); cout << char(178) << char(177) << char(178); b_c(7), f_c(15); cout << char(177); f_c(12); cout << char(177); b_c(1), f_c(7); cout << char(220);
		p(x, y + 1); b_c(7), f_c(12); cout << char(177) << char(178) << char(178); b_c(12), f_c(1); cout << char(176); b_c(1), f_c(7); cout << char(223) << char(223); b_c(12), f_c(1); cout << char(176); b_c(7), f_c(12); cout << char(178) << char(178); b_c(7), f_c(12); cout << char(177);
		p(x, y + 2); cout << char(178); b_c(12), f_c(7); cout << char(176) << char(176); b_c(1), f_c(12); cout << char(178);
		p(x + 6, y + 2); cout << char(178); b_c(12), f_c(7); cout << char(176) << char(176); b_c(7), f_c(12); cout << char(178);
		p(x, y + 3); b_c(12), f_c(7); cout << char(176) << char(176) << char(176);
		p(x + 6, y + 3);
		p(x, y + 4); f_c(12); cout << char(219); f_c(7); cout << char(176) << char(176);
		p(x, y + 5); b_c(4), f_c(12); cout << char(178); b_c(12), f_c(4); cout << char(176) << char(176); b_c(12), f_c(8); cout << char(178); f_c(12); cout << char(219); b_c(1); cout << char(223) << char(176); b_c(12), f_c(4); cout << char(176) << char(176); b_c(4), f_c(12); cout << char(178);
		p(x + 6, y + 5);
		p(x, y + 6); cout << char(178); b_c(12), f_c(4); cout << char(176) << char(176); b_c(1), f_c(8); cout << char(223);
		p(x + 6, y + 6); b_c(1), f_c(12); cout << char(178); b_c(12), f_c(4); cout << char(176) << char(176); b_c(4), f_c(12); cout << char(178);
		p(x, y + 7); b_c(4), f_c(12); cout << char(176) << char(178) << char(178);
		p(x + 1, y + 8); b_c(1), f_c(4); cout << char(223) << char(223) << char(223) << char(223);
	}
	//BORRAR ESTE COMENTARIO AL TERMINAR DE DIBUJAR ESTA FUENTE



public:
	perder() {};
	~perder() {};

	void TEST_FONT59X_390(int x, int y) {
		FONT59X_A_12(x, y);
		FONT59X_E_12(x + 11, y);
	}
	void TITULO_PERDER_LAZY(int x, int y) {
		p(x + 36, y + 19);b_c(12), f_c(1); cout << "GAME OVER";
		p(16, 38); b_c(1), f_c(12); cout << "Presiona la tecla 'Esc' para salir";
		system("pause>0");
		while (true) {
			if (kbhit()) {
				char tecla = getch();
				if (tecla == '\033') break; //Presiona la tecla "Esc" para salir
			}
		}
	}
};