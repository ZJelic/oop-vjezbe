#include <iostream>
#include "Board.h"
using namespace std;

int main()
{
	Board* ploca = new Board(5,5);
	struct Point dot1 = {2,2};
	struct Point dot2 = {3,3};
	ploca->draw_char(dot1, 'C');
	//ploca->draw_line(dot1, dot2, '%');
	//ploca->draw_up_line(dot2, 'x');
	ploca->display();
	Board copyBoard = *ploca;
}