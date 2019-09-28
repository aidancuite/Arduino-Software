// SENSOR DEMO
#include "SRF05.h"

int trigPin_One = 2;
int echoPin_One = 3;

int trigPin_Two = 4;
int echoPin_Two = 5;

int trigPin_Three = 6;
int echoPin_Three = 7;

int trigPin_Four = 8;
int echoPin_Four = 9;

int trigPin_Five = 10;
int echoPin_Five = 11;

// trigPin, echoPin, MaxDist, readInterval
SRF05 Sensor_One(trigPin_One, echoPin_One, 600, 300);
SRF05 Sensor_Two(trigPin_Two, echoPin_Two, 600, 300);
SRF05 Sensor_Three(trigPin_Three, echoPin_Three, 600, 300);
SRF05 Sensor_Four(trigPin_Four, echoPin_Four, 600, 100);
SRF05 Sensor_Five(trigPin_Five, echoPin_Five, 600, 100);

void setup() {
    Serial.begin(9600);
  // If using SR04 enable the following line:
  Sensor_One.Unlock = true;
  Sensor_Two.Unlock = true;
}

void loop() {
    // Distance read for Sensor One
    if ( Sensor_One.Read() > -1 ) {
        // New distance reading!
        if ( Sensor_One.Distance == 0 ) {
            Serial.println("clear I");
        } else {
            // -------------
            Serial.print(Sensor_One.Distance);
            Serial.println(" cm I");
        }
    }

    // Distance read for Sensor Three
    if ( Sensor_Two.Read() > -1 ) {
        // New distance reading!
        if ( Sensor_Two.Distance == 0 ) {
            Serial.println("clear II");
        } else {
            // -------------
            Serial.print(Sensor_Two.Distance);
            Serial.println(" cm II");
        }
    }
     // Distance read for Sensor Two
     if ( Sensor_Three.Read() > -1 ) {
        // New distance reading!
        if ( Sensor_Three.Distance == 0 ) {
            Serial.println("clear III");
        } else {
            // -------------
            Serial.print(Sensor_Three.Distance);
            Serial.println(" cm III");
        }
    }
 }
