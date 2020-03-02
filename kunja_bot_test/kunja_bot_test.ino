int relay_1 = 44;
int relay_2 = 45;
int relay_3 = 46;

void setup() {
  // put your setup code here, to run once:
pinMode (relay_1, OUTPUT);
pinMode (relay_2, OUTPUT);
pinMode (relay_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relay_1, HIGH);
delay(1000);
digitalWrite(relay_1, LOW);
delay(1000);
digitalWrite(relay_2, HIGH);
delay(1000);
digitalWrite(relay_2, LOW);
delay(1000);
digitalWrite(relay_3, HIGH);
delay(1000);
digitalWrite(relay_3, LOW);
delay(1000);
}
