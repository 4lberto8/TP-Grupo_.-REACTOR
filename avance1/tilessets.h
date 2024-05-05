#pragma once
//"Innecesario pero se ve bien"
#include "color-control.h"

class tileset{
public:
	tileset() {};
	~tileset() {};

	void tileset_blueWall1_X5(int x, int y) {
		p(x, y); b_c(1), f_c(11); cout << char(219) << char(223) << char(223) << char(223); f_c(16); cout << char(219);
		p(x, y + 1); f_c(11); cout << char(219); b_c(2), f_c(1); cout << char(177); b_c(1), f_c(2); cout << char(178); b_c(2), f_c(1); cout << char(177); f_c(16); cout << char(219);
		p(x, y + 2); b_c(2), f_c(11); cout << char(219); f_c(16); cout << char(220) << char(220) << char(220) << char(219);
	}
	void tileset_blueWall2_X5(int x, int y) {
		p(x, y); b_c(2), f_c(11); cout << char(219) << char(223) << char(223) << char(223); f_c(16); cout << char(219);
		p(x, y + 1); f_c(11); cout << char(219); b_c(2), f_c(1); cout << char(177); b_c(1), f_c(2); cout << char(178); b_c(2), f_c(1); cout << char(177); f_c(16); cout << char(219);
		p(x, y + 2); b_c(1), f_c(11); cout << char(219); f_c(16); cout << char(220) << char(220) << char(220) << char(219);
	}
	void tileset_blueWall1_OUT_9_X4(int x, int y) {
		p(x, y); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 1); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 2); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 3); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 4); b_c(9), f_c(9); cout << char(219) << char(219); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 5); b_c(9), f_c(2); cout << char(176) << char(176) << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 6); b_c(9), f_c(2); cout << char(178) << char(178) << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 7); b_c(2), f_c(9); cout << char(176) << char(176); b_c(9), f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
	}
	void tileset_blueWall2_OUT_9_X4(int x, int y) {
		p(x, y); b_c(2), f_c(9); cout << char(176) << char(176); b_c(9), f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 1); b_c(9), f_c(2); cout << char(178) << char(178) << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 2); b_c(9), f_c(2); cout << char(176) << char(176) << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 3); b_c(9), f_c(9); cout << char(219) << char(219); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 4); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 5); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 6); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 7); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
	}
	void tileset_blueWall1_2_OUT_9_X4(int x, int y) {
		p(x, y); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
		p(x, y + 1); b_c(9), f_c(7); cout << char(176) << char(176); f_c(2); cout << char(222); b_c(1), f_c(8); cout << char(222);
	}
	void tileset_blueWall1_IN_9_X4(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 1); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 2); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 3); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 4); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9); cout << char(219) << char(219);
		p(x, y + 5); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(2); cout << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(2); cout << char(178) << char(178);
		p(x, y + 7); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222) << char(176) << char(176);
	}
	void tileset_blueWall2_IN_9_X4(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222) << char(176) << char(176);
		p(x, y + 1); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(2); cout << char(178) << char(178);
		p(x, y + 2); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(2); cout << char(176) << char(176);
		p(x, y + 3); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9); cout << char(219) << char(219);
		p(x, y + 4); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 5); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 6); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
		p(x, y + 7); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(7); cout << char(176) << char(176);
	}
	void tileset_blueWall2_2_IN_9_X4(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222) << char(176) << char(176);
		p(x, y + 1); b_c(1), f_c(8); cout << char(221); b_c(2), f_c(9); cout << char(222); b_c(9), f_c(2); cout << char(178) << char(178);
	}
	void tileset_blueWall1_BASE_9_X4(int x, int y) {
		p(x, y); b_c(2), f_c(9); cout << char(178) << char(178); b_c(9), f_c(2); cout << char(176) << char(176) << char(176) << char(176); b_c(2), f_c(9); cout << char(178) << char(178);
		p(x, y + 1); b_c(1), f_c(2); cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
	}
	void tileset_blueWall2_BASE_9_X4(int x, int y) {
		p(x, y + 1); b_c(1), f_c(2); cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
	}
	void tileset_blueWall1_BASE_9_ARC1(int x, int y) {
		p(x, y); b_c(1), f_c(8); cout << char(222);
		p(x + 47, y); b_c(1), f_c(8); cout << char(221);
		p(x, y + 1); b_c(1), f_c(8); cout << char(222);
		p(x + 47, y + 1); b_c(1), f_c(8); cout << char(221);
		p(x + 1, y + 2); b_c(1), f_c(8); cout << char(222);
		p(x + 46, y + 2); b_c(1), f_c(8); cout << char(221);
		p(x + 1, y + 3); b_c(1), f_c(8); cout << char(222);
		p(x + 46, y + 3); b_c(1), f_c(8); cout << char(221);
		p(x + 2, y + 4); b_c(1), f_c(8); cout << char(222);
		p(x + 45, y + 4); b_c(1), f_c(8); cout << char(221);
		p(x + 2, y + 5); b_c(1), f_c(8); cout << char(222);
		p(x + 45, y + 5); b_c(1), f_c(8); cout << char(221);
		p(x + 3, y + 6); b_c(1), f_c(8); cout << char(222);
		p(x + 44, y + 6); b_c(1), f_c(8); cout << char(221);
		p(x + 4, y + 7); b_c(1), f_c(8); cout << char(222);
		p(x + 43, y + 7); b_c(1), f_c(8); cout << char(221);
		p(x + 6, y + 8); b_c(1), f_c(8); cout << char(222);
		p(x + 41, y + 8); b_c(1), f_c(8); cout << char(221);
		p(x + 10, y + 9); b_c(1), f_c(8); cout << char(222);
		p(x + 37, y + 9); b_c(1), f_c(8); cout << char(221);
		p(x + 14, y + 10); b_c(1), f_c(8); cout << char(222);
		p(x + 33, y + 10); b_c(1), f_c(8); cout << char(221);
		p(x + 18, y + 11); b_c(1), f_c(8); cout << char(222);
		p(x + 29, y + 11); b_c(1), f_c(8); cout << char(221);
	}
	void tileset_purpleWall1_X4(int x, int y) {
		p(x, y); b_c(1), f_c(13); cout << char(220) << char(220) << char(220) << char(220);
		p(x, y + 1); cout << char(219); f_c(9); cout << char(219) << char(219); f_c(5); cout << char(219);
		p(x, y + 2); f_c(13); cout << char(219); b_c(9), f_c(2); cout << char(176) << char(176); f_c(5); cout << char(219);
		p(x, y + 3); f_c(13); cout << char(219); b_c(9), f_c(2); cout << char(178) << char(178); f_c(5); cout << char(219);
		p(x, y + 4); f_c(13); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176); f_c(5); cout << char(219);
		p(x, y + 5); f_c(13); cout << char(219); f_c(2); cout << char(219) << char(219); f_c(5); cout << char(219);
		p(x, y + 6); f_c(13); cout << char(219); b_c(2), f_c(1); cout << char(176) << char(176); b_c(1), f_c(5); cout << char(219);
		p(x, y + 7); f_c(13); cout << char(219); f_c(2); cout << char(178) << char(178); f_c(5); cout << char(219);
		p(x, y + 8); f_c(13); cout << char(223); f_c(5); cout << char(223) << char(223) << char(223);
	}
	void tileset_purpleWall2_X4(int x, int y) {
		p(x, y); b_c(1), f_c(13); cout << char(220); b_c(2); cout << char(223) << char(223); b_c(1), f_c(5); cout << char(220);
		p(x, y + 1); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(9); cout << char(176) << char(176); f_c(5); cout << char(219);
		p(x, y + 2); f_c(13); cout << char(219); b_c(9), f_c(2); cout << char(178) << char(178); f_c(5); cout << char(219);
		p(x, y + 3); f_c(13); cout << char(219); b_c(9), f_c(2); cout << char(176) << char(176); f_c(5); cout << char(219);
		p(x, y + 4); b_c(1), f_c(13); cout << char(223); b_c(9); cout << char(220) << char(220); b_c(1), f_c(5); cout << char(223);
	}
	void tileset_purpleWall1_BASE_X4(int x, int y) {
		p(x, y); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(13); cout << char(223) << char(223) << char(223) << char(223); f_c(5); cout << char(219);
		p(x, y + 1); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(5); cout << char(220) << char(220) << char(220) << char(220) << char(219);
	}
	void tileset_purpleWall2_BASE_X4(int x, int y) {
		p(x, y); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(13); cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223); f_c(5); cout << char(219);
		p(x, y + 1); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(5); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(219);
	}
	void tileset_purpleWall3_BASE_X4(int x, int y) {
		p(x, y); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(13); cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223); f_c(5); cout << char(219);
		p(x, y + 1); b_c(1), f_c(13); cout << char(219); b_c(2), f_c(5); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(219);
	}

	void pattern_blueWall_v1_X5(int x, int y) {
		tileset_blueWall1_X5(x, y);
		tileset_blueWall2_X5(x, y + 3);
		tileset_blueWall1_X5(x, y + 6);
		tileset_blueWall2_X5(x, y + 9);
		tileset_blueWall1_X5(x, y + 12);
		tileset_blueWall2_X5(x, y + 15);
		tileset_blueWall1_X5(x, y + 19);
		tileset_blueWall2_X5(x, y + 22);
		tileset_blueWall1_X5(x, y + 25);
		tileset_blueWall2_X5(x, y + 28);
		tileset_blueWall1_X5(x, y + 31);
		tileset_blueWall2_X5(x, y + 34);
		tileset_blueWall1_X5(x, y + 37);
		tileset_blueWall1_X5(x + 59, y);
		tileset_blueWall2_X5(x + 59, y + 3);
		tileset_blueWall1_X5(x + 59, y + 6);
		tileset_blueWall2_X5(x + 59, y + 9);
		tileset_blueWall1_X5(x + 59, y + 12);
		tileset_blueWall2_X5(x + 59, y + 15);
		tileset_blueWall1_X5(x + 59, y + 18);
		tileset_blueWall2_X5(x + 59, y + 22);
		tileset_blueWall1_X5(x + 59, y + 25);
		tileset_blueWall2_X5(x + 59, y + 28);
		tileset_blueWall1_X5(x + 59, y + 31);
		tileset_blueWall2_X5(x + 59, y + 34);
		tileset_blueWall1_X5(x + 59, y + 37);
	}
	void pattern_blueWall_1_v1_X4(int x, int y) {
		tileset_blueWall1_2_OUT_9_X4(x, y - 2);
		tileset_blueWall1_OUT_9_X4(x, y);
		tileset_blueWall2_OUT_9_X4(x, y + 8);
		tileset_blueWall1_OUT_9_X4(x, y + 16);
		tileset_blueWall2_OUT_9_X4(x, y + 24);
		tileset_blueWall1_2_OUT_9_X4(x, y + 32);
		tileset_blueWall2_2_IN_9_X4(x + 52, y - 2);
		tileset_blueWall2_IN_9_X4(x + 52, y);
		tileset_blueWall1_IN_9_X4(x + 52, y + 8);
		tileset_blueWall2_IN_9_X4(x + 52, y + 16);
		tileset_blueWall1_IN_9_X4(x + 52, y + 24);
		tileset_blueWall2_2_IN_9_X4(x + 52, y + 32);
		tileset_blueWall1_BASE_9_X4(x + 5, y + 32);
		tileset_blueWall1_BASE_9_X4(x + 13, y + 32);
		tileset_blueWall1_BASE_9_X4(x + 24, y + 32);
		tileset_blueWall1_BASE_9_X4(x + 35, y + 32);
		tileset_blueWall1_BASE_9_X4(x + 43, y + 32);
	}
	void pattern_blueWall_2_v1_X4(int x, int y) {
		tileset_blueWall1_2_OUT_9_X4(x, y - 2);
		tileset_blueWall1_OUT_9_X4(x, y);
		tileset_blueWall2_OUT_9_X4(x, y + 8);
		tileset_blueWall2_OUT_9_X4(x, y + 16);
		tileset_blueWall2_2_IN_9_X4(x + 52, y - 2);
		tileset_blueWall2_IN_9_X4(x + 52, y);
		tileset_blueWall1_IN_9_X4(x + 52, y + 8);
		tileset_blueWall1_IN_9_X4(x + 52, y + 16);
		tileset_blueWall1_BASE_9_ARC1(x + 4, y + 22);
	}
	void pattern_blueWall_3_v1_X4(int x, int y) {
		tileset_blueWall1_2_OUT_9_X4(x, y - 2);
		tileset_blueWall1_OUT_9_X4(x, y);
		tileset_blueWall2_OUT_9_X4(x, y + 8);
		tileset_blueWall1_OUT_9_X4(x, y + 16);
		tileset_blueWall2_OUT_9_X4(x, y + 24);
		tileset_blueWall1_2_OUT_9_X4(x, y + 32);
		tileset_blueWall2_2_IN_9_X4(x + 52, y - 2);
		tileset_blueWall2_IN_9_X4(x + 52, y);
		tileset_blueWall1_IN_9_X4(x + 52, y + 8);
		tileset_blueWall2_IN_9_X4(x + 52, y + 16);
		tileset_blueWall1_IN_9_X4(x + 52, y + 24);
		tileset_blueWall2_2_IN_9_X4(x + 52, y + 32);
		tileset_blueWall2_BASE_9_X4(x + 5, y + 32);
		tileset_blueWall2_BASE_9_X4(x + 13, y + 32);
		tileset_blueWall2_BASE_9_X4(x + 24, y + 32);
		tileset_blueWall2_BASE_9_X4(x + 35, y + 32);
		tileset_blueWall2_BASE_9_X4(x + 43, y + 32);
	}
	void pattern_purpleWall_1_v1_X4(int x, int y) {
		tileset_purpleWall1_X4(x, y);
		tileset_purpleWall2_X4(x + 26, y + 1);
		tileset_purpleWall2_X4(x + 26, y + 6);
		tileset_purpleWall1_X4(x + 52, y);
		tileset_purpleWall1_X4(x, y + 9);
		tileset_purpleWall1_X4(x + 52, y + 9);
		tileset_purpleWall1_X4(x, y + 18);
		tileset_purpleWall1_X4(x + 52, y + 18);
		tileset_purpleWall1_X4(x, y + 27);
		tileset_purpleWall1_X4(x + 52, y + 27);
		tileset_purpleWall1_BASE_X4(x + 5, y + 34);
		tileset_purpleWall2_BASE_X4(x + 12, y + 34);
		tileset_purpleWall3_BASE_X4(x + 21, y + 34);
		tileset_purpleWall2_BASE_X4(x + 36, y + 34);
		tileset_purpleWall1_BASE_X4(x + 45, y + 34);
	}
};