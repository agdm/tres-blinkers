/* 
 Tres Blinkers
 Alvin Milton
 http://www.alvinmilton.com
 */

int redPin = 12;
int yellowPin = 13;
int greenPin = 11;

void setup() {
  // initialize outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

  
void flasher( int ledPin ) {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}

void loop() {
  // Does something forever till you turn it off.
  // turn on and off then repeat
  int theNum = random(3);
  
  if ( theNum == 1 ) {
    flasher(redPin);
  } else if ( theNum == 2 ) {
    flasher(yellowPin);
  } else {
    flasher(greenPin);
  } 
}

