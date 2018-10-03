const int button = 3;
int etat_button = 0;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  etat_button = digitalRead(button); //------------------------
  if (etat_button == HIGH) {         //
    Serial.println(1);               // Partie qui envoie '1'
  }                                  // sur le port serie quand
  else {                             // on appuie sur le boutton
    Serial.println(0);               //  
  }                                  //------------------------

  if (Serial.available()) {          //------------------------
    int rep = Serial.parseInt();     //
    if (rep == 2) {                  //
      digitalWrite(led, HIGH);       // Partie qui allume la
    }                                // LED quand on reçoit
    else {                           // '2' sur le port série
      digitalWrite(led, LOW);        //
    }                                //
  }                                  //------------------------
  delay(50);
}
