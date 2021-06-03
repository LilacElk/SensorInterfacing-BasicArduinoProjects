
//reading a button

int data;
void setup() {
  // put your setup code here, to run once:
pinMode (4,INPUT);
Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
data=digitalRead(4);

if (data==1){
  Serial.println("Button has been pressed.");
}

if (data==0){
  Serial.println("Button has not been pressed.");

}

}
