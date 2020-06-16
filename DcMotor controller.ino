‪int pwm1 = 3;‬
‪int in1 = 8;‬
‪int in2 = 9;‬
‪int pwm2 = 5;‬
‪int in3 = 11;‬
‪int in4 = 10;‬

‪void setup()‬
‪{‬
‪  pinMode(in1, OUTPUT);‬
‪  pinMode(in2, OUTPUT);‬
‪  pinMode(pwm1, OUTPUT);‬
‪  pinMode(in3, OUTPUT);‬
‪  pinMode(in4, OUTPUT);‬
‪  pinMode(pwm2, OUTPUT);‬
‪}‬

‪void loop()‬
‪{‬
‪    // rotate motor1 clockwise ‬
‪    digitalWrite(in1, HIGH);‬
‪    digitalWrite(in2, LOW);‬
‪    analogWrite(pwm1, 255);‬

‪    // rotate motor2 counterclockwise‬
‪    digitalWrite(in3, LOW);‬
‪    digitalWrite(in4, HIGH);‬
‪    analogWrite(pwm2, 255);‬
‪  ‬
‪    delay(3000); // Wait for 3000 millisecond(s)‬
‪    ‬
‪    // stop motor1 ‬
‪    digitalWrite(in1, HIGH);‬
‪    digitalWrite(in2, HIGH);‬


‪    // stop motor2 ‬
‪    digitalWrite(in3, HIGH);‬
‪    digitalWrite(in4, HIGH);‬

‪    delay(1000); // Wait for 1000 millisecond(s)‬
‪  ‬
‪}‬