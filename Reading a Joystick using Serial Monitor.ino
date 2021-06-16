void setup() {
  // put your setup code here, to run once:
  pinMode (A0,INPUT);
  pinMode (A1, INPUT);
  pinMode (2, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(A0);
int pal = analogRead(A1);
//Serial.println(val);
Serial.println(pal);


}
