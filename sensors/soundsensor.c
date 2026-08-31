#define SOUND_SENSOR A0
#define LED_PIN 13

int threshold = 500; 

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int soundValue = analogRead(SOUND_SENSOR);

    Serial.print("Ниво на звук: ");
    Serial.println(soundValue);

    if (soundValue > threshold) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }

    delay(100);
}
