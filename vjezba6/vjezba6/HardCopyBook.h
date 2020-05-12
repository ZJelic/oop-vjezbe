#ifndef HARDCOPYBOOK_H
#define HARDCOPYBOOK_H
#include "book.h"
#include <string>
using std::string;

class HardCopyBook:public Book {
	int brojStranica;
public:
	HardCopyBook(string autor, string naslovKnjige, int godinaIzdanja, int brojStranica);
	~HardCopyBook();
	int getBrojStranica();
};
#endif