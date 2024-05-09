# Line Following RoboCar

## Abstract
The Line Following RoboCar is an autonomous vehicle designed to navigate by following a line on the ground using infrared (IR) sensors. This project leverages simple yet effective components to demonstrate the principles of autonomous robotics and sensor integration.

## Features
- **Autonomous Navigation**: The RoboCar can navigate through its environment without human intervention by following a line.
- **Line Detection and Following**: Uses IR sensors to detect and follow a line on the ground.
- **Real-Time Decision Making**: Processes sensor data in real-time to make navigation decisions.
- **Adjustable Parameters**: Speed and sensitivity to line detection can be adjusted for different environments and requirements.

## Components Used
- Arduino Uno R3
- Infrared Sensors (Connected to A0 and A1)
- Adafruit Motor Shield
- 4 DC Motors
- Jumper Wires
- 9V Battery
- Switch

## Setup and Deployment Instructions
1. **Hardware Setup**:
   - Connect the IR sensors to pins A0 (lefts) and A1 (rights) on the Arduino Uno board.
   - Connect the DC motors to the Adafruit Motor Shield.
   - Attach the motor shield to the Arduino.
2. **Software Upload**:
   - Upload the `line_following_robocar.ino` sketch to the Arduino Uno board using the Arduino IDE.
3. **Power Up and Testing**:
   - Power up the RoboCar using a 9V battery and place it on a flat surface with a clear line to follow.
   - Observe the RoboCar's movement and its ability to follow the line detected by the IR sensors.

## Algorithm Overview
- The `setup` function initializes the motor speeds and sets up the sensor input pins and serial communication.
- The `loop` function continuously reads the values from the left and right sensors and makes decisions based on these values:
  - **Move Forward**: If both sensors detect values <= 400, the RoboCar moves forward.
  - **Turn Right**: If the left sensor detects a value <= 400 and the right sensor detects a value > 400, the RoboCar turns right.
  - **Turn Left**: If the left sensor detects a value > 400 and the right sensor detects a value <= 400, the RoboCar turns left.
  - **Stop**: If both sensors detect values > 400, the RoboCar stops.

## Tech Stack
- **Hardware**: Arduino, Infrared Sensors, Adafruit Motor Shield, DC Motors
- **Software**: Arduino IDE, C++ for embedded programming

## Objective Achieved
This project addresses the challenge of autonomous navigation in robotics by following a line. It demonstrates how a robot can use sensor data to make real-time decisions, thereby following a path and navigating safely through an environment.

## Learning Outcomes
- Gains practical experience with Arduino and sensor integration.
- Learns how to control DC motors using the Adafruit Motor Shield.
- Enhances understanding of line-following algorithms and real-time decision-making.
- Improves skills in embedded programming and real-time system control.

## Motivation
The primary motivation for building this project was to explore the basics of autonomous robotics and sensor integration. By developing a simple yet functional line-following robot, the project aims to provide a hands-on learning experience in the field of robotics and embedded systems.

## Feedback
We value your input and are committed to providing you with the best possible experience. If you have any suggestions, feedback, or if there's an idea you'd like me to consider, please don't hesitate to reach out to me at angadimohammadsadiq@gmail.com
