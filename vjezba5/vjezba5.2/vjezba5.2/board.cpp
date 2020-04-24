#include <iostream>
#include <vector>
#include "Board.h"
using namespace std;

Board::Board() {
}
Board::Board(const Board &copyBoard) {
	red = copyBoard.red;
	stupac = copyBoard.stupac;
	matrica = copyBoard.matrica;
}
Board::Board(int redBoard, int stupacBoard) {
	red = redBoard;
	stupac = stupacBoard;
	matrica = new char*[redBoard];
	for (int i = 0; i < redBoard; i++) {
		matrica[i] = new char[stupacBoard];
		for (int j = 0; j < stupacBoard; j++) {
			matrica[i][j] = ' ';
		}
	}
	okvir = 'o';
}
Board::~Board() {
	for (int i = 0; i < red; i++)
	{
		delete[] matrica[i];
	}
	delete[] matrica;
}
void Board::draw_char(Point dot, char ch) {
	int x = dot.x, y = dot.y;
	matrica[x][y] = ch;
}
void Board::draw_up_line(Point dot, char ch) { // smjer ->
	int x = dot.x;
	int y = dot.y;
	for (int i = 1; i <= y; i++)
	{
		matrica[x][i] = ch;
	}
}
void Board::draw_line(Point dot1, Point dot2, char ch) {
	int x1 = round(dot1.x);
	int y1 = round(dot1.y);
	int x2 = round(dot2.x);
	int y2 = round(dot2.y);

	if (x1 == x2 && y1 == y2) {
		draw_char(dot2, ch);
		return;
	}
	if (y1 == y2) {
		for (int i = 0; i < red; i++) {
			if (i == x1 || i == x2 || (i > x1 && i < x2) || (i > x2 && i < x1)) {
				matrica[i][y1] = ch;
			}
		}
	}
	else {
		if (y1 > y2) {
			int j = y2;
			for (int i = x2; i <= x1; i++) {
				matrica[i][j] = ch;
				j++;
			}
		}
		else {
			int j = y1;
			for (int i = x1; i <= x2; i++) {
				matrica[i][j] = ch;
				j++;
			}
		}
	}
}
void Board::display() {
	for (int i = 0; i < red; i++) {
		if (i == 0) {
			for (int x = 0; x < red+2; x++) {
				cout << okvir;
				cout << ' ';
			}
		}
		cout << "\n";
		for (int j = 0; j < stupac; j++) {
			if (j == 0) {
				cout << okvir;
			}
			cout << ' ';
			cout << matrica[i][j];
			if (j == stupac -1 ) {
				cout << ' ';
				cout << okvir;
			}
		}
		cout << "\n";
		if (i == red - 1) {
			for (int x = 0; x < red + 2; x++) {
				cout << okvir;
				cout << ' ';
			}
		}
	}
}