# 🌡️ Temperature Detection System (IoT Project)

## 📌 Project Overview

This project is an **IoT-based Temperature Detection System** that monitors real-time temperature using a sensor and displays the data on a mobile application using the Blynk platform.

It is designed to provide **remote monitoring**, **real-time updates**, and **automation capabilities**.

---

## 🚀 Features

* 🌡️ Real-time temperature monitoring
* 📱 Mobile app integration (Blynk)
* 🌐 IoT-based remote access
* ⚡ Instant alerts (if configured)
* 🔌 Low-cost and easy to build
* 📊 Live data visualization

---

## 🛠️ Technologies Used

* **Hardware:**

  * ESP8266 (NodeMCU)
  * Temperature Sensor (e.g., DHT11 / LM35)
  * Jumper Wires
  * Breadboard

* **Software:**

  * Arduino IDE
  * Blynk IoT Platform
  * Embedded C / Arduino Code

---

## 🔌 Circuit Diagram

Connect the components as follows:

* Sensor VCC → 3.3V
* Sensor GND → GND
* Sensor Data Pin → GPIO (e.g., D2)

---

## 📂 Project Structure

```
Temperature-Detection-System/
│
├── S1.ino          # Main Arduino Code
├── README.md       # Project Documentation
```

---

## ⚙️ Setup Instructions

### 1️⃣ Install Required Software

* Install Arduino IDE
* Install ESP8266 board package

### 2️⃣ Install Libraries

Go to Arduino IDE → Library Manager and install:

* Blynk Library
* DHT Sensor Library (if using DHT11)

---

### 3️⃣ Configure Blynk

* Create account on Blynk
* Create new template
* Copy:

  * Template ID
  * Auth Token

---

### 4️⃣ Update Code

In your `.ino` file, update:

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"
```

Also update:

```cpp
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

---

### 5️⃣ Upload Code

* Select Board: **NodeMCU 1.0 (ESP8266)**
* Select correct COM Port
* Click Upload

---

### 6️⃣ Run Project

* Open Serial Monitor
* Open Blynk App
* View live temperature data

---

## 📱 Output

* Temperature displayed on Blynk mobile dashboard
* Real-time updates every few seconds

---

## 🔐 Security Considerations

* Keep your **Auth Token private**
* Do not share WiFi credentials
* Use secure network

---

## 📈 Future Enhancements

* Add humidity monitoring
* Add alert system (SMS/Email)
* Store data in cloud/database
* Web dashboard integration
* AI-based temperature prediction

---

## 👨‍💻 Author

**Gaurav Kanade**
IoT & Software Developer

---

## 📄 License

This project is open-source and free to use for educational purposes.

---

## 🙌 Acknowledgment

Thanks to:

* Arduino Community
* Blynk IoT Platform

---

⭐ If you like this project, give it a star on GitHub!
