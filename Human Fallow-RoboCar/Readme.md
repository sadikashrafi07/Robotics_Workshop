# Human Follow-RoboCar

## Abstract
The Human Follow-RoboCar is an autonomous vehicle designed to follow a human by utilizing ultrasonic sensors and infrared (IR) sensors for obstacle avoidance and path tracking. This project uses an Arduino Uno, an Adafruit Motor Shield, and a servo motor to control the robot's movements, ensuring it can navigate through various environments while maintaining a safe distance from the person it is following.

## Features
- **Human Following**: The RoboCar follows a person by continuously measuring distance using an ultrasonic sensor and adjusting its path based on IR sensor readings.
- **Obstacle Avoidance**: Detects and avoids obstacles using ultrasonic sensors to prevent collisions.
- **Servo Scanning**: Utilizes a servo motor to scan the environment for better obstacle detection and path planning.
- **Motor Control**: Employs an Adafruit Motor Shield to control the speed and direction of four DC motors.

## Components Used
- Arduino Uno R3
- Adafruit Motor Shield
- HC-SR04 Ultrasonic Sensor
- Infrared (IR) Sensors (2)
- 4 DC Motors
- Servo Motor
- Jumper Wires
- 9V Battery
- Switch

## Setup and Deployment Instructions
1. **Hardware Setup**:
   - Connect the ultrasonic sensor to the Arduino (TRIGGER_PIN to A1, ECHO_PIN to A0, VCC to 5V, and GND to GND).
   - Connect the IR sensors to the Arduino (RIGHT to A2 and LEFT to A3, VCC to 5V, and GND to GND).
   - Attach the servo motor to pin 10 of the Arduino.
   - Connect the DC motors to the Adafruit Motor Shield.
   - Attach the motor shield to the Arduino.
2. **Software Upload**:
   - Upload the `human_follow_robocar.ino` sketch to the Arduino Uno board using the Arduino IDE.
3. **Power Up and Testing**:
   - Power up the RoboCar using a 9V battery and ensure all components are powered.
   - Test the RoboCar to ensure it follows a person and avoids obstacles correctly.

## Algorithm Overview
- The `setup` function initializes the motor speeds, sets up the serial communication, and performs initial servo movements.
- The `loop` function continuously:
  - Measures distance to obstacles using the ultrasonic sensor.
  - Reads values from the IR sensors to detect the path.
  - Adjusts motor speeds and directions based on sensor readings:
    - **Move Forward**: When the path is clear and a person is detected within a certain range.
    - **Turn Left**: When the right IR sensor detects a deviation from the path.
    - **Turn Right**: When the left IR sensor detects a deviation from the path.
    - **Stop**: When no obstacles are detected or the person is out of range.
    - **Move Backward**: When a very close obstacle is detected.

## Tech Stack
- **Hardware**: Arduino, Adafruit Motor Shield, Ultrasonic Sensor, IR Sensors, Servo Motor, DC Motors
- **Software**: Arduino IDE, C++ for embedded programming

## Objective Achieved
This project demonstrates the integration of multiple sensors and motor control to create a robotic car that can autonomously follow a human and avoid obstacles. It showcases the ability to perform real-time decision-making and path adjustment, making it suitable for applications in automated following systems.

## Learning Outcomes
- Gains practical experience with Arduino and sensor integration.
- Learns how to control DC motors using the Adafruit Motor Shield.
- Understands the principles of obstacle avoidance and human-following algorithms.
- Enhances skills in embedded programming and real-time systems.

## Motivation
The primary motivation for building this project was to explore the capabilities of autonomous robots in following a human and avoiding obstacles. By developing a versatile Human Follow-RoboCar, the project aims to provide a practical learning experience in the field of robotics and embedded systems.

## Wiring Diagram
![Wiring Diagram](circuit.jpg)

## Feedback
We value your input and are committed to providing you with the best possible experience. If you have any suggestions, feedback, or if there's an idea you'd like us to consider, please don't hesitate to reach out to us at angadimohammadsadiq@gmail.com.
