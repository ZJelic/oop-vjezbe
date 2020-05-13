#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "player.h"
using namespace std;

class ComputerPlayer:public player
{
public:
	void set_round_temp();
};
#endif