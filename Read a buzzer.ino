void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(A3,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
tone(5,analogRead(A3));

}
