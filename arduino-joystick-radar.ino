#include <Servo.h>
#include <LiquidCrystal.h> 

LiquidCrystal lcd(12, 11, 5, 4, 2, 7);

Servo radarServo;

const int servoPin   = 3;  
const int joystickX  = A0;
const int trigPin    = 8; 
const int echoPin    = 9; 
const int buzzerPin  = 10; 
int servoAngle = 0;

void setup() {
  radarServo.attach(servoPin);
  radarServo.write(servoAngle);
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);  
  pinMode(echoPin, INPUT);   
  pinMode(buzzerPin, OUTPUT); 

  lcd.begin(16, 2);
  lcd.print("RADAR SISTEMI");
  lcd.setCursor(0, 1);       
  lcd.print("Baslatiliyor...");
  
  delay(1500);              
  lcd.clear();              
}

void loop() {
  int joystickDegree = analogRead(joystickX);

  if (joystickDegree > 600) {
    servoAngle += 5; 
  }
  else if (joystickDegree < 400) { 
    servoAngle -= 5;
  }

  servoAngle = constrain(servoAngle, 0, 180);
  radarServo.write(servoAngle);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long time = pulseIn(echoPin, HIGH, 30000);
  long distance = time * 0.034 / 2;

  Serial.print("Mesafe: ");
  Serial.println(distance);

  lcd.setCursor(0, 0);
  lcd.print("A:");
  lcd.print(servoAngle);
  lcd.print("   ");

  lcd.setCursor(8, 0);
  lcd.print("M:");
  lcd.print(distance);
  lcd.print("cm   ");

  if (distance > 0 && distance < 10) {
    tone(buzzerPin, 1500);
    
    lcd.setCursor(0, 1); // Alt satır
    lcd.print("R:[");
    for (int i = 0; i < 10; i++) {
      lcd.write(255);
    }
    lcd.print("]");
  } 
  else if (distance >= 10 && distance < 25) {
    tone(buzzerPin, 1000);
    delay(50);
    noTone(buzzerPin);
    
    lcd.setCursor(0, 1); // Alt satır
    lcd.print("R:[");
    lcd.write(255); lcd.write(255); lcd.write(255); 
    lcd.print("----");                             
    lcd.write(255); lcd.write(255); lcd.write(255); 
    lcd.print("]");
  } 
  else if (distance >= 25 && distance < 45) {
    tone(buzzerPin, 800);
    delay(100);
    noTone(buzzerPin);
    
    lcd.setCursor(0, 1);
    lcd.print("R:[");
    lcd.write(255); lcd.write(255); 
    lcd.print("------");            
    lcd.write(255); lcd.write(255); 
    lcd.print("]");
  } 
  else {
    noTone(buzzerPin);  
    
    lcd.setCursor(0, 1); 
    lcd.print("R:[----------]"); 
  }

  delay(30);
}