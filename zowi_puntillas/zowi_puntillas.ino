

#include <Servo.h>

Servo myservo_pi;
Servo myservo_pd;

int vel = 0;

void setup() {
  // put your setup code here, to run once:
  myservo_pi.attach(9);
  myservo_pd.attach(5);

// pies parados
  vel = 90;
  myservo_pi.write(vel);
  myservo_pd.write(vel);
  delay(500);


// pies puntillas
  vel = 50;
  myservo_pi.write(vel+90);
  myservo_pd.write(vel);
  delay(600);

// parar
  vel = 90;
  myservo_pi.write(vel);
  myservo_pd.write(vel);
  delay(500);

// descanso


// vuelta abajo
  vel = 130;
  myservo_pi.write(vel-90);
  myservo_pd.write(vel);
  delay(500);

// pies parados
  vel = 90;
  myservo_pi.write(vel);
  myservo_pd.write(vel);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
