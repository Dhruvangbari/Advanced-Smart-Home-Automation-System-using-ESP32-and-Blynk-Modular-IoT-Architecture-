# Advanced Smart Home Automation System using ESP32 & Blynk 🏠⚡

Modular ESP32 smart home automation project using 4-channel relay and Blynk mobile app.
# Advanced Smart Home Automation System using ESP32 & Blynk 🏠⚡  
Control your home with scalable IoT architecture.

This project implements an **advanced smart home automation system** using an **ESP32**, a **4-channel relay module**, and the **Blynk IoT mobile application**.

Unlike beginner projects, this system follows a **modular embedded firmware architecture**, separating relay control, WiFi handling, and configuration logic — making it scalable for real-world IoT applications.

Smart control. Clean architecture. Real scalability.

---

## 🧠 Project Overview

ESP32 connects to WiFi and communicates with the Blynk cloud platform.  
Users can control home appliances remotely using the Blynk mobile app.

### System Architecture


---

## ⚡ Key Features

- Control multiple appliances remotely
- ESP32 WiFi-based IoT system
- Modular multi-file firmware design
- Safe startup (all relays OFF)
- Scalable architecture for future expansion
- Clean separation of logic (production-style design)
- Real-time switching via mobile app

---

## 📂 Project Structure


This structure follows **professional embedded firmware practices**.

---

## 🔧 Hardware Requirements

- ESP32 Development Board  
- 4-Channel Relay Module  
- AC Loads (Bulb / Fan / Appliances)  
- 5V Power Supply  
- Smartphone with Blynk IoT App  

⚠️ Relay modules control AC mains. Use proper safety precautions.

---

## 🔌 Pin Connections

| ESP32 GPIO | Relay Channel |
|------------|--------------|
| GPIO26 | IN1 |
| GPIO27 | IN2 |
| GPIO14 | IN3 |
| GPIO12 | IN4 |

---

## 📱 Blynk Setup

1. Install **Blynk IoT App**
2. Create ESP32 device template
3. Add 4 button widgets:
   - V0 → Relay 1
   - V1 → Relay 2
   - V2 → Relay 3
   - V3 → Relay 4
4. Copy Auth Token into:


---

## 💻 Firmware Logic

- ESP32 connects to WiFi
- Blynk sends commands to virtual pins
- Relay module switches appliances
- Modular code handles control cleanly

---

## 🚀 Future Expansion

- Voice Assistant Integration (Alexa / Google)
- Timer automation
- Energy monitoring
- OTA firmware updates
- MQTT cloud integration
- Scene-based automation

---

## 🎯 Applications

- Smart home automation
- IoT training and learning
- Remote appliance control
- Embedded IoT project portfolios
- Final-year engineering projects

---

## 🧠 Author
**Dhruvang Bari**

Built to demonstrate scalable IoT firmware design beyond basic automation examples.


## Features
- Control 4 appliances from mobile app
- Modular multi-file firmware structure
- Safe startup (all relays OFF)
- Expandable architecture

## Author
Dhruvang Bari
