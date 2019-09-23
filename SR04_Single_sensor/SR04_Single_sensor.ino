// SENSOR DEMO
#include "SRF05.h"

int trigPin_One = ##;
int echoPin_One = ##;

// trigPin, echoPin, MaxDist, readInterval
SRF05 Sensor_One(trigPin_One, echoPin_One, 300, 500);

void setup() {
    Serial.begin(9600);
  // If using SR04 enable the following line:
  Sensor.Unlock = true;
}

void loop() {
    // Distance read
    if ( Sensor_One.Read() > -1 ) {
        // New distance reading!
        if ( Sensor.Distance == 0 ) {
            Serial.println("clear");
        } else {
            // -------------
            Serial.print(Sensor.Distance);
            Serial.println(" cm");
        }
    }
}
