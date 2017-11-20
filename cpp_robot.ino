#include <CPProbotlib.h>


//右から、前進右タイヤ、左タイヤ、後退右タイヤ、左タイヤ、左回転右タイヤ、右回転左タイヤの調整値
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


    rc.front(3000);

    rc.wait(1000);

    rc.back(3000);

    rc.wait(1000);

    rc.left(3000);

    rc.wait(1000);

    rc.right(3000);

    /*↑↑↑ここに書いてください↑↑↑*/
    rc.wait(100);
  }
}
