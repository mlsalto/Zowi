#include <Servo.h>

Servo myservo_pi;  // crea el objeto servo
Servo myservo_ri;
Servo myservo_pd;
Servo myservo_rd;

int vel = 0;    // velocidad del servo

void setup() {

// MOvimineto de levanta pie IZQ
   myservo_pi.attach(9);  // vincula el servo al pin digital 9
   myservo_ri.attach(10);  // vincula el servo al pin digital 9
   myservo_rd.attach(6); 
   myservo_pd.attach(5);  // vincula el servo al pin digital 9

      //servo parado (equivalente a angulo 90º)
   vel = 90;
   myservo_pi.write(vel);  
   myservo_ri.write(vel);    // vincula el servo al pin digital 9
   myservo_rd.write(vel);  
   myservo_pd.write(vel);  // vincula el servo al pin digital 9
   delay(500);    

   //servo 100% CCW (equivalente a angulo 0º)
   vel = 50;
   myservo_pi.write(vel);              
   delay(150); 

  vel = 90;
   myservo_pi.write(vel);              
   delay(500);  


  delay (2000);


  //movimiento rodilla hacia dentro IZQ y arreglo de la derecha
  
   vel = 90;
   myservo_ri.write(vel);              
   delay(500);    

   //servo 100% CW (equivalente a angulo 180º)
   vel = 180;
   myservo_ri.write(vel);                
   delay(150); 

  vel = 90;
   myservo_ri.write(vel);    
         
   delay(500);

  delay(2000);

 vel = 90;
   myservo_rd.write(vel);             
   delay(500);    

   //servo 100% CW (equivalente a angulo 180º)
   vel = 180;         
   myservo_rd.write(vel);              
   delay(150); 

  vel = 90;
   myservo_rd.write(vel);            
   delay(500);


  //bajar pie de nuevo IZQ 
  delay (2000);

  //servo parado (equivalente a angulo 90º)
   vel = 90;
   myservo_pi.write(vel);              
   delay(500);    

   //servo 100% CCW (equivalente a angulo 0º)
   vel = 130;
   myservo_pi.write(vel);              
   delay(150); 

  vel = 90;
   myservo_pi.write(vel);              
   delay(500);  


delay(2000);

   // levantar pie derecho 
      //servo parado (equivalente a angulo 90º)
   vel = 90;
   myservo_pd.write(vel);              
   delay(500);    

   //servo 100% CCW (equivalente a angulo 0º)
   vel = 130;
   myservo_pd.write(vel);              
   delay(150); 

  vel = 90;
   myservo_pd.write(vel);              
   delay(500);  
  }

void loop() {/*
   //servo parado (equivalente a angulo 90º)
   vel = 90;
   myservo_pi.write(vel);              
   delay(500);    

   //servo 100% CW (equivalente a angulo 180º)
   vel = 160;
   myservo_pi.write(vel);              
   delay(250); 

   //servo 100% CCW (equivalente a angulo 0º)
   vel = 20;
   myservo_pi.write(vel);              
   delay(250); */
}
