# Smart-Trash-Can
Arduino-based smart trash can that automatically opens its lid when an object is detected nearby

Overview

This project uses an ultrasonic (sonar) distance sensor to detect objects within 2 inches of the trash can. When an object enters the detection range, a servo motor rotates 90°, pushing a cardboard mechanism attached to the lid to open it automatically. After a short delay, the servo returns to its original position, allowing the lid to close.

Features
Automatic hands-free lid opening
Ultrasonic sensor detects objects within 2 inches
Servo motor rotates 90° to open the lid
Simple cardboard linkage for the lid mechanism
Low-cost and easy-to-build design
Components
Arduino (Uno, Nano, or compatible)
HC-SR04 Ultrasonic Distance Sensor
Servo Motor (SG90 or similar)
Cardboard lid mechanism
Breadboard and jumper wires
Power supply
How It Works
The ultrasonic sensor continuously measures the distance to nearby objects.
When an object is detected within 2 inches, the Arduino sends a signal to the servo motor.
The servo rotates 90°, pushing the cardboard arm attached to the lid.
The lid opens automatically, allowing hands-free disposal of trash.
After a brief delay, the servo returns to its starting position, closing the lid.
Future Improvements
Add an infrared sensor for improved detection.
Include a battery-powered version for portability.
Add an OLED display to show system status.
Implement power-saving modes.
Design and 3D-print a more durable lid mechanism.
License

This project is open source and available under the MIT License.
