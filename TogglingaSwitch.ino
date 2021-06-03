
//toggling a switch

int data;
int count=0; //assigning a value to the variable (initialzing a variable)
void setup() {
  // put your setup code here, to run once:
pinMode (4,INPUT);
pinMode (6,OUTPUT);
Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
data=digitalRead(4);

if (data==1){
  digitalWrite (6, HIGH);
}
else
{digitalWrite (6, LOW);}


}
