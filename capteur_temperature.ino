#include <DHT.h>
#include <DHT_U.h>


#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN,  DHTTYPE);
void setup(){
  Serial.begin(9600);
  Serial.print("starting");

  dht.begin();
 }
 void loop() {
      float h = dht.readHumidity();
      float t = dht.readTemperature();
      Serial.print("Humidité : ");
      Serial.println(h);
      Serial.print("Température : ");
      Serial.println(t);
  
  }
