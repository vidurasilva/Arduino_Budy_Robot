#define trig1 3
#define echo1 2
#define trig2 7
#define echo2 6
 long duration, distance;


void setup() {
  // put your setup code here, to run once:


 pinMode(trig1, OUTPUT);
 pinMode(echo1, INPUT);
 pinMode(trig2, OUTPUT);
 pinMode(echo2, INPUT);
 Serial.begin(9600);
  

}

void loop() {

    digitalWrite(trig1,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig1,LOW);

     duration=pulseIn(echo1,HIGH);
      distance=duration*0.34/2;
     Serial.println("1st IR");
   Serial.println(distance);

      digitalWrite(trig2,HIGH);
    delayMicroseconds(10);
     digitalWrite(trig2,LOW);

     duration=pulseIn(echo2,HIGH);
     distance=duration*0.34/2;
     Serial.println("2nd IR");
    Serial.println(distance);

     
 
   
 
  

}
/*start runme

void runme(){
  delay(4000);
  for(int i=0;i<=80;i++){
      arm.write(i);
      delay(80);
    
    }

    for(int i=90;i>=35;i--){
      
      gripper.write(i);
      delay(20);
      
      
      }
   // gripper.write(35);
    delay(2500);

    for(int i=80;i>=0;i--){
      arm.write(i);
      delay(80);
      
      
      
      
      }
      gripper.write(90);
      delay(2500);

      for(int i=80;i>=0;i--){
        arm.write(i);
        delay(80);
        
        
        
        }
  
  
  
  
  
  
  
  }


  //runme end


void UltraSensor(int trigPin,int echoPin)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

}


*/
