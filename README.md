# 🎯 Crisp Aim

> A simple Arduino-based project that simulates smooth mouse movement to demonstrate how hardware can influence game inputs.
---

## 🔖 Table of Contents

- [Project Overview](#project-overview)
- [🎯 Objective](#objective)
- [🧰 Materials Needed](#materials-needed)
- [🔌 Wiring Diagram](#wiring-diagram)
- [📦 Code: Crisp Aim Simulator](#code-crisp-aim-simulator)
- [🧠 How It Works](#how-it-works)
- [📘 Educational Concepts Covered](#educational-concepts-covered)
- [⚠️ Ethical Use & Disclaimer](#ethical-use--disclaimer)
- [📚 Report / Presentation Suggestions](#report--presentation-suggestions)
- [💡 Future Enhancements](#future-enhancements)

---

## 📌 Project Overview

This project explores how an Arduino board (Leonardo or Pro Micro) can be used to simulate human-like mouse movements. While it resembles the behavior of an "aim assist," it's intended strictly for learning about **Human Interface Devices (HID)**, **input automation**, and **anti-cheat detection strategies** in gaming environments.

---

## 🎯 Objective

To understand:
- How hardware can simulate mouse input
- The mechanics behind precise aiming in FPS games
- How anti-cheat systems may detect unnatural input patterns
- The importance of ethics and responsible use of such knowledge

---

## 🧰 Materials Needed

| Component | Quantity | Description |
|----------|----------|-------------|
| Arduino Board | 1 | Leonardo or **Pro Micro** (supports USB HID) |
| Push Button | 1 | Momentary tactile button |
| 10kΩ Resistor | 1 | For pull-down resistor circuit |
| Breadboard | 1 | To build the circuit |
| Jumper Wires | Several | Male-to-male |
| USB Cable | 1 | To connect Arduino to PC |

---

## 🔌 Wiring Diagram
[Push Button]
Pin 1 → 5V
Pin 2 → Arduino Pin 2
↳ Also connected to one end of 10kΩ resistor
[Resistor]
Other end → GND


