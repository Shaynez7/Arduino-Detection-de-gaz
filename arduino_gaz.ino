IN1     2
IN2     3
<Servo.h>
Servo myservo;
int pos = 180;

void setup() {
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    myservo.attach(9);
    Serial.begin(9600);
    pinMode(A0, INPUT);
    for (pos = 115; pos >=20; pos -= 1){
        myservo.write(pos);
    }
}

void loop () {
    digitalWrite(IN1, HIGH);
    int valeur=analogRead(A0)
    Serial.println(valeur)
    delay(1000);
    if (valeur<150){
        digitalWrite(IN2, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        Serial.println("-150");
        myservo.write(20);
    }
    else {
        digitalWrite(IN2, LOW);
        digitalWrite(7, LOW);
        digitalWrite(6, HIGH);
        Serial.println("+150");
        myservo.write(115);
        delay(1000);
    }
}