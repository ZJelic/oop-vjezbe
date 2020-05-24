#include <iostream>
#include "money.h"
using namespace std;

int main()
{
	// zadan je jednostavan cjenik
	money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);
	// gost je konzumirao:
	money racun = juha + becki + salata + pivo;
	// na zalost nas konobar je nepazljiv pa pivo treba stornirati
	racun -= pivo;
	// i dodati babic
	racun += babic;
	cout << racun << endl;
	//double
	cout << "racun:" << double(racun) << "kn" << endl;
}
