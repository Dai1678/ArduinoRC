#include <CPProbotlib.h>


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

    /*↓↓↓ここに書いてください↓↓↓*/


    rc.front(1000);

    rc.wait(500);

    rc.back(1000);

    rc.wait(500);

    rc.left(1000);

    rc.wait(500);

    rc.right(1000);

    /*↑↑↑ここに書いてください↑↑↑*/
    rc.wait(100);
  }
}
