# Arduino Radar

## Overview

A sonar-style object detection system built using an Arduino Uno, HC-SR04 ultrasonic sensor, and SG90 servo motor.

The ultrasonic sensor is mounted on the servo and continuously scans an area between 20° and 160°. Distance measurements are transmitted over serial communication to a browser-based sonar interface built with HTML and JavaScript.

## Features

* Real-time object detection
* Servo-based angular scanning
* Browser-based sonar visualization
* Persistent fading echo effects
* Distance and angle measurement

## Hardware Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* Breadboard
* Jumper Wires

## Software Used

* Arduino IDE
* HTML
* JavaScript
* Web Serial API

## Working Principle

1. The SG90 servo rotates the ultrasonic sensor between 20° and 160°.
2. At each angle, the HC-SR04 measures the distance to nearby objects.
3. Arduino sends angle and distance data through UART.
4. The browser receives the data using the Web Serial API.
5. The sonar interface displays object echoes on a radar-style screen.

## Circuit Diagram

https://github.com/pavitra-prajapati/Radar-Arduino/blob/df20ff129ea66e603c0a0d0a49860b17579171d7/radar_circuit_diagram.png

## Project Images

https://github.com/pavitra-prajapati/Radar-Arduino/blob/df20ff129ea66e603c0a0d0a49860b17579171d7/radar_setup.jpeg

## Challenges Faced

* Servo jitter caused by insufficient power.
* Sweep range causing mechanical strain near servo limits.
  
## Solutions

* Restricted servo movement to 20°–160°.
* Optimized scan speed.

## Learning Outcomes

* Ultrasonic distance measurement
* Servo motor control using PWM
* UART communication
* Browser-to-hardware communication
* Embedded system debugging
* Real-time data visualization

## Future Improvements

* 360° scanning using a rotating platform
* Multiple sensor support
* Object tracking

## Author

Pavitra Prajapati

