#ifndef IGRAC_H
#define IGRAC_H

#include <iostream>
#include <string>
#include <vector>
#include "karta.h"
#include "deck.h"
using namespace std;

class Igrac {
	public:
		friend class Karta;
		friend class Deck;
		Igrac();
		Igrac(string);
		~Igrac();
		string get_name() const;
		void dijeli(int, Deck);
		void print_ruka() const;
		void bodovi();
		int get_bodovi();
		void set_name(string new_ime);
		void set_bodovi(int new_bodovi);
		void set_ruka(vector <Karta> ruka);
		vector<Karta>get_ruka();
	private:
		string ime;
		vector <Karta> ruka;
		int broj_bodova;
};
#endif;