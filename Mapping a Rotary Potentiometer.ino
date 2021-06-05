//Mapping a potentiometer
float sensval;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensval = analogRead(A0);
sensval= map(sensval, 0,1023,0,99.9);
Serial.print("Sensor Reading:");
Serial.println(sensval);
delay(100);

}
