#include <Adafruit_Sensor.h>
#include <DHT.h>
#include "AzureIotConfig.h"
#include <ArduinoIoTCloud.h>

#define DHTPIN D1  // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11  // DHT 11

DHT dht(DHTPIN, DHTTYPE);

WiFiConnectionHandler ArduinoIoTPreferredConnection("WIFISSID", "password");

float tempValue;
float humidityValue;

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  ArduinoCloud.setDeviceId("95c6936b-182c-427b-9fda-e9a90bf22c7d");
  ArduinoCloud.setSecretDeviceKey("3BQYNX0ODKIQ3JTR9M");
  ArduinoCloud.addProperty(tempValue, Permission::Read).publishOnChange(10);
  ArduinoCloud.addProperty(humidityValue, Permission::Read).publishOnChange(10);
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
}

void loop() {
  ArduinoCloud.update();
  
  delay(2000);
  
  tempValue = dht.readTemperature();
  humidityValue = dht.readHumidity();
  
  if (isnan(tempValue) && isnan(humidityValue)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  Serial.print("Temperature: ");
  Serial.print(tempValue);
  Serial.print(" Humidity: ");
  Serial.print(humidityValue);
  Serial.println("%");
}