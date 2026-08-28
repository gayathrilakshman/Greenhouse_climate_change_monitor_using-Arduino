int Vo;
float R1 = 100000;
float logR2, R2, TempF, TempC, TempK;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
int redPin = 3;
int greenPin = 6;
int bluePin = 11;
int tempPin= A0;

void setup() {
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(redPin,LOW); 
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
  delay(1000);
  
  digitalWrite(redPin,HIGH); 
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  delay(1000);
  
  digitalWrite(redPin,HIGH); 
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  delay(1000);
}
void setColor(int redValue, int greenValue, int blueValue) 
{
  analogWrite(redPin, 255 - redValue);   // Invert the value for common anode
  analogWrite(greenPin, 255 - greenValue);
  analogWrite(bluePin, 255 - blueValue);
}
