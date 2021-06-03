
//count the number of times the button is pressed

int data;
int count=0; //assigning a value to the variable (initialzing a variable)
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
  count=count+1;
  Serial.println(count);
  delay(500);
 
}
 
if(count>9){
  count=0;

}

}
