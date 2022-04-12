int redPin = 5;
int greenPin = 6;
int bluePin = 9;
String colour;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("What colour would you like to display?");

  while (Serial.available() == 0) {
    
  }
  colour = Serial.readString();
  if (colour == "Red") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  }
  if (colour == "Green") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  }
  if (colour == "Blue") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  }
  if (colour == "White") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  }
  if (colour == "Aqua") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  }
  if (colour == "Yellow") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  }
  if (colour == "Magenta") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  }
  if (colour == "Violet") {
  analogWrite(redPin, 125);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);  
  }
  if (colour == "Raspberry") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 125);  
  }
  if (colour == "Ocean") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 125);
  analogWrite(bluePin, 255);  
  }
  if (colour == "Turquoise") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 125);  
  }
  if (colour == "Lime") {
  analogWrite(redPin, 125);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);  
  }
  if (colour == "Orange") {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 125);
  analogWrite(bluePin, 0);  
  }
  if (colour == "End") {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);  
  }
}
