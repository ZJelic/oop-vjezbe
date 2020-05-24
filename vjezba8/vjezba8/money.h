#ifndef MONEY_H
#define MONEY_H
using namespace std;

class money {
		int kn;
		int lp;
	public:
		money(int kn, int lp=0);
		int get_kn();
		void set_kn(int kn);
		int get_lp();
		void set_lp(int lp);
		friend money operator+(money x, money y);
		friend money operator-(money x, money y);
		money operator+=(money x);
		money operator-=(money x);
		friend ostream& operator<<(ostream& outOS, money& n);
		operator double();
};
#endif