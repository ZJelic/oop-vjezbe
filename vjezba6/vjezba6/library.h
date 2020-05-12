#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <vector>
#include <string>
using std::string;
using namespace std;

class Library {
public:
	~Library();
	vector<Book*> knjige;
	vector<string> getNasloveKnjiga(string autor);
	float ukupnoMB(string autor);
	vector<string> getDioNaslova(string dio);
};
#endif
