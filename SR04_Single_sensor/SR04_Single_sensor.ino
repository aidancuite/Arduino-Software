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

String distances[3];

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
  Sensor_Three.Unlock = true;
}

void loop() {
    // Distance read for Sensor One

        if ( Sensor_One.Read() > -1 ) {
        // New distance reading!
        if ( Sensor_One.Distance == 0 ) {
        //    Serial.println("clear I");
              distances[0] = "clear";
        } else {
            // -------------
         //   Serial.print(Sensor_One.Distance);
        //    Serial.println(" cm I");
              distances[0] = String(Sensor_One.Distance);
        }
    }

    // Distance read for Sensor Two
    if ( Sensor_Two.Read() > -1 ) {
        // New distance reading!
        if ( Sensor_Two.Distance == 0 ) {
        //    Serial.println("clear II");
              distances[1] = "clear";
        } else {
            // -------------
        //    Serial.print(Sensor_Two.Distance);
        //    Serial.println(" cm II");
        distances[1] = String(Sensor_Two.Distance);
        }
    }
     // Distance read for Sensor Three
     if ( Sensor_Three.Read() > -1 ) {
        // New distance reading!
        if ( Sensor_Three.Distance == 0 ) {
          //  Serial.println("clear III");
              distances[2] = "clear";
        } else {
            // -------------
            //Serial.print(Sensor_Three.Distance);
            //Serial.println(" cm III");
              distances[2] = String(Sensor_Three.Distance);
        }
    }
    
    
    Serial.println(String(distances[0]) + " cm I " + String(distances[1]) + " cm II " + String(distances[2]) + " cm III ");  
    delay(300);
    }
 
