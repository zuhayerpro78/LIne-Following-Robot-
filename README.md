# LIne-Following-Robot-
This is a line following robot with three proximity sensors. This is a version 1 I will make other versions in the future.
I am making a three proximity sensor line following robot. It is a robot which runs following a black line which proceeds the bot to the specific destination. Normally people makes a two proximity sensor robot. But that robot has normal functions but this one has a little bit advanced function. It can detect the 90 degree lines and 40 degree line that makes it advanced. I am mainly making this project to help the people who wanted to make a easy line following robot but a little bit advanced that is why three proximity sensors which will help to detect the 90 degree line and also 40 degree lines. Making with three proximity sensors is not so easy but coding is a little bit confusing if you are a beginner. I am also a beginner. This is V.1 Line Following Robot. I will also make other versions of it so stay tune. So that is all below is all the steps and requirements you will need for making this project.
To make this three proximity sensors line following robot we need some components. They are listed below:
1)Three IR Sensors

2)Two Gear Motor

3)Arduino Uno/Nano

4)L298N Motor Driver

5)Two Wheel

6)12/9 Volt Battery

7)Jumper Wires

8)Caster Wheel

9)Chassis
Now I will describe the connections to you

Left sensor >> Arduino Uno

VCC >> 5V
GND >> GND
OUT >> A0

Center sensor >> Arduino Uno

VCC >> 5V
GND >> GND
OUT >> A1

Right sensor >> Arduino Uno

VCC >> 5V
GND >> GND
OUT >> A2


L298N >> Arduino Uno

EA >> 10
IN 1 >> 2
IN 2 >> 3
IN 3 >> 4
IN 4 >> 5
EB >> 11
5Volt >> 5Volt
GND >> GND
Give 12Volt to L298N's 12Volt.
Now I will show you how my Line Following Robot works. (//I am usingProximity sensors withActive High Output//)

To Go Straight:
When the Centersensor will detect black line.
The two other sensors will detect white surface.
The two Motors will go clockwise/right.

To Go Left:
When the Leftsensor will detect black line.
The other two sensors will detect white surface.
The Left Motor will stop.
The Right Motor will go clockwise/right.

To Go right:
When the Rightsensor will detect black line.
The other two sensors will detect white surface.
The Right Motor will stop.
The Left Motor will go clockwise/right.

To Go 90 Degree Left:
When the Center andLeftsensors will detect black line.
The Right sensor will detect white surface.
The Right Motor will goclockwise/right.
TheLeft Motorwill go counter clockwise/left.

To Go 90 Degree Right:
When the Center andRight sensors will detect black line.
The Left sensor will detect white surface.
The Left Motor will goclockwise/right.
TheRight Motor will go counter clockwise/left.

To Go 40 Degree Left:
When the Center andLeftsensors will detect black line.
The Right sensor will detect white surface.
The Right Motor will goclockwise/right.
TheLeft Motorwill go counter clockwise/left.

To Go 40 Degree Right:
When the Center andRight sensors will detect black line.
The Left sensor will detect white surface.
The Left Motor will goclockwise/right.
TheRight Motor will go counter clockwise/left.
To stop:
When all thesensor will detect black line.
The two Motors will go stop.

In this way this Line Following Robot will work. It has 90 Degree and 40 Degree turns and it can also detect 90 Degree and 40 Degree lines. This is full description of how this robot will work.

You will also have to tune the potentiometer of the sensors so that when they black line the output light in the sensor will turn off and when detect white surface it will turn on. 
