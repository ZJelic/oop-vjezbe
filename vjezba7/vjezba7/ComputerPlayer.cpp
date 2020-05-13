#include "ComputerPlayer.h"
#include <iostream>
using namespace std;

void ComputerPlayer::set_round_temp() {
	int computer_round = rand() % 6; //0...5
	round_temp = computer_round;
	cout << "Igrac " << name << " -> " << round_temp << endl;
}