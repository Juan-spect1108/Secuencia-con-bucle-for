
// Designed by: Juan Rodrigo Guzman Martinez

int retardo=500;

void setup() {
for(int pinLed=4; pinLed <8; pinLed++){
pinMode(pinLed, OUTPUT);
}
}

void loop() {
for(int pinLed=4;  pinLed <8; pinLed++){
digitalWrite(pinLed, HIGH);
delay(retardo);
digitalWrite(pinLed, LOW);
}

for(int pinLed =8;  pinLed >4; pinLed--){
digitalWrite(pinLed, HIGH);
delay(retardo);
digitalWrite(pinLed, LOW);
}
}
