
#include <Button2.h>
#include <Servo.h>

#define PIN_PULS 12;

Button2 puls{PIN_PULS};

Servo myservo_pi;
Servo myservo_pd;

int vel = 0;

void setup() {
  // puls.setChangedHandler(changed);
  // puls.setPressedHandler(pressed);
  puls.setReleasedHandler(onReleaseDelay); // Retrasa la entrada del ciclo

  // puls.setTapHandler(tap);
  puls.setClickHandler(piesPuntillas);
  // puls.setLongClickDetectedHandler(longClickDetected);
  // puls.setLongClickHandler(longClick);
  
  // puls.setDoubleClickHandler(doubleClick);
  // puls.setTripleClickHandler(tripleClick);
}

void loop() {
  // put your main code here, to run repeatedly:
  puls.loop();
}

void onReleaseDelay() {
  delay(500);
}

void piesPuntillas() {
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
