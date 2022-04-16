#include <toneAC.h>

const int xpin = A3;                  // x-axis of the accelerometer
const int ypin = A2;                  // y-axis
const int zpin = A1;                  // z-axis (only on 3-axis models)

//speaker must be pin 9 and 10

void setup() {

}

void loop() {
  
  if (analogRead(xpin) == 0 && analogRead(ypin) == 0 && analogRead(zpin) == 0){
    toneAC(freq); // Play frequency
    delay(100);
  }
  
  toneAC(); // Play no frequency
  delay(100);     // Wait 1 ms for loop
  
}
