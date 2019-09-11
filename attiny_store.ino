

/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */


#include "DigiKeyboard.h"
#include <EEPROM.h>

unsigned int address = 0; 
  int returned;

struct tus{
 unsigned int no;
};
  
void setup()
{
  //tus butus;
  int i;
  Serial.begin(9600);
   returned = EEPROM.get(address, i);
   EEPROM.put(address, 12345);

}

void loop() {
    DigiKeyboard.println(returned);
  delay(2000);
}
