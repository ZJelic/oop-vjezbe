#include <iostream>
#include "Board.h"
using namespace std;

int main()
{
	Board* ploca = new Board(10,10);
	struct Point dot1 = {8,8};
	struct Point dot2 = {4,4};
	//ploca->draw_char(dot1, 'C');
	ploca->draw_line(dot1, dot2, '%');
	ploca->draw_up_line(dot2, 'x');
	ploca->display();
	Board copyBoard = *ploca;
}