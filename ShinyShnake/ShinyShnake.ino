#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(5, 3);

int sensor = A1;

int val;

void setup() {
  // put your setup code here, to run once:
  
  strip.begin();

  strip.setBrightness(20);
  
}

void loop() {
  val = analogRead(sensor);

    if(val > 250){
      for(int i = 0; i < strip.numPixels();i++){
        strip.setBrightness(50);
        strip.setPixelColor(i, 200, 0, 0);
        strip.show();
        delay(100);
  }
    }
  else{
      for(int i = 0; i < strip.numPixels();i++){
        strip.setBrightness(20);
        strip.setPixelColor(i, 200, 200, 0);
        strip.show();
        delay(400);
  }
  }
  strip.clear();
}
