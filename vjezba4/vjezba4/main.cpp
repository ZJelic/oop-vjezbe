#include "treseta.h"
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using namespace std;

int main() 
{
	Deck D;
	D.promijesaj_spil();
	//D.print_spil();

	int brojac = 0;
	vector <Igrac> igra;

	int broj_igraca;
	cout << "Unesite broj igraca (2 ili 4): ";
	cin >> broj_igraca;

	while (broj_igraca != 2 && broj_igraca != 4) {
		cout << "Pogresan unos! Unesite broj igraca (2 ili 4): ";
		cin >> broj_igraca;
	}

	while (broj_igraca > 0) {
		string unesi;
		cout << endl;
		cout << "Unesite ime igraca: ";
		cin >> unesi;
		Igrac prvi(unesi);
		prvi.dijeli(brojac, D);
		prvi.print_ruka();
		brojac += 10;
		broj_igraca--;
		igra.push_back(prvi);
	}
	cout << endl;

	for (int i = 0; i < igra.size(); i++) {

		cout << igra[i].get_name() << " akuza: " << igra[i].get_bodovi() << endl;
	}
}