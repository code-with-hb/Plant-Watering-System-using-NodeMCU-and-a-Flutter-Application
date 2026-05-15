#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <SoftwareSerial.h>

// LCD Setup
LiquidCrystal_I2C lcd(0x27, 16, 2);
// Moisture Sensor
const int dry = 550;
const int wet = 230;
const int threshold = 340;
const int moisturePin = A0;

// Water Pump
const int pumpPin = 2;

// DHT22
#define DHTPIN 3
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);