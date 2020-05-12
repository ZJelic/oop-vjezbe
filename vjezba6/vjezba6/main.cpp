#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <fstream>
#include "book.h"
#include "HardCopyBook.h"
#include "EBook.h"
#include "library.h"
using namespace std;
using std::string;

vector<string> splitStr(string line) {
	size_t pos = 0;
	string subString;
	string delimiter = "; ";
	vector<string> vSubStr;
	while ((pos = line.find(delimiter)) != string::npos) {
		subString = line.substr(0, pos);
		cout << subString << endl;
		vSubStr.push_back(subString);
		line.erase(0, pos + delimiter.length());
	}
	cout << line << endl;
	vSubStr.push_back(line);
	return vSubStr;
}

int main()
{
	ifstream fin("booksAndAutors.txt");
	vector<string> v;
	string line;

	//citanje i spremanje u vektor
	while (getline(fin, line))
		v.push_back(line);

	//ispis vektora
	vector<string>::iterator iter;
	Library popisKnjiga;
	for (iter = v.begin(); iter != v.end(); ++iter) {
		line = *iter;
		cout << line << endl;
		vector<string> subStr = splitStr(line);
		if (subStr.size() == 3) {
			HardCopyBook* book = new HardCopyBook(subStr[1], subStr[1], 0, stoi(subStr[2]));
			popisKnjiga.knjige.push_back(book);
		}
		else if (subStr.size() == 4) {
			EBook* book = new EBook(subStr[0], subStr[1], 0, subStr[2], stof(subStr[3].substr(0, subStr[3].size() - 3)));
			popisKnjiga.knjige.push_back(book);
		}
	}

	vector<string> knjigePisca = popisKnjiga.getNasloveKnjiga("Neal Stephenson");
	cout << "Knjige pisca: " << "Neal Stephenson" << endl;
	for (int i = 0; i < knjigePisca.size(); i++) {
		cout << knjigePisca[i] << endl;
	}

	float countMB = popisKnjiga.ukupnoMB("Aldous Huxley");
	cout << "Velicina u MB:" << countMB << endl;

	vector<string> dioNaslov = popisKnjiga.getDioNaslova("Manga");
	cout << "Slicni naslovi: " << endl;
	for (int i = 0; i < dioNaslov.size(); i++) {
		cout << dioNaslov[i] << endl;
	}
}