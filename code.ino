int sensorPin = A0; // sensor connected to analog pin A0
int sensorValue = 0; // variable to store the value coming from the sensor
int ledPin = 3; // LED connected to digital pin 3


void setup() 
{
  Serial.begin(9600);  // initialize serial communication at 9600 bits per second
  pinMode(ledPin, OUTPUT); // declare the ledPin as an OUTPUT
} 


void loop() 
{
  sensorValue = analogRead(sensorPin);  // read the value from the sensor
  Serial.println(sensorValue); // print the sensor value to the serial monitor

  if (sensorValue > 500)                
  {
    digitalWrite(ledPin, HIGH); // turn the ledPin on
  }
  else                                
  {
    digitalWrite(ledPin, LOW); // turn the ledPin off
  }
  delay(200); // delay 200 milliseconds
}