# Bluetooth Control RoboCar

## Abstract
The Bluetooth Control RoboCar is a versatile vehicle designed for remote operation using a Bluetooth connection. This project employs an Adafruit Motor Shield to control the motors and an Arduino Uno to process Bluetooth commands, enabling the RoboCar to move in various directions and perform specific maneuvers.

## Features
- **Remote Control**: Operate the RoboCar via Bluetooth using a mobile app or another Bluetooth-enabled device.
- **Directional Commands**: Move the RoboCar forward, backward, left, right, and diagonally using specific Bluetooth commands.
- **Speed Control**: Adjust the speed of the RoboCar dynamically.
- **Real-Time Response**: Processes Bluetooth commands in real-time to ensure responsive control.

## Components Used
- Arduino Uno R3
- Adafruit Motor Shield
- HC-05 Bluetooth Module
- 4 DC Motors
- Jumper Wires
- 9V Battery
- Switch

## Setup and Deployment Instructions
1. **Hardware Setup**:
   - Connect the HC-05 Bluetooth module to the Arduino Uno (TX to RX, RX to TX, VCC to 5V, and GND to GND).
   - Connect the DC motors to the Adafruit Motor Shield.
   - Attach the motor shield to the Arduino.
2. **Software Upload**:
   - Upload the `bluetooth_control_robocar.ino` sketch to the Arduino Uno board using the Arduino IDE.
3. **Power Up and Testing**:
   - Power up the RoboCar using a 9V battery and ensure the Bluetooth module is powered.
   - Pair the Bluetooth module with your mobile device and send commands to control the RoboCar.

## Algorithm Overview
- The `setup` function initializes the motor speeds, sets up the serial communication for Bluetooth, and initializes the motors in a stopped state.
- The `loop` function continuously checks for available Bluetooth commands and executes the corresponding movement functions based on the received command:
  - **Move Forward**: Command 'R' initiates forward movement.
  - **Move Backward**: Command 'L' initiates backward movement.
  - **Turn Left**: Command 'D' initiates a left turn.
  - **Turn Right**: Command 'U' initiates a right turn.
  - **Top Right**: Command 'T' initiates a top right diagonal movement.
  - **Top Left**: Command 'F' initiates a top left diagonal movement.
  - **Bottom Right**: Command 'H' initiates a bottom right diagonal movement.
  - **Bottom Left**: Command 'G' initiates a bottom left diagonal movement.
  - **Stop**: Command 'S' stops all motors.

## Tech Stack
- **Hardware**: Arduino, Adafruit Motor Shield, HC-05 Bluetooth Module, DC Motors
- **Software**: Arduino IDE, C++ for embedded programming

## Objective Achieved
This project enables remote control of a robotic car via Bluetooth, demonstrating the integration of wireless communication and motor control. It highlights the ability to perform complex maneuvers and respond to real-time commands, making it suitable for various remote operation applications.

## Learning Outcomes
- Gains practical experience with Arduino and Bluetooth module integration.
- Learns how to control DC motors using the Adafruit Motor Shield.
- Enhances understanding of remote control systems and real-time decision-making.
- Improves skills in embedded programming and wireless communication.

## Motivation
The primary motivation for building this project was to explore the capabilities of remote-controlled robotics and wireless communication. By developing a versatile Bluetooth-controlled RoboCar, the project aims to provide a practical learning experience in the field of robotics and embedded systems.

## Feedback
We value your input and are committed to providing you with the best possible experience. If you have any suggestions, feedback, or if there's an idea you'd like me to consider, please don't hesitate to reach out to me at angadimohammadsadiq@gmail.com.
