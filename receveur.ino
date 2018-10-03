const int led = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available()){
    int msg = Serial.parseInt();
    if (msg == 1) {
      digitalWrite(led, HIGH);
      Serial.println(2);
    }
    else {
      digitalWrite(led, LOW);
      Serial.println(3);
    }
  }
}
