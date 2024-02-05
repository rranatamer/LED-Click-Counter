int button = 13;
int red = 9;
int yellow = 10;
int white = 11;
int currentLED = 9;  
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {  
    digitalWrite(currentLED, HIGH);  
    delay(500);                      
    digitalWrite(currentLED, LOW);   
    currentLED++;  
    if (currentLED > 11) { 
      currentLED = 9;
    }
  }
}

