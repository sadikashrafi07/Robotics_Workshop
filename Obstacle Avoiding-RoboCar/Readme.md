# Obstacle Avoiding Robocar

## Abstract
The Obstacle Avoiding Robocar is an autonomous vehicle designed to navigate through its environment by detecting and avoiding obstacles using an ultrasonic sensor. This project leverages simple yet effective components to demonstrate the principles of autonomous robotics and sensor integration.

## Features
- **Autonomous Navigation**: The robocar can navigate through its environment without human intervention.
- **Obstacle Detection and Avoidance**: Uses an ultrasonic sensor to detect obstacles and change direction to avoid collisions.
- **Real-Time Decision Making**: Processes sensor data in real-time to make navigation decisions.
- **Adjustable Parameters**: Speed and sensitivity to obstacles can be adjusted for different environments and requirements.

## Components Used
- Arduino Uno R3
- Ultrasonic Sensor HC-SR04
- L298N Motor Driver
- 4 DC Motors
- Servo Motor
- Jumper Wires
- 9V Battery
- Switch

## Setup and Deployment Instructions
1. **Hardware Setup**:
   - Connect the ultrasonic sensor and L298N motor driver to the Arduino Uno board as per the wiring diagram provided.
   - Connect the 4 DC motors to the L298N motor driver.
   - Attach the servo motor to the Arduino.
2. **Software Upload**:
   - Upload the `obstacle_avoiding_robocar.ino` sketch to the Arduino Uno board using the Arduino IDE.
3. **Power Up and Testing**:
   - Power up the robocar using a 9V battery and place it on a flat surface.
   - Observe the robocar's movement and its ability to avoid obstacles detected by the ultrasonic sensor.

## Algorithm Overview
- The `setup` function initializes the servo position and measures the initial distance to the obstacle.
- The `loop` function continuously checks the distance to the nearest obstacle. If an obstacle is detected within 15 cm, the robot stops, moves backward, and then looks left and right to decide which direction to turn. After turning, it resumes moving forward.
- The `readPing` function uses the ultrasonic sensor to measure distance.
- Movement functions (`moveStop`, `moveForward`, `moveBackward`, `turnRight`, and `turnLeft`) control the DC motors.
This code helps the robot navigate its environment by avoiding obstacles using simple logic based on sensor input.

## Tech Stack
- **Hardware**: Arduino, Ultrasonic Sensor, DC Motors, Servo Motor
- **Software**: Arduino IDE, C++ for embedded programming

## Objective Achieved
This project addresses the challenge of autonomous navigation in robotics. It demonstrates how a robot can use sensor data to make real-time decisions, thereby avoiding collisions and navigating safely through an environment.

## Learning Outcomes
- Gains practical experience with Arduino and sensor integration.
- Learns how to control DC motors using an L298N motor driver.
- Enhances understanding of autonomous navigation and obstacle avoidance algorithms.
- Improves skills in embedded programming and real-time system control.

## Motivation
The primary motivation for building this project was to explore the basics of autonomous robotics and sensor integration. By developing a simple yet functional obstacle-avoiding robot, the project aims to provide a hands-on learning experience in the field of robotics and embedded systems.

## Wiring Diagram
![Wiring Diagram](circuit.jpg)

## Feedback
We value your input and are committed to providing you with the best possible experience. If you have any suggestions, feedback, or if there's an idea you'd like me to consider, please don't hesitate to reach out to me at angadimohammadsadiq@gmail.com

