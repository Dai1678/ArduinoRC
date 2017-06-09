#ifndef ArduinoRC_h
#define ArduinoRC_h

#include "arduino.h"
#include "SoftwareSerial.h"

class RobotCommand
{
public:
	RobotCommand(int right_frontPower, int left_frontPower, int right_backPower, int left_backPower, int right_Power, int left_Power);
	void moterControl(String select);
	void front();
	void back();
	void left();
	void right();
	void wait();

private:
	int val = 100;  //モーター基礎出力量

	//モーター追加出力量
	int frontPower_r ;
	int frontPower_l ;

	int backPower_r ;
	int backPower_l ;

	int power_r ;

	int power_l ;
};

#endif
