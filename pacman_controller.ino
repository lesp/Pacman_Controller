const int UP = 4;          // input pin for up key
const int DOWN = 5;        // input pin for down key
const int LEFT = 6;        // input pin for left key
const int RIGHT = 7;       // input pin for right key
const int FIRE = 8;        // input pin for shooting
//int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
  // setup the pins as inputs:
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);
  pinMode(FIRE, INPUT);
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
else if (digitalRead(FIRE) == HIGH) {
  Keyboard.press(KEY_LEFT_CTRL);
  //Keyboard.press(KEY_LEFT_ALT);
  //Keyboard.press(KEY_RIGHT_ARROW);
  delay(200);
  Keyboard.releaseAll();
}  
}

