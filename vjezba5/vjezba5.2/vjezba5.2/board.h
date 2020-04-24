#ifndef BOARD_H
#define BOARD_H

#include <iostream>

struct Point {
	double x, y;
};
class Board {
	char** matrica;
	char okvir;
	int red;
	int stupac;
public:
	Board();
	Board(const Board&);
	Board(int redBoard, int stupacBoard);
	~Board();
	void draw_char(Point dot, char ch);
	void draw_up_line(Point dot, char ch);
	void draw_line(Point dot1, Point dot2, char ch);
	void display();
};
#endif