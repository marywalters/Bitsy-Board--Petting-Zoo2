int joyX = A3;
int joyY = A2;
int joySW = 2;

int led = 1;

int xVal;
int yVal;
int swVal;

void setup() {  
 pinMode(led, OUTPUT);
 //pinMode(joyX, INPUT);
 //pinMode(joyY, INPUT);
 pinMode(joySW, INPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(joyX);
  yVal = analogRead(joyY);
  swVal = digitalRead(joySW);

  
 
   if (yVal > 800){
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(200);;
   }
   else{ 
    digitalWrite(led,LOW);
    delay(500);
    digitalWrite(led, HIGH);
    delay(1000);
   }

//   if(swVal == 1){
//     digitalWrite(led,HIGH);
//     delay (100);
//     digitalWrite(led,LOW);
//     delay (100);
//   }
   }
