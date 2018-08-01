# robop-EducateArduinoRC
ロボPArduinoラジコンカーのプログラム  
Arduino IDEでラジコン動作関数を呼び出してマクロを組む

## インストール方法
1. masterブランチからClone、もしくはzipでダウンロード
2. パソコン内の~/Document/Arduino の中にEducateArduinoRCという名前でフォルダを作成
3. EducateArduinoRCフォルダ内に、Cloneもしくはzipの中身のファイルをすべて移動する
4. EducateArduinoRC.inoをArduino IDEで開き、ラジコンとパソコンをUSBケーブルで接続してコンパイル

## ラジコンを動かす関数の説明
前進するとき： rc.front(ミリ秒)
後退するとき：　　rc.back(ミリ秒)
左回転するとき: rc.left(ミリ秒)
右回転するとき：　 rc.right(ミリ秒)

※rcはモーターを動かす処理を書いているRobotCommandクラスのインスタンス変数

## ミリ秒の説明
モータードライバの仕様上、モーターの動作時間の指定はミリ秒にする必要がある。
1秒は1000ミリ秒。
