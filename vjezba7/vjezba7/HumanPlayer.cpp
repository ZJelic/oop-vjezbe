#include "HumanPlayer.h"
#include <iostream>
using namespace std;

void HumanPlayer::set_round_temp() {
	cout << "Unesite broj:" << endl;
	int broj;
	cin >> broj;
	round_temp = broj;
}