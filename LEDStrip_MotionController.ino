const int motionsensor = 2;
const int LEDpin = 3;
const unsigned long LightDuration = 15000;
unsigned long LastMotionTime = 0;
bool isLightOn = false;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(motionsensor, INPUT);
  pinMode(LEDpin, OUTPUT);
  analogWrite(LEDpin,0);
}

// the loop function runs over and over again forever
void loop() {

  unsigned long currentTime = millis();
  int motion = digitalRead(motionsensor);
 

  if (motion == HIGH) {
    LastMotionTime = currentTime;
  }
  
  bool shouldBeOn = (currentTime - LastMotionTime < LightDuration);

  if (shouldBeOn && !isLightOn) {
    for(float i = 0; i <= 255; i+=0.1) {
    analogWrite(LEDpin, i);
    delay(1);
    }
    isLightOn = true;
}
  else if (!shouldBeOn && isLightOn) {
    analogWrite(LEDpin, 0);
    isLightOn = false;
  }  
  delay(50);
}





