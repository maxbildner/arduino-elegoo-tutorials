// 5- Digital Inputs
// Use 2 push buttons to turn an LED on and off
// Pressing button A will turn the LED on, while pressing the other button B
// will turn the LED off.

// 1) Define Pin integer variables or constants (nums refer to board pins)
int ledPin = 5;                                                                 // output pin
int buttonApin = 9;                                                             // 
int buttonBpin = 8;                                                             // 

// ? not used anywhere 
byte leds = 0;

// 2) The setup function runs once when you press reset or power the board
void setup() {

  // 3) Set the modes of the 3 pins we're using
  // pinMode(pin, mode) parameters:
  //    pin = number- of the pin whose mode you want to set (ex. 13)
  //    mode = constant- INPUT, OUTPUT, or INPUT_PULLUP
  //    no return value, but sets the corresponding pin to the given mode
  // - INPUT = the pin is in a high-impedance state
  //    - High Impedance = allows a small amount of current to pass through (ex. reading a sensor)
  //    - Impedance (Z) = measure of the total opposition to the current flow in an alternating current circuit
  //    - By default, all pins are set to INPUT
  // - OUTPUT = the pin is in a low-impedance state
  //    - Low Impedance = can provide a substantial amount of current to other circuits (ex. powering LEDs)
  // - INPUT_PULLUP = Pin is to be used as an input, but if nothing else is 
  //   connected to the input, it should be “pulled up” too HIGH. In other 
  //   words, the default value for the input is HIGH, unless it is pulled LOW 
  //   by the action of pressing the button
  pinMode(ledPin, OUTPUT);                                                      // set pin 5 on board to have a mode of OUTPUT
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

// 4) The loop function runs over and over again forever (after setup())
void loop() {
 
  // digitalRead( pin )
  //  - Pin = integer number of pin you want to read 
  //  - Returns => HIGH or LOW 
  //  - Effect: reads the input pin. If button is pressed, input = LOW

  // 5) if button A is pressed, turn LED ON
  if (digitalRead(buttonApin) == LOW) {                                         
    digitalWrite(ledPin, HIGH);                                                 // set voltage of ledPin to 5V
  }

  // 6) if button B is pressed, turn LED OFF
  if (digitalRead(buttonBpin) == LOW) {
    digitalWrite(ledPin, LOW);                                                  // set voltage of ledPin to 0V
  }
}
