//anitheft alarm
//this code will give an alarm when it senses unusal activity like a light in the room
int raw_val;
int sensval;
void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(A3, INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
raw_val=analogRead(A3);
sensval=map(raw_val, 0, 1023, 0, 100);
Serial.println(sensval);
if(sensval>20){
  tone(5,4000);
  digitalWrite(6,HIGH);
}
else{
 noTone(5);
 digitalWrite(6,LOW); 
  }

}
