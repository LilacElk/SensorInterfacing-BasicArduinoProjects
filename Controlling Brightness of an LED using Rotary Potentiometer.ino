//controlling brightness of LED using potentiometer
int sensval;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
sensval = analogRead(A0);
analogWrite(6, sensval);


}
