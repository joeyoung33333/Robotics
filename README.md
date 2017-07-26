# Robotics Repository

The Robotis Repository is a collection of my own personal projects I completed during my first year and a half in college. The code is a constant work in progress, and I hope the projects show my progression as a roboticist. Feel free to comment and edit my work. 


# Improvements for the Future

Since my Freshman year in college, I have changed my major to Computer Science. When I created these projects I had minimal coding expereince (as you can probably tell), but since then I have take numerous CS classes. Bellow are some of the improvements I will make:

Robot Arm II
-Record movements in an array to play back the sequence (repeated movement for assembly line work)
-Animate the movements for the Robot Arm 
-IK equation for the Robot Arm

Robot Spider
-Q-Learning Algorithm to teach it how to move forward


# Robot Arm I
Updated on Feb 25, 2016
I used an Arduino Uno board to physically manipulate Robot Arm I and a Graphic Interface (created in Processing) that communicated with the Arduino Board (through Firmata). The purpose of the Robot Arm is to pick up small objects like legos or blocks and move them from one place to another with more accuracy than a human hand. Using servo motors meant that I could move within 1 degree of accuracy for each given motor and hold the Robot Arm in place with less fatigue and error than a human arm. Ultimately, this project has served as a small prototype for a much larger Robot Arm that I hope to create in the future that will lift heavier objects.

For photos and videos:

https://youtu.be/Uu6A36jE06k
Code (by Joseph Young):

https://github.com/joeyoung33333/project-arduino-c/blob/master/Robot-Arm-I-Arduino

https://github.com/joeyoung33333/project-arduino-c/blob/master/Robot-Arm-I-Processing

3D Printable File (by bentommye):

http://www.thingiverse.com/thing:34829
Components: 3D Printer/Filament; 9 Gram Servos/Parts, Glue; Laser Cutter and Acrylic; Arduino Uno Board; Arduino IDE; Processing Software and P5 Controller Library

Note: All code was written by me for this project.


# Robot Arm II
Updated on Mar 10, 2016
Robot Arm II is the second project of my three project progression series for Robotic Arms. Robot Arm II is a project that I set out to create in order to help introduce robotics to high school students. Having no previous experience in robotics prior to college, I regret not participating in robotics and programming earlier. In high school, robotics and programming seemed like a daunting task for the select few who were intelligent enough, but by using the Arduino platform I hope to introduce robotics to many more high school students and break down any barriers holding them back.

Robot Arm II is an updated version of a previous project and is made from CNC Aluminum Bracket mounts, high powered servo motors, and a dual joystick remote control. Robot Arm II features a turntable at the base to distribute the weight by taking off pressure from the servo motor at the base, 20kg servos and a 30kg servo for the motor on top of the base plate, easy-to-use controllers with intuitive functions like clicking to grip or dual motor controls, and a red dot laser to point at objects to grab. The base and controller were laser cut from particle board and made on Adobe Illustrator for this specific project.

For videos of Robot Arm II:

https://youtu.be/iFpupKP2mC8

https://youtu.be/5rwuFg2B6Ho

Code:

https://github.com/joeyoung33333/project-arduino-c/blob/master/Robot-Arm-II-Arduino


# Robot Spider
Updated Agust 12, 2016
Robot Spider is based on the Arduino Mega platform and uses an inverse kinematic equation to control its movements. Currently, Robot Spider (Darby) is able to walk forward, rotate, move up and down, and swivel. For testing purposes, I have a light sensor to control the different modes or I can type in desired movements into the Arduino Serial Monitor. Robot Spider (Darby) has several animated modes within his program allowing him to rotate, move up and down, and swivel. The robot is still in its infancy stage and I hope to continue to update GitHub with future progress. My end goal is to have Robot Spider (Darby) move autonomously through his environment using pressure sensors on his feet to stop movement on uneven surfaces, and use an accelerometer to re-balance his base while he climbs obstacles. The accelerometer would also work to display gravitational effects on Robot Spider (Darby), that would normally not appear with his pre-built function. I hope to build a project similar to Boston Dynamics Spot, but at a much lower cost and simple design so anyone can try and built it!

For photos and videos:

https://youtu.be/UttGU5epf_o
Code (by Joseph Young and IK by Nakata)

https://github.com/joeyoung33333/project-arduino-c/blob/master/Robot-Spider-Darby-V1
Components: DFRobot Mega 2560 with Shield; 6 Different Types of Metal Brackets (U-Bracket, Short U-Bracket, Inclined Bracket, Straight Bracket, Servo Bracket, and L-Bracket); 12x JX Servo Motors (Rated at 20 KG of Torque); 2x NI-MH Batteries connected in Parallel; DFRobot Ambient Light Sensor (Analog); Cable Extensions; M3-M4 Screws and Bolts; Laser cut Particle Board;

Note: The inverse kinematic equation was taken from an open source project.
