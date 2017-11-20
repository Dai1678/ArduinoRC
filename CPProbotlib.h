#ifndef CPProbotlib_h
#define CPProbotlib_h

#include "Arduino.h"

class RobotCommand
{
public:
	RobotCommand(int right_frontPower, int left_frontPower, int right_backPower, int left_backPower, int right_Power, int left_Power);
	void front(int time);
	void back(int time);
	void left(int time);
	void right(int time);
	void wait(int time);

private:
	int val = 0;  //モーター基礎出力量

	//モーター追加出力量
	int frontPower_r ;
	int frontPower_l ;

	int backPower_r ;
	int backPower_l ;

	int power_r ;

	int power_l ;
};

#endif
