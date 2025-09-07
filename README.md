# 🤖 Arduino Rover – Autonomous/Remote-Controlled Vehicle

## 📖 Project Overview  
This project is an **Arduino-powered rover** designed for exploration and automation tasks.  
It uses motor drivers and sensors to navigate, detect obstacles, and move in different directions.  

Depending on configuration, the rover can work as:  
- 🚗 A **remote-controlled car** (via Bluetooth/IR module).  
- 🛰️ An **autonomous rover** with obstacle avoidance.  

---

## ⚙️ Features  
- ✅ Forward, backward, left, right movement.  
- 🚧 Obstacle detection (if ultrasonic/IR sensors are attached).  
- 🔋 Powered by rechargeable battery pack.  
- ⚡ Motor driver (L293D / L298N) for motor control.  
- 📟 Serial monitor or Bluetooth app interface (optional).  

---

## 🛠️ Components Used  
- Arduino UNO (or Nano/compatible board)  
- L293D or L298N Motor Driver Module  
- DC Motors + Wheels (4WD or 2WD setup)  
- Ultrasonic Sensor (HC-SR04) for obstacle detection  
- Servo Motor (to rotate ultrasonic sensor – optional)  
- Bluetooth Module (HC-05/HC-06 – optional)  
- Battery Pack (Li-ion / 9V / power bank)  
- Jumper wires, Chassis, Breadboard  

---

## 🔌 Circuit Connections (Typical)  

| Component          | Arduino Pin |
|--------------------|-------------|
| Motor Driver IN1   | D8          |
| Motor Driver IN2   | D9          |
| Motor Driver IN3   | D10         |
| Motor Driver IN4   | D11         |
| Ultrasonic Trigger | D6          |
| Ultrasonic Echo    | D7          |
| Servo (optional)   | D5          |
| Bluetooth RX       | D2          |
| Bluetooth TX       | D3          |
| Power Supply       | 9V / 12V    |

*(Adjust according to your actual wiring and Rover.ino code.)*  

---

## 📜 How It Works  
1. **Motion Control** – Arduino sends HIGH/LOW signals to the motor driver to move the rover in desired directions.  
2. **Obstacle Detection** – Ultrasonic sensor measures distance; if an obstacle is detected, the rover stops or turns.  
3. **Remote Control (optional)** – Using a Bluetooth module, commands can be sent via mobile app to control movement.  

---

## 💻 Usage Instructions  
1. Assemble the rover chassis with DC motors and motor driver.  
2. Connect components as per wiring table.  
3. Upload `Rover.ino` to Arduino using the Arduino IDE.  
4. Power the rover with a suitable battery pack.  
5. If using Bluetooth, connect with a mobile app and send commands.  
6. Watch your rover navigate!  

---

## 🚀 Future Improvements  
- Add **GPS module** for navigation.  
- Use **ESP32/ESP8266** for IoT remote control.  
- Add **camera module** for live streaming.  
- Implement **line-following** or **maze-solving** algorithms.  

---
