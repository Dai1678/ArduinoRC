#include "EducateArduinoRC.h"

//左から、前進左タイヤ、右タイヤ、後退左タイヤ、右タイヤ、左回転右タイヤ、右回転左タイヤの調整値
RobotCommand rc(100,100,100,100,100,100);
int SW_PIN = 10;  //スイッチのピン番号

void setup() {
  pinMode(SW_PIN,INPUT_PULLUP);
  Serial.begin(9600); //通信速度は9600bps
}

void loop() {
  int check = digitalRead(SW_PIN);
  if(check == LOW){
    //スイッチが押されたときの処理
    Serial.println("ボタンが押されました");
    delay(100);
    while(digitalRead(SW_PIN)==LOW){}  

    /*
      前に進むとき rc.front(ミリ秒);
      後ろに進む rc.back(ミリ秒);
      左に回る rc.left(ミリ秒);
      右に回る rc.right(ミリ秒);
      止まる rc.wait(ミリ秒);
    */

    /*
      ミリ秒は1000分の1秒のこと
      例: 1秒は1000ミリ秒 -> 1秒動かしたいときは()の中に 1000 を入力
    */

    /*↓↓↓この下に書いてください↓↓↓*/

    

    /*↑↑↑この上に書いてください↑↑↑*/
    rc.wait(100);
  }
}
