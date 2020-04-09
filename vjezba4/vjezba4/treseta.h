#ifndef TRESETE_H
#define TRESETE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

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


class Deck {
public:
	Deck();
	~Deck();
	void print_spil() const;
	void promijesaj_spil();
	Karta karta_van(int) const;
	friend class Karta;
private:
	vector <Karta> spil;
};


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
private:
	string ime;
	vector <Karta> ruka;
	int broj_bodova;
};

#endif 