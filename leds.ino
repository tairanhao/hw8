int led = 13;
int led2 = 12;

void setup() {
pinMode(led, OUTPUT);  // put your setup code here, to run once:

}

void loop() {
digitalWrite(led,HIGH);// s volt
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led,LOW);
digitalWrite(led2,LOW);
delay(1000);// o volt

// put your main code here, to run repeatedly:

}
