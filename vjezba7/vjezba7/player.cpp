#include "player.h"
#include "humanplayer.h"
#include "computerplayer.h"
#include <iostream>
using namespace std;

player::player() {
	points = 0;
}
int player::get_round() {
	return round_temp;
}
void player::set_par(bool boolVar) {
	par = boolVar;
}
bool player::get_par() {
	return par;
}
void player::set_name(string name) {
	this->name = name;
}
string player::get_name() {
	return name;
}
void player::set_points(int points) {
	this->points = points;
}
int player::get_points() {
	return points;
}