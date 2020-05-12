#include "EBook.h"
#include <string>
using namespace std;

EBook::EBook(string autor, string naslovKnjige, int godinaIzdanja, string imeDatotekeNew, float velicinaMBnew):Book(autor, naslovKnjige, godinaIzdanja) {

	imeDatoteke = imeDatotekeNew;
	velicinaMB = velicinaMBnew;
}

EBook::~EBook() {
}

string EBook::getImeDatoteke() {
	return this->imeDatoteke;
}

float EBook::getVelicinaMB() {
	return this->velicinaMB;
}