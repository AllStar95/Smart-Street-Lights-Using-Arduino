int LEDpin1 = 8;
int LEDpin2 = 9;
int LEDpin3 = 10;
int LEDpin4 = 11;
int obstaclePin1 = 2;
int obstaclePin2 = 3;
int obstaclePin3 = 4;
int obstaclePin4 = 5;
int hasObstacle1 = LOW;  // LOW MEANS OBSTACLE Present
int hasObstacle2 = LOW;
int hasObstacle3 = LOW;
int hasObstacle4 = LOW;
void setup() {
  pinMode(LEDpin4, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin1, OUTPUT);
  pinMode(obstaclePin1, INPUT);
  pinMode(obstaclePin2, INPUT);
  pinMode(obstaclePin3, INPUT);
  pinMode(obstaclePin4, INPUT);
  Serial.begin(9600);
}

void loop() {
  hasObstacle1 = digitalRead(obstaclePin1);
  hasObstacle2 = digitalRead(obstaclePin2);
  hasObstacle3 = digitalRead(obstaclePin3);
  hasObstacle4 = digitalRead(obstaclePin4);

  if(hasObstacle1 == LOW){
    Serial.println("default");
    digitalWrite(LEDpin1, HIGH);
  }
  if (hasObstacle2 ==LOW){
    Serial.println("Stop something is ahead");
    digitalWrite(LEDpin2,HIGH);
  }
  else {
      Serial.println("Path is clear");
      digitalWrite(LEDpin2,LOW);}
  if (hasObstacle3 ==LOW){
    Serial.println("Stop something is ahead");
    digitalWrite(LEDpin3,HIGH);
  }
  else{
      Serial.println("Path is clear");
      digitalWrite(LEDpin3,LOW);
  }
    
  if (hasObstacle4 == LOW){
    Serial.println("default");
    digitalWrite(LEDpin4, HIGH);
  }  
  
delay(3000);
}