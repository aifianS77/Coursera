#include <stdio.h>;

// define variables
const int LED_PIN = 13;  // Define the pin number for the LED
const int FAST_BLINKS = 5;  // Number of fast blinks
const int SLOW_BLINKS = 5;  // Number of slow blinks

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set the LED pin as an output
}

// put in void loop for continuous blinking
void loop() {
  // Fast blinks
  for (int i = 0; i < FAST_BLINKS; ++i) {
    digitalWrite(LED_PIN, HIGH);  // Turn on the LED
    delay(500);  // Wait for 0.5 seconds
    digitalWrite(LED_PIN, LOW);  // Turn off the LED
    delay(500);  // Wait for 0.5 seconds
  }
  
  // Slow blinks
  for (int i = 0; i < SLOW_BLINKS; ++i) {
    digitalWrite(LED_PIN, HIGH);  // Turn on the LED
    delay(2000);  // Wait for 2 seconds
    digitalWrite(LED_PIN, LOW);  // Turn off the LED
    delay(2000);  // Wait for 2 seconds
  }
}
