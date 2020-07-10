/*
  Lesson 4: RGB LED
  Start LED in a red color state, then it fades to green, then blue, then repeats
*/

// Defin Pin Constants (nums refer to board pins)
#define BLUE 3                                                                  // make a constant variable called "BLUE", equal to integer 3
#define GREEN 5
#define RED 6

// 1) The setup function runs once when you press reset or power the board
void setup() {

  // 2) Set the 3 pins we're using to OUTPUT modes
  // pinMode(pin, mode) parameters:
  //    pin = number- of the pin whose mode you want to set (ex. 13)
  //    mode = constant- INPUT, OUTPUT, or INPUT_PULLUP
  //    no return value, but sets the corresponding pin to the given mode
  // - INPUT = the pin is in a high-impedance state
  // - High Impedance = allows a small amount of current to pass through (ex. reading a sensor)
  // - Impedance (Z) = measure of the total opposition to the current flow in an alternating current circuit
  // - By default, all pins are set to INPUT
  // - OUTPUT = the pin is in a low-impedance state
  // - Low Impedance = can provide a substantial amount of current to other circuits (ex. powering LEDs)
  pinMode(RED, OUTPUT);                                                         // set pin 6 on board to have a mode of OUTPUT
  pinMode(GREEN, OUTPUT);                                                       // set pin 5 on board to have a mode of OUTPUT
  pinMode(BLUE, OUTPUT);                                                        // set pin 3 on board to have a mode of OUTPUT

  // 3) Initialize only the red LED to be turned on at first
  digitalWrite(RED, HIGH);                                                      // turn on the RED LED (HIGH is the voltage level)
  digitalWrite(GREEN, LOW);                                                     // turn off the BLUE LED
  digitalWrite(BLUE, LOW);                                                      // turn off the BLUE LED
  // digitalWrite(pin, value)
  //    pin = number- of the pin you want to set a value to
  //    value = constant- HIGH or LOW
  // - HIGH = voltage of pin set to 5V (if pin set to OUTPUT)
  // - LOW = voltage of pin set to 0V (if pin set to OUTPUT)
  // - sets pin to constant output
}


// 4) define variables (integers)
int redValue;
int greenValue;
int blueValue;


// 5) The loop function runs over and over again forever (after setup())
void loop() {
  #define delayTime 10                                                          // fading time between colors

  redValue = 255;                                                               // choose a value between 1 and 255 to change the color
  greenValue = 0;                                                               // 0 = off,   255 = max brightness
  blueValue = 0;

  for (int i = 0; i < 255; i += 1) {                                            // 6) fades out red, bring green full when i = 255
    redValue -= 1;                                                              // decrease redValue by 1
    greenValue += 1;                                                            // increase greenValue by 1

    analogWrite(RED, redValue);                                                 // decrease red power by 1
    analogWrite(GREEN, greenValue);                                             // increase red power by 1
    // analogWrite(pin, value)
    //    pin = number- of the pin you want to set a value to
    //    value = int- integer between 0 (always off) and 255 (always on) inclusive
    //    returns => nothing
    // - sets pin to variable output

    delay(delayTime);                                                           // wait 10 miliseconds
  }

  // 7) ensure that redValue is 0 (off), and green is full, and blue is 0 (off)? why is this necessary?
  redValue = 0;
  greenValue = 255;
  blueValue = 0;

  for (int i = 0; i < 255; i += 1) {                                            // 8) fade out green and bring blue full when i = 255
    greenValue -= 1;                                                            // decrease greenValue by 1
    blueValue += 1;                                                             // increase blueValue by 1

    analogWrite(GREEN, greenValue);                                             // decrease green power
    analogWrite(BLUE, blueValue);                                               // increase blue power

    delay(delayTime);                                                           // wait 10 miliseconds
  }

  // 9) ensure that greenValue is 0 (off), and blueValue is full, and red is 0 (off)
  redValue = 0;
  greenValue = 0;
  blueValue = 255;

  for (int i = 0; i < 255; i += 1) {                                            // 10) fade out blue and bring red full when i = 255
    blueValue -= 1;                                                             // decrease blueValue by 1
    redValue += 1;                                                              // increase redValue by 1
    
    analogWrite(BLUE, blueValue);                                               // decrease blue power
    analogWrite(RED, redValue);                                                 // increase red power

    delay(delayTime);
  }
}
