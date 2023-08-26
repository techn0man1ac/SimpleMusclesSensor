unsigned long previousMillis = 0;  // will store last time LED was updated
const long interval = 500;          // interval at which to blink (milliseconds)



unsigned long duration = 0;
unsigned long durationPrev = 0;
int pin = 7;


void setup() {
  Serial.begin(115200);
  pinMode(pin, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    durationPrev = durationPrev - duration;

    if (durationPrev > 15000) {
      digitalWrite(13, HIGH);
    } else {
       digitalWrite(13, LOW);
    }

     durationPrev = duration;
  }

  duration = pulseIn(pin, HIGH);

  Serial.print(duration);
  Serial.print(", ");
  Serial.println(durationPrev);
}