void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  String a;
  a = Serial.readString();
  if(Serial.available()) {
  if (a == "ON") {
    digitalWrite(11, HIGH);
    Serial.println("LED켜짐");
    delay(1000);
  } else if (a == "OFF") {
    digitalWrite(11, LOW);
    Serial.println("LED꺼짐");
    delay(1000);
  }
  } else {
    Serial.println("Error:");
  }
}
