/*
  Twinkle Code
  
  To upload to your  or Trinket:
  1) Select the proper board from the Tools->Board Menu (Arduino Gemma if
     teal, Adafruit Gemma if black)
  2) Select the uploader from the Tools->Programmer ("Arduino Gemma" if teal, 
   "USBtinyISP" if black Gemma)
  3) Plug in the Gemma into USB, make sure you see the green LED lit
  4) For windows, make sure you install the right Gemma drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds

  *7) Make sure that the red LED is pulsing when the Arduino IDE uploads the code. 
      It may take more than 10 seconds for the code to compile so additional presses may be needed.
*/
 
int led = 1; // blink 'digital' pin 1 - AKA the built in red LED
int alt = 0;

 
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(alt, OUTPUT);
 
}
 
// the loop routine runs over and over again forever:
void loop() {
    for(int i=0; i <= 255; i++)
    {
      int j = abs(i-255);
      analogWrite(led, i);
      analogWrite(alt, j);
      delay(2);
    }
    for(int i=255; i >= 0; i--)
    {
      int j = abs(i-255);
      analogWrite(led, i);
      analogWrite(alt, j);
      delay(2);
    }
}
