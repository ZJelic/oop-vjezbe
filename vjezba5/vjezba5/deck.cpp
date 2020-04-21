#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "deck.h"
using namespace std;

Deck::Deck() {
	string zog[] = { "Spade ", "Dinare ", "Bastone ","Kupe " };
	string broj[] = { "1","2","3","4","5","6","7","11","12","13" };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10; j++) {
			Karta nova(zog[i], broj[j]);
			spil.push_back(nova);
		}
	}
	cout << "Konstruktor klasa deck" << endl;
}
Deck::~Deck() {
	cout << "Destruktor klasa deck" << endl;
}

void Deck::set_spil(vector <Karta> spil) {
	this->spil = spil;
}

vector <Karta> get_spil(vector <Karta> spil) {
	return spil;
}