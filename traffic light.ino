int ledGreen = 7; 
int ledOrange = 6;
int ledRed = 5;

int tempsGreen = 10000;
int tempsOrange = 2500;
int tempsRed = 20000;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);

}

void loop() {
    digitalWrite(ledRed, HIGH);
    delay(2000);
    
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
    delay(2000);
    
      
    /*digitalWrite(ledRed, HIGH);     // rouge allumée
    delay(tempsRed);

    digitalWrite(ledGreen, HIGH);      // verte allumée
    digitalWrite(ledRed, LOW);      // rouge éteinte
    delay(tempsGreen);

    digitalWrite(ledOrange, HIGH);      // jaune allumée
    digitalWrite(ledGreen, LOW);       // verte éteinte
    delay(tempsOrange);

    digitalWrite(ledOrange, LOW); */
  
}
