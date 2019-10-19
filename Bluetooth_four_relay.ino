#define PinA 4
#define PinB 5
#define PinC 6
#define PinD 7
int state = 0;

void setup() {
 pinMode(PinA, OUTPUT);
 pinMode(PinB, OUTPUT); 
 pinMode(PinC, OUTPUT);
 pinMode(PinD, OUTPUT);
 digitalWrite(PinA, LOW);
 digitalWrite(PinB, LOW);
 digitalWrite(PinC, LOW);
 digitalWrite(PinD, LOW);
 Serial.begin(38400); 
}
void loop() {
 if(Serial.available() > 0){ 
 state = Serial.read(); 
 Serial.print(Serial.available());
}

if (state == '0') {
 digitalWrite(PinA, LOW);
 Serial.println("OFF"); 
 state = 0;
}
else if (state == '1') {
 digitalWrite(PinA, HIGH);
 Serial.println("ON");
 state = 0;
} 
else if (state == '2') {
 digitalWrite(PinB, LOW);
 Serial.println("OFF");
 state = 0;
} 
else if (state == '3') {
 digitalWrite(PinB, HIGH);
 Serial.println("ON");
 state = 0;
} 
else if (state == '4') {
 digitalWrite(PinC, LOW);
 Serial.println("OFF");
 state = 0;
} 
else if (state == '5') {
 digitalWrite(PinC, HIGH);
 Serial.println("ON");
 state = 0;
} 
else if (state == '6') {
 digitalWrite(PinD, LOW);
 Serial.println("OFF");
 state = 0;
} 
else if (state == '7') {
 digitalWrite(PinD, HIGH);
 Serial.println("ON");
 state = 0;
} 
}
