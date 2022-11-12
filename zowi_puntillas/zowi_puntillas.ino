
#include <Button2.h>
#include <Servo.h>

#define PIN_PULS 12

Button2 puls{PIN_PULS};

Servo sv_pi;
Servo sv_pd;
Servo sv_ri;
Servo sv_rd;

int vel = 0;

void setup() {
  sv_ri.attach(10);
  sv_rd.attach(6);
  sv_pi.attach(9);
  sv_pd.attach(5);

  // puls.setChangedHandler(changed);
  // puls.setPressedHandler(pressed);
  puls.setReleasedHandler(onReleaseDelay); // Retrasa la entrada del ciclo

  // puls.setTapHandler(tap);
  puls.setClickHandler(piesPuntillas);
  // puls.setLongClickDetectedHandler(longClickDetected);
  puls.setLongClickHandler(vueltaDerecha);
  
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
// pies parados
  vel = 90;
  sv_pi.write(vel);
  sv_pd.write(vel);
  delay(500);


// pies puntillas
  vel = 50;
  sv_pi.write(vel+90);
  sv_pd.write(vel);
  delay(600);

// parar
  vel = 90;
  sv_pi.write(vel);
  sv_pd.write(vel);
  delay(500);

// descanso


// vuelta abajo
  vel = 130;
  sv_pi.write(vel-90);
  sv_pd.write(vel);
  delay(500);

// pies parados
  vel = 90;
  sv_pi.write(vel);
  sv_pd.write(vel);
  delay(500);
}

void vueltaDerecha() {
// rodillas paradas
  vel = 90;
  sv_ri.write(vel);
  sv_rd.write(vel);
  delay(500);

// rodillas giran a izquierdas (hast ala mitad por ejemplo)
  vel = 110;
  sv_ri.write(vel);
  sv_rd.write(vel);
  delay(600);

// rodillas paran
  vel = 90;
  sv_ri.write(vel);
  sv_rd.write(vel);
  delay(500);

// rodillas vuelven al sitio anterior
  vel = 70;
  sv_ri.write(vel);
  sv_rd.write(vel);
  delay(600);

// rodillas paran
  vel = 90;
  sv_ri.write(vel);
  sv_rd.write(vel);
  delay(500);
}
