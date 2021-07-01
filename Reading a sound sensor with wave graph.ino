//code for reading sound sensor
int sound_sensor = A2;
void setup() {
  // put your setup code here, to run once:
  pinMode(sound_sensor, INPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int soundValue = 0;
  for (int i = 0; i < 32; i++) {
    soundValue = analogRead(sound_sensor);
  }
  //Serial.println(soundValue);
  if (soundValue>600){
    Serial.println("            ||            ");
    Serial.println("         || || ||         ");
    Serial.println("      || || || || ||      ");
    Serial.println("   || || || || || || ||   ");
    Serial.println("|| || || || || || || || ||");
    Serial.println("   || || || || || || ||   ");
    Serial.println("      || || || || ||      ");
    Serial.println("         || || ||         ");
    Serial.println("            ||            ");
  
  }
  delay(50);

}
