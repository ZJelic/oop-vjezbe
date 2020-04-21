#ifndef KARTA_H
#define KARTA_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Karta {
	public:
		Karta();
		Karta(string, string);
		~Karta();
		void print_karta() const;
		string broj_karta() const;
		string zog_karta() const;
		int napolitana() const;
	private:
		string broj, zog;
};
#endif;