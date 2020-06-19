/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/


// 1) The setup function runs once when you press reset or power the board
void setup() {

  // 2) Set pin 13 on the board to have a mode of OUTPUT
  // pinMode(pin, mode) parameters: 
  //    pin = number- of the pin whose mode you want to set (ex. 13)
  //    mode = constant- INPUT, OUTPUT, or INPUT_PULLUP
  //    no return value, but sets the corresponding pin to the given mode
  pinMode(LED_BUILTIN, OUTPUT);

  // - LED_BUILTIN = constant variable (uppercase variables)

  // - INPUT = the pin is in a high-impedance state
  // - High Impedance = allows a small amount of current to pass through (ex. reading a sensor)
  // - Impedance (Z) = measure of the total opposition to the current flow in an alternating current circuit
  // - By default, all pins are set to INPUT

  // - OUTPUT = the pin is in a low-impedance state
  // - Low Impedance = can provide a substantial amount of current to other circuits (ex. powering LEDs)
}


// 3) The loop function runs over and over again forever
void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);    // 4) turn the LED on (HIGH is the voltage level)
  // digitlaWrite(pin, value)
  //    pin = number- of the pin you want to set a value to
  //    value = constant- HIGH or LOW
  // - HIGH = voltage of pin set to 5V (if pin set to OUTPUT)
  // - LOW = voltage of pin set to 0V (if pin set to OUTPUT)

  // delay(1000);                     //    wait for a second (1000 miliseconds)
  delay(150);                         // 5) wait for 150 miliseconds

  digitalWrite(LED_BUILTIN, LOW);     // 6) turn the LED off by making the voltage LOW
  
  delay(150);                         // 7) wait for 150 miliseconds
}
