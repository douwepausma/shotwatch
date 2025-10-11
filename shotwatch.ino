#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected via I2C (default address 0x3C)
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int counter = 1;

void setup() {
  // Initialize serial (optional for debugging)
  Serial.begin(9600);

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }

  // Clear display buffer
  display.clearDisplay();
  display.setRotation(2); 		// Rotate the display (it's mounted upside down)
  display.setTextSize(9); 		// Text size
  display.setTextColor(SSD1306_WHITE); 	// Text color
  display.setCursor(16, 0); 		// Position
  display.display();
  delay(1000); 				// Brief message
}

void loop() {
  display.clearDisplay();              // Clear the display
  display.setTextSize(9);              // Text size
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(16, 0);        
  if(counter < 10) display.print(0);   // Add Leading zero below 10
  display.print(counter);              // Print counter
  display.display();                   // Show on screen

  counter++;                           // Increment
  delay(1000);                         // Wait 1 second
}

