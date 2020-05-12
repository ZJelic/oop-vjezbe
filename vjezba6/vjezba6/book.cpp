#include "book.h"
#include <string>
using namespace std;
using std::string;

Book::Book(string autorNew, string naslovNew, int godinaIzdanjaNew) {
	autor = autorNew;
	naslov = naslovNew;
	godinaIzdanja = godinaIzdanjaNew;
}

Book::~Book() {
}

string Book::getAutor() {
	return this->autor;
}

string Book::getNaslovKnjige() {
	return this->naslov;
}

int Book::getGodinaIzdanja() {
	return this->godinaIzdanja;
}