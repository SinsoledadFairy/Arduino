#开源性实战
> 黄琨
> 2019.7.2-2019.7.5

日期|内容
---|---|
2019.7.3|Morse
2019.7.4|car / CD4511
2019.7.5|Morse（无库函数版）/ 4个led7
##第一天 入门介绍
- 开源硬件是什么
- 为什么学习开源硬件
- 学习开源硬件需要哪些软件
###Arduino
![](./img/a.PNG)
###processing
![](./img/b.PNG)
###Fritzing
![](./img/c.PNG)
##第二天 软件操作
- Linux权限（rwx）
- Arduino基本命令
- Arduino库函数形式
- 运用Arduino编写Morse代码
![](./img/d.PNG)
###Morse.h
```c
#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/
```
###Morse.cpp
```c
#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
	Serial.begin(9600); 
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
```
[Morse.ino](Morse/Morse.ino)

##第三天 在线模拟
###car
![](img/car模拟图.png)
[car.ino](car/car.ino)
###led7
![](img/CD4511模拟图.png)
[led7.ino](CD4511/CD4511.ino)
##第四天 总结
###git 
- git clone
- git add.
- git commit -m" "
- git push
###Morse（无库函数版）
![](img/Morse模拟图.png)
[Morse（无库函数版）.ino](Morse（无库函数版）/Morse.ino)
###4个led7
![](img/d.png)
[4个led7.ino](4个led7/led.ino)





