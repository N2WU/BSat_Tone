#include <toneAC.h>
#include "LowPower.h"

const int xpin = A3;                  // x-axis of the accelerometer
const int ypin = A2;                  // y-axis
const int zpin = A1;                  // z-axis (only on 3-axis models)

//speaker must be pin 9 and 10

int freq = 1000;

void setup() {

}

void loop() {
  
  if (analogRead(xpin) == 0 && analogRead(ypin) == 0 && analogRead(zpin) == 0){
    toneAC(freq); // Play frequency
    delay(1000);
    toneAC(); //no tone
    delay(1000);
  }
  
  LowPower.idle(SLEEP_8S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
  toneAC(); // Play no frequency
  delay(100);     // Wait 100 ms for loop
  
}
