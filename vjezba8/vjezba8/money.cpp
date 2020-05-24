#include <iostream>
#include "money.h"
using namespace std;

money::money(int kn, int lp) {
	this->kn = kn;
	this->lp = lp;
}
int money::get_kn() {
	return this->kn;
}
void money::set_kn(int kn) {
	this->kn = kn;
}
int money::get_lp() {
	return this->lp;
}
void money::set_lp(int lp) {
	this->lp = lp;
}
money operator+(money x, money y) {
	int kn = (x.kn + y.kn);
	int lp = (x.lp + y.lp);
	if (lp >= 100) {
		kn++;
		lp -= 100;
	}
	return money(kn, lp);
}
money operator-(money x, money y) {
	int kn = (x.kn - y.kn);
	int lp = (x.lp - y.lp);
	if (lp < 0) {
		kn--;
		lp += 100;
	}
	return money(kn, lp);
}
money money::operator+=(money x) {
	int tmp = 0;
	this->kn += x.kn;
	int lp = (x.lp + this->lp);
	if (lp >= 100) {
		tmp = lp - 100;
		this->lp = tmp;
		kn = kn + 1;
	}
	else
		this->lp += x.lp;

	return money(kn, lp);
}
money money::operator-=(money x) {
	int tmp = 0;
	this->kn -= x.kn;
	int lp = (this->lp - x.lp);
	if (lp < 0) {
		tmp = lp + 100;
		this->lp = tmp;
		this->kn -= 1;
	}
	else
		this->lp -= x.lp;

	return money(kn, lp);
}
ostream& operator<<(ostream& outOS, money &n) {
	return outOS << "racun:" << n.kn << "kn " << n.lp << "lp";
}
money::operator double() {
	return kn + lp / 100.0;
}