#include <ArduinoRC.h>

//右から、前進右タイヤ、左タイヤ、後退右タイヤ、左タイヤ、左回転右タイヤ、右回転左タイヤの調整値
RobotCommand rc(0,0,0,0,0,0);
SoftwareSerial BT(10, 11);

void setup() {
	BT.begin(9600);
  Serial.begin(38400);
}

String btString;
int MAX_BLUETOOTH_SIZE = 4;

void loop() {
	int n = BT.available();
	if ( n >= MAX_BLUETOOTH_SIZE ) {
		char ch[MAX_BLUETOOTH_SIZE];
		int i;
		// 4バイトずつ読み込む
		  for (i=0; i<MAX_BLUETOOTH_SIZE; i++) {
			  ch[i] = BT.read();
		  }

		  rc.moterControl(ch);
  }
}
