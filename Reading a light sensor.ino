//reading the light sensor
//this code will give an alarm when it senses unusal activity like a light in the room
void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(A3, INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A3));
delay (200);

}
