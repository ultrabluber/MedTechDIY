#include <Servo.h>
Servo myservo;
int pos = 0; //Servo Position Variable
const int slowpin = 2;
const int middlepin = 3;
const int fastpin = 4;
  int SlowState = 0;
  int MiddleState = 0;
  int FastState = 0;
void setup() {
  //Outputs
  pinMode(slowpin, INPUT);
  pinMode(middlepin, INPUT);
  pinMode(fastpin, INPUT);
myservo.attach(9);
Serial.begin(9600);
}

void loop() {
//BUTTON READOUT
  SlowState = digitalRead(slowpin);
  MiddleState = digitalRead(middlepin);
  FastState = digitalRead(fastpin);
//Servoindividuell
if (SlowState == HIGH) {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
else if (MiddleState == HIGH){
for (pos = 0; pos <= 180; pos += 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(40);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(40);                       // waits 15ms for the servo to reach the position}
  }
}
    else if (FastState == HIGH){
      for (pos = 0; pos <= 180; pos += 10) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 10) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
    }
    }
}
