#include <Servo.h>

Servo radarServo;

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 11;

long duration;
int distance;

int getDistance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    return 400;
  }

  return duration * 0.0343 / 2;
}

void setup() {

  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  radarServo.attach(servoPin);

  radarServo.write(90);
  delay(1000);
}

void loop() {

  // Sweep left to right
   for (int pos = 20; pos <= 160; pos++) {

    radarServo.write(pos);
    delay(10);

    distance = getDistance();

    Serial.print(pos);
    Serial.print(",");
    Serial.println(distance);
  }

  // Sweep right to left
  for (int pos = 160; pos >= 20; pos--)  {

    radarServo.write(pos);
    delay(10);

    distance = getDistance();

    Serial.print(pos);
    Serial.print(",");
    Serial.println(distance);
  }
}