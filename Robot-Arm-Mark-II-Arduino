#include <Servo.h>

// create servo object to control a servo
Servo servoa, servob, servoc, servod, servoe, servof;

//JoyStick variables set values
//Note: JoyStick_X/Y/Z are for the first JoyStick Controller
//Note: JoyStick_XX/YY/ZZ are for the first JoyStick Controller
int JoyStick_X = 0; //x - will be connected to Analog (Blue) Pin 0
int JoyStick_Y = 1; //y - will be connected to Analog (Blue) Pin 1

int JoyStick_XX = 2; //xx - will be connected to Analog (Blue) Pin 2
int JoyStick_YY = 3; //yy - will be connected to Analog (Blue) Pin 3

int JoyStick_Z = 11; //Push Down Button - will be connected to Digital (Green) Pin 11
int JoyStick_ZZ = 12; //Push Down Button - will be connected to Digital (Green) Pin 12

//robot set values for println (eventually translated into digitalRead)
int robot_X = 35; //x 0 to 180 - Connected to JoyStick_X
int robot_Y = 180; //y 0 to 180 - Connected to JoyStick_Y

int robot_XX = 135; //x 0 to 180 - Connected to JoyStick_XX
int robot_YY = 90; //y 0 to 180 - Connected to JoyStick_YY

int robot_Z = 0; //key - Connected to JoyStick_Z
int robot_ZZ = 0; //key- Connected to JoyStick_ZZ

//Variables for robot_Z and robot_ZZ to change digital states
int previous = 1;
int current;
int count = 0;

int previousZZ = 1;
int currentZZ;
int countZZ = 0;



void setup()
{
 //Serial read allows connection to programs like Processing
 Serial.begin(9600); // 9600 bps

 //JoyStick_Z is an input
 pinMode(JoyStick_Z, INPUT);

 //Connects to Pin 10 as OutPut (laser)
 pinMode(10, OUTPUT);

 //Connects servos to digital pins (green)
 servoa.attach(3);
 servob.attach(4);
 servoc.attach(5);
 servod.attach(6);
 servoe.attach(7);
 servof.attach(8);

 delay(80);

 servoa.write(175);
 servob.write(180);
 servoc.write(35);
 servod.write(35);
 servoe.write(135);
 servof.write(90);
 digitalWrite(10, HIGH);

 delay(50);

 for (int i = 100; i <= 175; i++) {
 servoa.write(i);
 delay(15);
 }
 for (int i = 100; i <= 175; i++) {
 servoa.write(i);
 delay(15);
 }

 for (int i = LOW; i <= HIGH; i++) {
 digitalWrite(10, i);
 delay(500);
 }
 for (int i = LOW; i <= HIGH; i++) {
 digitalWrite(10, i);
 delay(500);
 }


 servoa.write(175);
 servob.write(180);
 servoc.write(35);
 servod.write(35);
 servoe.write(135);
 servof.write(90);
 digitalWrite(10, HIGH);
 delay(50);


}




void loop()
{
 //variables for reading joystick values
 int x, y, z, xx, yy, zz;

 //connecting variables to analogRead each joystick (X,XX,Y,YY)
 x = analogRead(JoyStick_X);
 y = analogRead(JoyStick_Y);
 xx = analogRead(JoyStick_XX);
 yy = analogRead(JoyStick_YY);

 //connecting variables to digitalRead each joystick (Z,ZZ)
 current = digitalRead(JoyStick_Z);
 currentZZ = digitalRead(JoyStick_ZZ);

 //println the current values of each JoyStick
 Serial.print("X:");
 Serial.print(x , DEC);
 Serial.print(", Y:");
 Serial.print(y , DEC);
 Serial.print(", Z:");
 Serial.print(z , DEC);

 Serial.print("XX:");
 Serial.print(xx , DEC);
 Serial.print(", YY:");
 Serial.print(yy , DEC);
 Serial.print(", ZZ:");
 Serial.print(zz , DEC);


 //JoyStick_X left and right motion controlling servo
 //Set range between 500 and 510 because stationary value is 505±3
 if (x < 500) { // moving my joystick left
 if (robot_X >= 1) { // so, move my robot x left
 robot_X = robot_X += 1; //decrease by incriments of 1
 }
 } else if (x > 510) { // moving my joystick right
 if (robot_X <= 179) { // so, move my robot x left
 robot_X = robot_X -= 1; //increase by incriments of 1
 }
 }


 //JoyStick_Y left and right motion controlling servo
 //Set range between 505 and 515 because stationary value is 509±3
 if (y < 470) { // moving my joystick down
 if (robot_Y >= 1) { // so, move my robot x down...
 robot_Y = robot_Y -= 3;
 }
 } else if (y > 481) { // moving my joystick up
 if (robot_Y <= 179) { // so, move my robot y down...
 robot_Y = robot_Y += 3;
 }
 }

 //JoyStick_XX left and right motion controlling servo
 //Set range between 500 and 510 because stationary value is 505±3
 if (xx < 437) { // moving my joystick left
 if (robot_XX >= 1) { // so, move my robot x left
 robot_XX = robot_XX += 3; //decrease by incriments of 1
 }
 } else if (xx > 447) { // moving my joystick right
 if (robot_XX <= 179) { // so, move my robot x left
 robot_XX = robot_XX -= 3; //increase by incriments of 1
 }
 }

 //JoyStick_YY left and right motion controlling servo
 //Set range between 505 and 515 because stationary value is 509±3
 if (yy < 418) { // moving my joystick down
 if (robot_YY >= 1) { // so, move my robot x down...
 robot_YY = robot_YY -= 3;
 }
 } else if (yy > 428) { // moving my joystick up
 if (robot_YY <= 179) { // so, move my robot y down...
 robot_YY = robot_YY += 3;
 }
 }


 //JoyStick_Z Push Up and Down motion controlling servo or laser
 if (current == 1 && current != previous) {
 count++;
 robot_Z = count % 2;
 }

 previous = current;

 //JoyStick_ZZ Push Up and Down motion controlling servo or laser
 if (currentZZ == 1 && currentZZ != previousZZ) {
 countZZ++;
 robot_ZZ = countZZ % 2;
 }

 previousZZ = currentZZ;



 //println robot values to later be used as servo values
 Serial.print("robot X:");
 Serial.print(robot_X , DEC);
 Serial.print(", robot Y:");
 Serial.print(robot_Y , DEC);
 Serial.print(", robot Z:");
 Serial.println(robot_Z , DEC);

 Serial.print("robot XX:");
 Serial.print(robot_XX , DEC);
 Serial.print(", robot YY:");
 Serial.print(robot_YY , DEC);
 Serial.print(", robot ZZ:");
 Serial.println(robot_ZZ , DEC);

 //connection back into pins
 digitalWrite(10, robot_ZZ); //Laser

 //sets the servo position according to the scaled value of Robot println
 z = map(digitalRead(robot_Z), 0, 1, 110, 180);
 servoa.write(z); //Gripper
 servob.write(robot_Y); //Wrist
 servoc.write(robot_X); //Forearm
 servod.write(robot_X); //Elbow
 servoe.write(robot_XX); //Shoulder
 servof.write(robot_YY); //Base

 delay(1); // waits for the servos to get there
}
