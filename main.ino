#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <FS.h>
#include "index.h"

const char* ssid = "<CHANGE WIFI SSID>";
const char* password = "<CHANGE WIFI PASSWORD>";

ESP8266WebServer server(80);

void setup() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

void handleRoot() {
  String s = MAIN_page;
  server.send(200, "text/html", s);
}