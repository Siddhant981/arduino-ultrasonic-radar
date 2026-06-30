# Arduino Ultrasonic Radar System (Servo-Based Scanning)

A real-time Arduino-based radar simulation system that uses an HC-SR04 ultrasonic sensor and servo motor to scan the environment, detect objects, and display distance data in a 180° range.
This project is built and tested using Tinkercad simulation.

## Project Objective

To simulate a basic radar system that can:

Scan the surrounding area using servo rotation
Detect objects using ultrasonic sensing
Display real-time distance data based on angle position

## Components Used

Arduino Uno - Main microcontroller
HC-SR04 Ultrasonic Sensor - Measures distance using sound waves
SG90 Servo Motor - Rotates sensor (0°–180° sweep)
LED	Proximity alert - indicator
Jumper Wires - Circuit connections

## How It Works

The servo motor rotates the ultrasonic sensor from 0° to 180° and back
At each angle, the sensor emits an ultrasonic pulse and calculates distance based on echo return time
The angle and distance values are printed on the Serial Monitor
If an object is detected within a defined threshold (≤ 100 cm), the LED turns ON

## Circuit Behavior Summary

Continuous angular sweep (radar-like motion)
Real-time distance measurement at each angle
LED-based proximity alert system
Serial output for live tracking of object position

## Key Features

180° scanning radar simulation
Real-time distance measurement
Serial Monitor data visualization
LED alert for nearby objects
Fully simulated in Tinkercad (no hardware required)

## Skills Learned

Arduino programming (C/C++)
Ultrasonic sensor interfacing (HC-SR04)
Servo motor control using Servo.h
Time-of-flight distance calculation using pulseIn()
Embedded systems logic design
Real-time sensor data processing
Circuit simulation using Tinkercad

## Tools Used

Tinkercad Circuits
Arduino IDE (C++)

## Future Improvements

Add graphical radar UI using Python or Processing
Integrate buzzer for audio alerts
Deploy on real hardware setup
Add adjustable detection range using potentiometer
Store scanned data for mapping visualization

## Project Type

Embedded Systems / IoT / Arduino (Beginner → Intermediate Level)

 ## Author - Siddhant Hirave
