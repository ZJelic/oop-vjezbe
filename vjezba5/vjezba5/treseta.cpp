#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime> 
#include <cstdlib>
#include "deck.h"
#include "igrac.h"
#include "karta.h"
using namespace std;
using std::vector;

//Karta
Karta::Karta() {

}
void Karta::print_karta() const {
	cout << zog << broj << endl;
}
int Karta::napolitana() const {
	int br = 0;

	if (broj == "1" || broj == "2" || broj == "3") {
		br = 1;
	}
	return br;
}

//Deck
void Deck::promijesaj_spil() {
	srand(unsigned(std::time(0)));
	random_shuffle(spil.begin(), spil.end());
}
void Deck::print_spil() const {
	cout << "SPIL:" << endl;

	for (int i = 0; i < 40; i++)
	{
		spil[i].print_karta();
	}
	cout << endl;
}
Karta Deck::karta_van(int i) const {
	return spil[i];
}

//Igrac
Igrac::Igrac() {
	broj_bodova = 0;
}
void Igrac::dijeli(int brojac, Deck spil) {

	for (int i = brojac; i < brojac + 10; i++) {
		Karta nova;
		nova = spil.karta_van(i);
		ruka.push_back(nova);

	}
}
void Igrac::print_ruka() const {
	for (int i = 0; i < 10; i++) {
		ruka[i].print_karta();
	}
}
void Igrac::bodovi() {
	int tempbrojac = 1, tempbrojac2 = 1;
	for (int i = 0; i < 10; i++) {
		if (ruka[i].napolitana() == 1) {
			for (int j = i + 1; j < 10; j++) {
				if ((ruka[i].zog_karta() == ruka[j].zog_karta()) && (ruka[j].napolitana() == 1)) {
					tempbrojac++;
				}
				if (ruka[i].broj_karta() == ruka[j].broj_karta()) {
					tempbrojac2++;
				}
			}
			if (tempbrojac == 3) {
				broj_bodova += tempbrojac;
			}
			if (tempbrojac2 == 4) {
				broj_bodova -= 3;
			}
			if (tempbrojac2 >= 3) {
				broj_bodova += tempbrojac2;
			}
			tempbrojac = 1;
			tempbrojac2 = 1;
		}
	}
}