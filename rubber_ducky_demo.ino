#include <Keyboard.h>

void setup()
{
  //wait for device to be recogized by computer
  delay(5000);
  
  Keyboard.begin();
  
  //enable virtual desktops
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(100);

  //switch to next desktop
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RIGHT_ARROW);
  Keyboard.releaseAll();

  delay(100);

  //open chrome
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.println("chrome");


  delay(5000);

  //navigate to malicious webpage
  Keyboard.println("youtu.be/watch?v=dQw4w9WgXcQ");
  delay(5000);

  // Return to previous desktop, keeping connection open, but hidden
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();

  // Stop Keyboard
  Keyboard.end();
}

// Unused
void loop() {}