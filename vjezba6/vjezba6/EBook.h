#ifndef EBOOK_H
#define EBOOK_H
#include "book.h"
#include <string>
using std::string;

class EBook:public Book {
	string imeDatoteke;
	float velicinaMB;
public:
	EBook(string autor, string naslovKnjige, int godinaIzdanja, string imeDatoteke, float velicinaMB);
	~EBook();
	string getImeDatoteke();
	float getVelicinaMB();
};
#endif