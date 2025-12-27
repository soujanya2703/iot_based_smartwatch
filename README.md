# IoT Based Smart Watch 

An Arduino Nano-based wearable IoT device designed for real-time location tracking and cellular communication. This project integrates GPS for precise positioning and GSM for SMS-based alerts, managed by a high-efficiency power regulation system.

## Project Features
* Real-time GPS Tracking: Retrieves latitude and longitude co-ordinates.
* GSM Communication: Sends SMS alerts and location links to a predefined mobile number.
* Efficient Power Management: Utilizes a DC-DC Buck Converter to regulate Lithium-Ion battery output.
* User Input: Includes a push button for SOS/emergency triggers and a hard switch for power control.

---

## Hardware Components

| Component | Purpose |
| :--- | :--- |
| **Arduino Nano** | System Microcontroller |
| **SIM800L / SIM900A** | GSM Module for Cellular Connectivity |
| **Neo-6M GPS Module** | Satellite Positioning |
| **Lithium-Ion Battery** | 7.4V (2S) or 11.1V (3S) Power Source |
| **DC-DC Buck Converter** | Steps down battery voltage to stable 5V |
| **Push Button** | SOS Alert / User Trigger |
| **Key/Slide Switch** | Main Power Toggle |

---
## 🧠 Working Principle
1. The system is powered using a lithium-ion battery with a DC-DC buck converter.
2. Pressing the SOS button triggers the Arduino Nano.
3. The GPS Module collects the location coordinates.
4. The GSM module sends an SMS containing a Google Maps location link.
5. A call is also initiated to the emergency contact.
  

---
## Software Setup
### Prerequisites
1.  **Arduino IDE:** Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
### The project requires the following Arduino libraries:
1. **SoftwareSerial**: To enable multiple serial communications on digital pins.

### Implementation Steps
1. Connect the hardware according to circuit diagram given.
2. Ensure the GSM module has a valid SIM card with the PIN lock disabled.
3. Upload the firmware using the Arduino IDE.
4. Open the Serial Monitor at 9600 baud to view system status.

---

