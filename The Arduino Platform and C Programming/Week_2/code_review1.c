void setup() {
  Serial.begin(9600); // Baud Rate 
  Serial.println("Fibonacci Sequence of First Six Digits:");
  int a = 0, b = 1, c;
  for (int i = 0; i < 6; ++i)
  {
    Serial.print(a); // Print value in Serial Port
    Serial.print("  "); 
    c = a + b;
    a = b;
    b = c;
  }
}

void loop() {

}