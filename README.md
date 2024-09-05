# IoT Temperature and Humidity Monitoring System

## 🌡️ Project Overview

This project implements an Internet of Things (IoT) system that measures environmental humidity and temperature using a DHT11 sensor. The data is collected by an ESP8266 module (NodeMCU) and uploaded to the Arduino IoT Cloud, making it accessible to users over the internet.

## ✨ Key Features

- Real-time temperature and humidity monitoring
- Data upload to Arduino IoT Cloud
- Remote access to sensor data via web interface
- Easy setup with NodeMCU and DHT11 sensor

## 🛠️ Technologies Used

- NodeMCU ESP8266 WiFi module
- DHT11 temperature and humidity sensor
- Arduino IoT Cloud
- Arduino IDE

## 📁 Repository Structure

```
.
├── src/
│   └── main.ino           # Main Arduino sketch file
├── hardware/
│   ├── wiring_diagram.png # Wiring diagram for the project
│   └── components.md      # List of hardware components and specifications
├── docs/
│   └── setup_guide.md     # Step-by-step guide for setting up the project
└── README.md              # This file
```

## 🚀 Getting Started

### Prerequisites

- Arduino IDE installed
- Arduino IoT Cloud account
- NodeMCU ESP8266 board
- DHT11 sensor

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/alexdemirtzoglou/iot-temp-humidity.git
   ```
2. Open `src/main.ino` in Arduino IDE
3. Install required libraries (ESP8266WiFi, DHT sensor library)
4. Configure your WiFi credentials and Arduino IoT Cloud settings
5. Upload the code to your NodeMCU board

## 📊 Usage

After setting up the hardware and uploading the code:

1. Power on your NodeMCU device
2. Log in to your Arduino IoT Cloud dashboard
3. View real-time temperature and humidity data

## 📝 License

Note: This is a university project and is not licensed for distribution or use outside of academic evaluation.

## 👤 Author

Alexandros Demirtzoglou
- Student ID: 50107150
- Email: ee07150@uniwa.gr
- GitHub: [@alexdemirtzoglou](https://github.com/alexdemirtzoglou)

## 🙏 Acknowledgements

- This project was submitted to Dimitris Pyromalis as part of a semester assignment.
- Special thanks to the Arduino community for their extensive documentation and tutorials.

## 📚 References

1. [LastMinuteEngineers.com - ESP8266 DHT11/DHT22 Web Server Tutorial](https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/)
2. [Grobotronics.com - NodeMCU and DHT11 sensor specifications](https://grobotronics.com/)
3. [Arduino Project Hub - Arduino IoT Cloud documentation](https://create.arduino.cc/projecthub/products/arduino-iot-cloud)
