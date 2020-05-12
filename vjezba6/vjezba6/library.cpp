#include "library.h"
#include "EBook.h"
#include <vector>
#include <string>
using namespace std;

Library::~Library() {
	for (int i = 0; i < knjige.size(); i++)
	{
		delete (knjige[i]);
	}
	knjige.clear();
}

vector<string> Library::getNasloveKnjiga(string autor) {
	vector<string> nasloviKnjige;
	for (int i = 0; i < this->knjige.size(); i++) {
		if (this->knjige[i]->getAutor() == autor) {
			nasloviKnjige.push_back(this->knjige[i]->getNaslovKnjige());
		}
	}
	return nasloviKnjige;
};

float Library::ukupnoMB(string autor) {
	float countMB = 0;
	for (int i = 0; i < this->knjige.size(); i++) {
		if (this->knjige[i]->getAutor() == autor) {
			EBook *tmp = (EBook*)(this->knjige[i]);
			countMB += tmp->getVelicinaMB();
		}
	}
	return countMB;
};

vector<string> Library::getDioNaslova(string dio) {
	vector<string> dioNaslov;
	for (int i = 0; i < this->knjige.size(); i++) {
		if (this->knjige[i]->getNaslovKnjige().find(dio) != string::npos) {
			dioNaslov.push_back(this->knjige[i]->getNaslovKnjige());
		}
	}
	return dioNaslov;
};