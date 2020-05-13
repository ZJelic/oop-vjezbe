#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class player {
protected:
	string name;
	int points;
	bool par;
	int round_temp;
public:
	player();
	int get_round();
	void set_par(bool boolVar);
	bool get_par();
	void set_name(string name);
	string get_name();
	int get_points();
	void set_points(int points);
	virtual void set_round_temp() = 0;
};
#endif