#include <Servo.h>
Servo servoa, servob, servoc, servod, servoe; // create servo object to control a servo
int currentMotor = 0;

int val = 0; // variable to read the value from the analog pin

void setup() {
 Serial.begin(9600);

 servoa.attach(3); // attaches the servo on pin to the servo object
 servob.attach(4); // attaches the servo on pin to the servo object
 servoc.attach(5); // attaches the servo on pin to the servo object
 servod.attach(6); // attaches the servo on pin to the servo object
 servoe.attach(7); // attaches the servo on pin to the servo object

 for (int i = 30; i <= 160; i++) {
 servoa.write(i);
 delay(8);
 }
 for (int i = 30; i <= 160; i++) {
 servoa.write(i);
 delay(5);
 }

 delay(80);

 for (int i = 10; i <= 110; i++) {
 servoc.write(i);
 servob.write(i);
 delay(10);
 }

 for (int i = 10; i <= 170; i++) {
 servoe.write(i);
 delay(15);
 }

 delay(80);

 servob.write(180);
 servoc.write(65);
 servod.write(55);
 servoe.write(90);
}


void loop() {
 if (Serial.available()) {
 val = Serial.read();

 if (val == 1) {
 currentMotor = 1;
 }

 else if (val == 2) {
 currentMotor = 2;
 }

 else if (val == 3) {
 currentMotor = 3;
 }

 else if (val == 4) {
 currentMotor = 4;
 }

 else if (val == 5) {
 currentMotor = 5;
 }
 //val = map(val, 0, 255, 10, 179);
 }
 if (currentMotor == 1) {
 servoa.write(val); // sets the servo position according to the scaled value
 delay(1);
 } else if (currentMotor == 2) {
 servob.write(val); // sets the servo position according to the scaled value
 delay(1);
 } else if (currentMotor == 3) {
 servoc.write(val); // sets the servo position according to the scaled value
 delay(1);
 } else if (currentMotor == 4) {
 servod.write(val); // sets the servo position according to the scaled value
 delay(1);
 } else if (currentMotor == 5) {
 servoe.write(val); // sets the servo position according to the scaled value
 delay(1);
 }
}
