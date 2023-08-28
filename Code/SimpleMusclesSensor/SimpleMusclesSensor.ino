/* 
SimpleMusclesSensor By Serhii Trush for MIT License
https://github.com/techn0man1ac/SimpleMusclesSensor/
*/

#define interval 100
unsigned long previousMillis = 0;

#define SensorPin 7
#define MotorPin 13

bool MotorState = false;

unsigned long duration = 0;
unsigned long durationPrev = 0;

long difference = 0;

#define HighSensitivity 300
#define LowSensitivity -300

void setup() {
  Serial.begin(115200);
  pinMode(SensorPin, INPUT);
  pinMode(MotorPin, OUTPUT);
}

void loop() {
  duration = pulseIn(SensorPin, LOW);

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    difference = duration - durationPrev;

    if (difference > HighSensitivity) {
      MotorState = HIGH;
    }

    if (difference < LowSensitivity) {
      MotorState = LOW;
    }

    durationPrev = duration;
  }

  digitalWrite(MotorPin, MotorState);

  Serial.println(String(duration) + ", " + String(difference) + ", " + String(MotorState));
}