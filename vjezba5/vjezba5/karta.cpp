#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "karta.h"

using namespace std;

Karta::Karta(string zogg, string brojj) {
	zog = zogg;
	broj = brojj;
	//cout << "Konstruktor klasa karta" << endl;
}
Karta::~Karta() {
	//cout << "Destruktor klasa karta" << endl;
}

string Karta::zog_karta() const {
	return zog;
}

string Karta::broj_karta() const {
	return broj;
}