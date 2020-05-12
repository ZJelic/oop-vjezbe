#ifndef BOOK_H
#define BOOK_H
#include<string>
using std::string;

class Book {
protected:
	string autor;
	string naslov;
	int godinaIzdanja;
public:
	Book(string autor, string naslov, int godinaIzdanja);
	~Book();
	string getAutor();
	string getNaslovKnjige();
	int getGodinaIzdanja();
};
#endif