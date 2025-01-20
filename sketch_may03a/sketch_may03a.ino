#include <Servo.h> 
 
Servo myservo;
int pos = 0;
int cambien=2;
void setup() {
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(cambien) == HIGH)
  {
    for(pos = 0; pos < 180; pos += 1)  
  {                                  
    myservo.write(pos);             
    delay(15);                      
  }
}
  else if (digitalRead(cambien) == LOW){
    for(pos = 180; pos>=1; pos-=1)     
  {                                
    myservo.write(pos);              
    delay(15);                      
  } 
  }
}
