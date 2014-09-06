/* 
 Keyboard Button test
 
 For the Arduino Leonardo and Micro.
 
 Sends a text string when a button is pressed.
 
 The circuit:
 * pushbutton attached from pin 2 to +5V
 * 10-kilohm resistor attached from pin 4 to ground
 
 created 24 Oct 2011
 modified 27 Mar 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/KeyboardButton
 */

const int UP = 4;          // input pin for pushbutton
const int DOWN = 5;
const int LEFT = 6;
const int RIGHT = 7;
//int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
if (digitalRead(UP) == HIGH) {
  Keyboard.press(KEY_UP_ARROW);
  delay(200);
  Keyboard.releaseAll();
}
else if (digitalRead(DOWN) == HIGH) {
  Keyboard.press(KEY_DOWN_ARROW);
  delay(200);
  Keyboard.releaseAll();
}  
else if (digitalRead(LEFT) == HIGH) {
  Keyboard.press(KEY_LEFT_ARROW);
  delay(200);
  Keyboard.releaseAll();
}  
else if (digitalRead(RIGHT) == HIGH) {
  Keyboard.press(KEY_RIGHT_ARROW);
  delay(200);
  Keyboard.releaseAll();
}  
}

