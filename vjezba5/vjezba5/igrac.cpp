#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime> 
#include <cstdlib>
#include "igrac.h"
using namespace std;

Igrac::Igrac(string name) {
	ime = name;
	broj_bodova = 0;
	//cout << "Konstruktor klasa igrac" << endl;
}
Igrac::~Igrac() {
	//cout << "Destruktor klasa igrac" << endl;
}
void Igrac::set_name(string new_name) {
	this->ime = new_name;
}
string Igrac::get_name() const {
	return ime;
}
void Igrac::set_bodovi(int new_bodovi) {
	this->broj_bodova = new_bodovi;
}
int Igrac::get_bodovi() {
	bodovi();
	return broj_bodova;
}
void Igrac::set_ruka(vector<Karta> ruka)
{
	this->ruka = ruka;
}
vector<Karta> Igrac::get_ruka()
{
	return ruka;
}