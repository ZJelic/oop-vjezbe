#include "game.h"
#include "computerplayer.h"
#include "humanplayer.h"
#include <iostream>

void game::par_nepar()
{
	int numberOfPlayers = 0;
	cout << "Unesite 0 za dva CP igraca, 1 za dva HUMAN igraca ili 2 za jednog HUMAN-a i jednog CP-a" << endl;
	cout << "Unesite broj igraca:" << endl;
	cin >> numberOfPlayers;
	if (numberOfPlayers > 2) {
		cout << "Nepravilan unos!" << endl;
		return;
	}
	else if (numberOfPlayers == 0) {
		p1 = new ComputerPlayer;
		p2 = new ComputerPlayer;
	}
	else if (numberOfPlayers == 1) {
		p1 = new HumanPlayer;
		p2 = new HumanPlayer;
	}
	else if (numberOfPlayers == 2) {
		p1 = new HumanPlayer;
		p2 = new ComputerPlayer;
	}
	int points = 0;
	int par = 0;
	cout << "Unesite max broj bodova:" << endl;
	cin >> points;

	string name;
	cout << "Unesite ime 1:" << endl;
	cin >> name;
	p1->set_name(name);
	cout << "Unesite ime 2:" << endl;
	cin >> name;
	p2->set_name(name);
	cout << "Igrac broj 1 -> unesite 1 za par ili 0 za nepar:" << endl;
	cin >> par;
	if (par > 1) {
		cout << "Error!";
		return;
	}
	else if (par == 1) {
		p1->set_par(true);
		p2->set_par(false);
	}
	else if (par == 0) {
		p1->set_par(false);
		p2->set_par(true);
	}
	while (true)
	{
		int  score = 0;
		p1->set_round_temp();
		p2->set_round_temp();
		score = p1->get_round() + p2->get_round();
		if (score % 2 == 0) {
			if (p1->get_par() == true)
				p1->set_points(p1->get_points() + 1);
			else
				p2->set_points(p2->get_points() + 1);
		}
		else {
			if (p1->get_par() == false)
				p1->set_points(p1->get_points() + 1);
			else
				p2->set_points(p2->get_points() + 1);
		}
		if ((points == p1->get_points()) || (points == p2->get_points())) {
			if (p1->get_points() == points)
				cout << "Pobjednik:" << p1->get_name() << endl;
			else
				cout << "Pobjednik:" << p2->get_name() << endl;
			break;
		}
	}
	delete p1;
	delete p2;
}