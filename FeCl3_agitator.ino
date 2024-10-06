int in1 = 5;
int in2 = 6;
int led = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(led,OUTPUT);

  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(led,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly
  analogWrite(in1,125);
  analogWrite(in2,0);
  digitalWrite(led,LOW);
  delay(400);

  analogWrite(in1,0);
  analogWrite(in2,125);
  digitalWrite(led,HIGH);
  delay(400);
}
