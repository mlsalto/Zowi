#include <Servo.h>

Servo myservo_ri;
Servo myservo_rd;

int vel = 0;

void setup() {
  myservo_ri.attach(10);
  myservo_rd.attach(6);

// rodillas paradas
  vel = 90;
  myservo_ri.write(vel);
  myservo_rd.write(vel);
  delay(500);

// rodillas giran a izquierdas (hast ala mitad por ejemplo)
  vel = 70;
  myservo_ri.write(vel);
  myservo_rd.write(vel);
  delay(600);

// rodillas paran
  vel = 90;
  myservo_ri.write(vel);
  myservo_rd.write(vel);
  delay(500);

// rodillas vuelven al sitio anterior
  vel = 110;
  myservo_ri.write(vel);
  myservo_rd.write(vel);
  delay(600);

// rodillas paran
  vel = 90;
  myservo_ri.write(vel);
  myservo_rd.write(vel);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
