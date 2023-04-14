#include <DHT.h>

#define DHTPIN 2          // The pin on which DHT11 data pin is connected
#define DHTTYPE DHT11     // DHT11 sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000); // Wait for 2 seconds between measurements
  
  float humidity = dht.readHumidity();    // Read humidity value from the sensor
  float temperature = dht.readTemperature(); // Read temperature value from the sensor
  
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t"); // Tab character for formatting
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C\n"); // Newline character for formatting
}
