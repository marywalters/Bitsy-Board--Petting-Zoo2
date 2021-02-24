int buzz = 3; //buzzer to arduino pin 9

int sensor = A1;

int temp;

void setup() {
   pinMode(buzz, OUTPUT);

}

void loop() {
 /* for (int i = 5000; i > 0; i-=5){
    tone(buzz, i); delay(10);
 */ 
  temp = analogRead(sensor);

  if(temp > 600 ){
tone(buzz, 1200); delay(100);
noTone(buzz); delay(50);
  }
   else{noTone(buzz);}
}
