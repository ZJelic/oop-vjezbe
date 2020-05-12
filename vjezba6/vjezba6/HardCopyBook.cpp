#include "HardCopyBook.h"
#include <string>
using namespace std;

HardCopyBook::HardCopyBook(string autorNew, string naslovKnjigeNew, int godinaIzdanjaNew, int brojStranicaNew):Book(autorNew, naslovKnjigeNew, godinaIzdanjaNew) {
	brojStranica = brojStranicaNew;
}

HardCopyBook::~HardCopyBook() {
}

int HardCopyBook::getBrojStranica() {
	return this->brojStranica;
}