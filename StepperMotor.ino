#include <Stepper.h>

const int stepsPerRevolution = 64;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);


void setup() {
  
  myStepper.setSpeed(60);
}

void loop() {

  	myStepper.step(stepsPerRevolution);
  	delay(1000);
  	myStepper.step(-stepsPerRevolution);  
  	delay(1000);
  }
