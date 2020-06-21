/**
 * Pacman Animation
 * @author: Alejandro Santiago (https://github.com/alestiago)
 * @since: 19-05-2020
 * @desc: Small animation of Pacman for Arduino LCD for chareditor.com
 */
 
/**
 * Imports
 */
#include <Wire.h>
#include <Adafruit_RGBLCDShield.h>
#include <utility/Adafruit_MCP23017.h>

/**
 * Globals
 */
byte ghost_pos;
byte pacman_pos;
Adafruit_RGBLCDShield lcd = Adafruit_RGBLCDShield();

/**
 * Frames
 */
void drawGhostChasingPacmanFrame0() {
  byte pacman_left[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte pacman_right[] = { B01110, B11111, B01111, B00111, B01111, B11111, B01110, B00000 };
  byte ghost_left[] = { B00000, B00000, B10001, B10000, B10001, B00001, B00001, B00000 };
  byte ghost_right[] = { B00000, B11100, B11110, B10110, B11110, B11110, B01010, B00000 };
  lcd.createChar(0, pacman_left);
  lcd.createChar(1, pacman_right);
  lcd.createChar(2, ghost_left);
  lcd.createChar(3, ghost_right);
}

void drawGhostChasingPacmanFrame1() {
  byte pacman_left[] = { B00000, B00000, B00001, B00001, B00001, B00000, B00000, B00000 };
  byte pacman_right[] = { B01110, B11111, B11111, B11111, B11111, B11111, B01110, B00000 };
  byte ghost_left[] = { B00000, B00000, B10001, B10000, B10001, B00001, B00001, B00000 };
  byte ghost_right[] = { B00000, B11100, B11110, B10110, B11110, B11110, B01010, B00000 };
  lcd.createChar(4, pacman_left);
  lcd.createChar(5, pacman_right);
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostChasingPacmanFrame2() {
  byte pacman_left[] = { B00000, B00001, B00000, B00000, B00000, B00001, B00000, B00000 };
  byte pacman_right[] = { B11100, B11110, B11111, B01111, B11111, B11110, B11100, B00000 };
  byte ghost_left[] = { B00000, B00001, B00011, B00001, B00011, B00011, B00010, B00000 };
  byte ghost_right[] = { B00000, B11000, B11100, B01100, B11100, B11100, B10100, B00000 };
  lcd.createChar(4, pacman_left);
  lcd.createChar(5, pacman_right);
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostChasingPacmanFrame3() {
  byte pacman_left[] = { B00001, B00011, B00111, B00111, B00111, B00011, B00001, B00000 };
  byte pacman_right[] = { B11000, B11100, B11110, B11110, B11110, B11100, B11000, B00000 };
  byte ghost_left[] = { B00000, B00011, B00111, B00010, B00111, B00111, B00101, B00000 };
  byte ghost_right[] = { B00000, B10000, B11000, B11000, B11000, B11000, B01000, B00000 };
  lcd.createChar(4, pacman_left);
  lcd.createChar(5, pacman_right);
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostChasingPacmanFrame4() {
  byte pacman_left[] = { B00011, B00111, B00011, B00001, B00011, B00111, B00011, B00000 };
  byte pacman_right[] = { B10000, B11000, B11100, B11100, B11100, B11000, B10000, B00000 };
  byte ghost_left[] = { B00000, B00111, B01111, B00101, B01111, B01111, B01010, B00000 };
  byte ghost_right[] = { B00000, B00000, B10000, B10000, B10000, B10000, B10000, B00000 };
  lcd.createChar(4, pacman_left);
  lcd.createChar(5, pacman_right);
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostChasingPacmanFrame5() {
  byte pacman_left[] = { B00111, B01111, B11111, B11111, B11111, B01111, B00111, B00000 };
  byte pacman_right[] = { B00000, B10000, B11000, B11000, B11000, B10000, B00000, B00000 };
  byte ghost_left[] = { B00000, B01110, B11111, B01011, B11111, B11111, B10101, B00000 };
  byte ghost_right[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };
  lcd.createChar(4, pacman_left);
  lcd.createChar(5, pacman_right);
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostAfraidFrame1() {
  byte ghost_left[] = { B00000, B00111, B01111, B01101, B01111, B01111, B01010, B00000 };
  byte ghost_right[] = { B00000, B00000, B10000, B00000, B10000, B10000, B10000, B00000 };
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostAfraidFrame2() {
  byte ghost_left[] = { B00000, B00011, B00111, B00110, B00111, B00111, B00101, B00000 };
  byte ghost_right[] = { B00000, B10000, B11000, B10000, B11000, B11000, B01000, B00000 };
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawGhostAfraidFrame3(){
  byte ghost_left[] = { B00000, B00001, B00011, B00011, B00011, B00011, B00010, B00000 };
  byte ghost_right[] = { B00000, B11000, B11100, B01000, B11100, B11100, B10100, B00000 };
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);  
}

void drawGhostAfraidFrame4(){
  byte ghost_left[] = { B00000, B00000, B00001, B00001, B00001, B00001, B00001, B00000 };
  byte ghost_right[] = { B00000, B11100, B11110, B10100, B11110, B11110, B01010, B00000 };
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);  
}

void drawGhostAfraidFrame5(){
  byte ghost_left[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte ghost_right[] = { B00000, B01110, B11111, B11010, B11111, B11111, B10101, B00000 };
  lcd.createChar(6, ghost_left);
  lcd.createChar(7, ghost_right);
}

void drawHungryPacmanFrame1() {
  byte pacman_0x0[] = { B00000, B00000, B00011, B00111, B01111, B01111, B11111, B11111 };
  byte pacman_0x1[] = { B00000, B11100, B11111, B11111, B11111, B11111, B11111, B11111 };
  byte pacman_0x2[] = { B00000, B00000, B00000, B10000, B11000, B11000, B11100, B11100 };
  byte pacman_1x0[] = { B11111, B11111, B11111, B01111, B01111, B00111, B00011, B00000 };
  byte pacman_1x1[] = { B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11100 };
  byte pacman_1x2[] = { B11100, B11100, B11100, B11000, B11000, B10000, B00000, B00000 };
  lcd.createChar(0, pacman_0x0);
  lcd.createChar(1, pacman_0x1);
  lcd.createChar(2, pacman_0x2);
  lcd.createChar(3, pacman_1x0);
  lcd.createChar(4, pacman_1x1);
  lcd.createChar(5, pacman_1x2);
}

void drawHungryPacmanFrame2() {
  byte pacman_1x1[] = { B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11100 };
  byte pacman_0x0[] = { B00000, B00000, B00011, B00111, B01111, B01111, B11111, B11111 };
  byte pacman_0x1[] = { B00000, B11100, B11111, B11111, B11111, B11111, B11111, B11110 };
  byte pacman_0x2[] = { B00000, B00000, B00000, B10000, B11000, B10000, B00000, B00000 };
  byte pacman_1x0[] = { B11111, B11111, B11111, B01111, B01111, B00111, B00011, B00000 };
  byte pacman_1x2[] = { B00000, B10000, B11000, B11000, B11000, B10000, B00000, B00000 };
  lcd.createChar(0, pacman_0x0);
  lcd.createChar(1, pacman_0x1);
  lcd.createChar(2, pacman_0x2);
  lcd.createChar(3, pacman_1x0);
  lcd.createChar(4, pacman_1x1);
  lcd.createChar(5, pacman_1x2);
}

/**
 * Animations
 */
void animateGhostChasingPacman() {
  drawGhostChasingPacmanFrame0();
  lcd.setCursor(ghost_pos - 3, 1);
  if (ghost_pos > 2) lcd.write(0);
  if (ghost_pos > 1) lcd.write(1);
  if (ghost_pos > 0) lcd.write(2);
  lcd.write(3);

  drawGhostChasingPacmanFrame1();
  lcd.setCursor(ghost_pos - 3, 1);
  if (ghost_pos > 2) lcd.write(4);
  if (ghost_pos > 1) lcd.write(5);
  if (ghost_pos > 0) lcd.write(6);
  lcd.write(7);

  drawGhostChasingPacmanFrame2();
  drawGhostChasingPacmanFrame3();
  drawGhostChasingPacmanFrame4();
  drawGhostChasingPacmanFrame5();
  lcd.setCursor(ghost_pos, 1);
  lcd.write(' ');
}

void animateGhostAfraid() {
  drawGhostAfraidFrame1();
  lcd.setCursor(ghost_pos, 1);
  lcd.write(6);
  lcd.write(7);
  
  drawGhostAfraidFrame2();
  drawGhostAfraidFrame3();
  drawGhostAfraidFrame4();
  drawGhostAfraidFrame5();
  lcd.setCursor(ghost_pos, 1);
  lcd.write(' ');
}

void animateHungryPacman() {
  drawHungryPacmanFrame1();
  drawHungryPacmanFrame2();
  
  byte pacman_size = 3;
  lcd.setCursor(pacman_pos - pacman_size - 1, 0);
  if (pacman_pos > pacman_size) lcd.write(' ');
  if (pacman_pos > pacman_size - 1) lcd.write(0);
  if (pacman_pos > pacman_size - 2) lcd.write(1);
  lcd.write(2);
  lcd.setCursor(pacman_pos - pacman_size - 1, 1);
  if (pacman_pos > pacman_size) lcd.write(' ');
  if (pacman_pos > pacman_size - 1) lcd.write(3);
  if (pacman_pos > pacman_size - 2) lcd.write(4);
  lcd.write(5);
}


/**
* Main
*/
void setup() {
  byte screen_width = 16;
  lcd.begin(screen_width, 2);

  lcd.setBacklight(3);
  ghost_pos = 15;
  for (byte i = 0; i < screen_width; i++){
    animateGhostChasingPacman();
    ghost_pos--;
  }

  lcd.setBacklight(4);
  ghost_pos = 0;
  byte half_screen = screen_width / 2;
  for (byte i = 0; i < half_screen; i++) {
    animateGhostAfraid();
    ghost_pos++;
  }
  
  pacman_pos = 0;
  byte ghost_speed = 2;
  for (byte i = 0; i < screen_width + 4; i++) {
    animateHungryPacman();
    pacman_pos++;
    if (i % ghost_speed != 0) {
      animateGhostAfraid();
      ghost_pos++;
    }
  }
}

void loop() {}
