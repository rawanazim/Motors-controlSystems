‪/*‬
‪  Sweep‬

‪  by BARRAGAN <http://barraganstudio.com>‬
‪  This example code is in the public domain.‬

‪  modified 8 Nov 2013  by Scott Fitzgerald‬
‪  http://www.arduino.cc/en/Tutorial/Sweep‬
‪*/‬

‪// Modified 15 June 2020 by Rawan Mohammed Azim Ahmed, SMART METHODS TRAINING PROGRAM!‬

‪#include <Servo.h>‬

‪int pos = 0;‬

‪Servo servo_9;‬
‪Servo servo_10;‬

‪void setup()‬
‪{‬
‪  servo_9.attach(9);‬
‪  servo_10.attach(10);‬

‪}‬

‪void loop()‬
‪{‬
‪  ‬
‪  // sweep servo2 from 0 to 90 immediately‬
‪  int pos2=90;‬
‪  servo_10.write(pos2);‬

‪  // sweep the servo1 from 0 to 180 degrees in steps of 1 degree‬
‪  for (pos = 0; pos <= 180; pos += 1) {‬

‪    servo_9.write(pos);‬

‪    delay(15); // Wait for 15 millisecond(s)‬
‪  }‬
‪  ‬
‪  // sweep servo2 from 90 to 0 immediately‬
‪  pos2 = 0;‬
‪  servo_10.write(pos2);‬
‪  ‬
‪  // sweep servo1 back to its position‬
‪  for (pos = 180; pos >= 0; pos -= 1) {‬

‪    servo_9.write(pos);‬

‪    delay(15); // Wait for 15 millisecond(s)‬
‪  }‬
‪}‬