#include <DHT.h>
#include <DHT_U.h>

#include <DHT.h>
#include <DHT_U.h>

#include <DHT.h>
#include <DHT_U.h>

#include <DHT.h>
#include <DHT_U.h>

#include <ESP8266WiFi.h>
#include <DHT.h>

// WiFi Credentials
const char* ssid = "Redmi";
const char* password = "123456789";

// DHT Setup
#define DHTPIN D4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Relay Pins
#define HEATER_PIN D5
#define COOLER_PIN D6   // NEW cooling relay

// Set Temperature
float setTemp = 30.0;

void setup() {
  Serial.begin(115200);

  pinMode(HEATER_PIN, OUTPUT);
  pinMode(COOLER_PIN, OUTPUT);

  digitalWrite(HEATER_PIN, HIGH); // OFF
  digitalWrite(COOLER_PIN, HIGH); // OFF

  dht.begin();

  // WiFi Connect
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to WiFi");
  Serial.println(WiFi.localIP());
}

void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Sensor error!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  // 🔥❄️ CSTR Control Logic
  if (temp < setTemp) {
    digitalWrite(HEATER_PIN, LOW);   // Heater ON
    digitalWrite(COOLER_PIN, HIGH);  // Cooler OFF
    Serial.println("Heater ON | Cooler OFF");

  } else if (temp > setTemp) {
    digitalWrite(HEATER_PIN, HIGH);  // Heater OFF
    digitalWrite(COOLER_PIN, LOW);   // Cooler ON
    Serial.println("Heater OFF | Cooler ON");

  } else {
    digitalWrite(HEATER_PIN, HIGH);  // Both OFF
    digitalWrite(COOLER_PIN, HIGH);
    Serial.println("System Stable (Both OFF)");
  }

  delay(2000);
}