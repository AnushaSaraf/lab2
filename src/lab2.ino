const int potentiometerPin = A0;  // Pin connected to the potentiometer
const int ledPin = D7;            // Pin connected to the LED
int voltageLevel;                 // Variable to store the voltage level




/*
 * Project lab2
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
   Serial.begin(9600);     // Initialize serial communication
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  voltageLevel = analogRead(potentiometerPin);  // Read the voltage level from the potentiometer
  float blinkSpeed = map(voltageLevel, 0, 4095, 100, 1000);  // Map the voltage range to the desired blink speed range

  digitalWrite(ledPin, HIGH);   // Turn on the LED
  delay(blinkSpeed);             // Wait for the specified blink speed

  digitalWrite(ledPin, LOW);    // Turn off the LED
  delay(blinkSpeed);             // Wait for the specified blink speed

  Serial.println(voltageLevel);  // Print the voltage level to the Serial Monitor

}