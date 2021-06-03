

//Code for blinking LED
//Code by Serena

void setup() {
  // put your setup code here, to run once:
pinMode (6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (6,HIGH);
delay(2000);
digitalWrite (6,LOW);
delay(500);
}
