#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include <vector>
#include"karta.h"
using namespace std;

class Deck {
	public:
		Deck();
		~Deck();
		void print_spil() const;
		void promijesaj_spil();
		Karta karta_van(int) const;
		friend class Karta;
		void set_spil(vector <Karta> spil);
		vector <Karta> get_spil(vector <Karta> spil);
	private:
		vector <Karta> spil;
};
#endif;