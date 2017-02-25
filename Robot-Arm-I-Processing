import processing.serial.*;
import controlP5.*;

Serial port;
ControlP5 cp5;

int myColor = color(255);

void setup() {
 size(500, 640);

 cp5 = new ControlP5(this);

 cp5.addSlider("Clamp")
 .setPosition(10, 535)
 .setWidth(450)
 .setHeight(35)
 .setRange(50, 160)
 .setNumberOfTickMarks(30)
 .setSliderMode(Slider.FLEXIBLE)
 ;

 cp5.addSlider("Wrist")
 .setPosition(15, 10)
 .setSize(55, 500)
 .setRange(10, 170)
 .setNumberOfTickMarks(55)
 ;

 cp5.addSlider("Elbow")
 .setPosition(115, 10)
 .setSize(55, 500)
 .setRange(10, 130)
 .setNumberOfTickMarks(40)
 ;

 cp5.addSlider("Shoulder")
 .setPosition(215, 10)
 .setSize(55, 500)
 .setRange(60, 175)
 .setNumberOfTickMarks(35)
 ;

 cp5.addSlider("Base")
 .setPosition(10, 585)
 .setWidth(450)
 .setHeight(35)
 .setRange(10, 170) // values can range from big to small as well
 .setNumberOfTickMarks(55)
 .setSliderMode(Slider.FLEXIBLE)
 ;

 cp5.addButton("Up")
 .setValue(90)
 .setPosition(300, 10)
 .setSize(180, 50)
 ;

 cp5.addButton("Down")
 .setValue(175)
 .setPosition(300, 80)
 .setSize(180, 50)
 ;

 cp5.addButton("ClampClose")
 .setValue(160)
 .setPosition(300, 150)
 .setSize(180, 50)
 ;

 println("Available serial ports:");
 println(Serial.list());

 port = new Serial(this, Serial.list()[3], 9600);
}

void draw() {
 background(35);
}


void Clamp(int val) {
 println("Clamp "+val);
 port.write(1);
 port.write(val);
}

void Wrist(int val) {
 println("Wrist "+val);
 port.write(2);
 port.write(val);
}

void Elbow(int val) {
 println("Elbow "+val);
 port.write(3);
 port.write(val);
}

void Shoulder(int val) {
 println("Shoulder "+val);
 port.write(4);
 port.write(val);
}

void Base(int val) {
 println("Base "+val);
 port.write(5);
 port.write(val);
}

void Up(int val) {
 println("Up "+val);
 port.write(2);
 port.write(3);
 port.write(4);
 port.write(val);
}

void Down(int val) {
 println("Down "+val);
 port.write(2);
 port.write(3);
 port.write(4);
 port.write(val);
}

void ClampClose(int val) {
 println("ClampClose "+val);
 port.write(1);
}
