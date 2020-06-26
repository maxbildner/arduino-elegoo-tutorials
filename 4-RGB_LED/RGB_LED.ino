/*
  Lesson 4: RGB LED
  Start LED in a red color state, then it fades to green, then blue, then repeats
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
