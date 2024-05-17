//pins
int buzzer = 4;
int start_button = 5;
int minus_button = 6;
int add_button = 7;
int LED5 = 8;
int LED10 = 9;
int LED15 = 10;
int LED20 = 11;
int motor1 = 12;
int redLed = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzer, OUTPUT);
pinMode(start_button, INPUT_PULLUP);
pinMode(minus_button, INPUT_PULLUP);
pinMode(add_button, INPUT_PULLUP);
pinMode(LED5, OUTPUT);
pinMode(LED10, OUTPUT);
pinMode(LED15, OUTPUT);
pinMode(LED20, OUTPUT);
pinMode(motor1, OUTPUT);
pinMode(redLed, OUTPUT);

noTone(buzzer);
digitalWrite(LED5, LOW);
digitalWrite(LED10, LOW);
digitalWrite(LED15, LOW);
digitalWrite(LED20, LOW);
digitalWrite(motor1, LOW);
digitalWrite(redLed, LOW);
}

// MORSE CODE PARA SA MGA ULOL HWAHAHHAHAHAHAHAHA
void morse_dash(){
    digitalWrite(LED5, 1);
  digitalWrite(LED10, 1);
  digitalWrite(LED15, 1);
  digitalWrite(LED20, 1);
  tone(buzzer, 200);
  delay(500);
  digitalWrite(LED5, 0);
  digitalWrite(LED10, 0);
  digitalWrite(LED15, 0);
  digitalWrite(LED20, 0);
  noTone(buzzer);
  delay(100);
}

void morse_dot(){
    digitalWrite(LED5, 1);
  digitalWrite(LED10, 1);
  digitalWrite(LED15, 1);
  digitalWrite(LED20, 1);
  tone(buzzer, 200);
  delay(200);
  digitalWrite(LED5, 0);
  digitalWrite(LED10, 0);
  digitalWrite(LED15, 0);
  digitalWrite(LED20, 0);
  noTone(buzzer);
  delay(100);
}

void initialize(){
noTone(buzzer);
digitalWrite(LED5, LOW);
digitalWrite(LED10, LOW);
digitalWrite(LED15, LOW);
digitalWrite(LED20, LOW);
digitalWrite(motor1, LOW);
digitalWrite(redLed, LOW);

for(int x = 0; x<2; x++){
  digitalWrite(LED5, HIGH);
  digitalWrite(LED10, LOW);
  digitalWrite(LED15, LOW);
  digitalWrite(LED20, LOW);
delay(100);
  digitalWrite(LED5, LOW);
  digitalWrite(LED10, HIGH);
  digitalWrite(LED15, LOW);
  digitalWrite(LED20, LOW);
delay(100);
  digitalWrite(LED5, LOW);
  digitalWrite(LED10, LOW);
  digitalWrite(LED15, HIGH);
  digitalWrite(LED20, LOW);
delay(100);
  digitalWrite(LED5, LOW);
  digitalWrite(LED10, LOW);
  digitalWrite(LED15, LOW);
  digitalWrite(LED20, HIGH);
delay(100);
}
//GG morse code  
  morse_dash();
  morse_dash();
  morse_dot();
  delay(200);
  morse_dash();
  morse_dash();
  morse_dot();
}

void motor_on(){
  digitalWrite(motor1, HIGH);
  delay(2500);
  digitalWrite(motor1, LOW);
  delay(2500);
}

void loop() {
  initialize();
  int time = 0;
  Serial.println(time);
  start:
  
  char add1 = digitalRead(add_button);
  char minus1 = digitalRead(minus_button);
  char start1 = digitalRead(start_button);

  if(add1 == LOW){
    time+=1;
    delay(200);
    Serial.println(time);
  }
  
  if(minus1 == LOW){
    if(time>0){
      time-=1;
      delay(200);
      Serial.println(time);
    }
    else{

    }
  }
  
  if(time >= 5 && time < 10){ 
    digitalWrite(LED5, HIGH);
    digitalWrite(LED10, LOW);
    digitalWrite(LED15, LOW);
    digitalWrite(LED20, LOW);
    digitalWrite(redLed,LOW);
  }
  if(time >= 10 && time < 15){ 
    digitalWrite(LED5, HIGH);
    digitalWrite(LED10, HIGH);
    digitalWrite(LED15, LOW);
    digitalWrite(LED20, LOW);
    digitalWrite(redLed,LOW);
  }
  if(time >= 15 && time < 20){ 
    digitalWrite(LED5, HIGH);
    digitalWrite(LED10, HIGH);
    digitalWrite(LED15, HIGH);
    digitalWrite(LED20, LOW);
    digitalWrite(redLed,LOW);
    }
  if(time >=20){ 
    digitalWrite(LED5, HIGH);
    digitalWrite(LED10, HIGH);
    digitalWrite(LED15, HIGH);
    digitalWrite(LED20, HIGH);
    digitalWrite(redLed, LOW); 
  }
if(time <=0){ 
    digitalWrite(LED5, LOW);
    digitalWrite(LED10, LOW);
    digitalWrite(LED15, LOW);
    digitalWrite(LED20, LOW);
    digitalWrite(redLed,HIGH);
  }
  if(start1 == LOW){
    digitalWrite(LED5, LOW);
    digitalWrite(LED10, LOW);
    digitalWrite(LED15, LOW);
    digitalWrite(LED20, LOW);
    digitalWrite(redLed,LOW);
  if(time >20){
        Serial.print("Time = 20");
        delay(500);
        int minutes = 20*12;
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, HIGH);
      digitalWrite(LED15, HIGH);
      digitalWrite(LED20, HIGH);
      digitalWrite(redLed,LOW);
      
      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, HIGH);
      digitalWrite(LED15, HIGH);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);

      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, HIGH);
      digitalWrite(LED15, LOW);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);
      
      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, LOW);
      digitalWrite(LED15, LOW);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);
      
      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    } 
      digitalWrite(LED5, LOW);
      digitalWrite(LED10, LOW);
      digitalWrite(LED15, LOW);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);
      delay(500);
    morse_dash();
    morse_dash();
    morse_dot();
    delay(200);
    morse_dash();
    morse_dash();
    morse_dot();  
    int time = 0;
  }  
  else{
        Serial.print("Time = ");
        Serial.print(time);
        delay(500);
        int minutes = time*12;
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, HIGH);
      digitalWrite(LED15, HIGH);
      digitalWrite(LED20, HIGH);
      digitalWrite(redLed,LOW);
      
      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, HIGH);
      digitalWrite(LED15, HIGH);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);

      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, HIGH);
      digitalWrite(LED15, LOW);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);
      
      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
    for(int x = 0; x<(minutes*0.25); x++){
      digitalWrite(LED5, HIGH);
      digitalWrite(LED10, LOW);
      digitalWrite(LED15, LOW);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);
      
      digitalWrite(motor1, HIGH);
      delay(2500);
      digitalWrite(motor1, LOW);
      delay(2500);
    }
      digitalWrite(LED5, LOW);
      digitalWrite(LED10, LOW);
      digitalWrite(LED15, LOW);
      digitalWrite(LED20, LOW);
      digitalWrite(redLed,LOW);
      delay(500);

    morse_dash();
    morse_dash();
    morse_dot();
    delay(200);
    morse_dash();
    morse_dash();
    morse_dot();  
    int time = 0;    
  }
  }

  else{
    digitalWrite(LED5, LOW);
    digitalWrite(LED10, LOW);
    digitalWrite(LED15, LOW);
    digitalWrite(LED20, LOW);
    digitalWrite(redLed,LOW);
    goto start;
  }


  time = 0; 
  goto start;

}