int x = 1;
String inBytes;
void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
////  while (!Serial.available());
////  x = Serial.readString().toInt();
//  x = x + 1;
//  
//  Serial.println(x);
if(Serial.available()>0){
  inBytes = Serial.readStringUntil('\n');
  if(inBytes == "on"){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.write("LED On");
  }

   else if(inBytes == "off"){
    digitalWrite(LED_BUILTIN, LOW);
    Serial.write("LED Off");
  }

  else{
    Serial.write("Invalid Input Given");
  }
}
}
