#include <Arduino.h>
#include <ESP8266WiFi.h> // This slib has the specific wifi routines for Nodemcu

const char* ssid = "Incognito";
const char* password = "biscuits";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  WiFi.begin(ssid,password);

  Serial.print("Connecting...");

  //checks the status of the wifi. 
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println("Waiting to connect to WiFi");
  }

  Serial.print("WiFi is connected to ");
  Serial.print(WiFi.localIP()); 
}

void loop() {
  // put your main code here, to run repeatedly:
}