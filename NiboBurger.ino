
#include <NIBOburger.h>                           // open the library of nibo burger

void setup() {
  NIBOburger.begin();                        // initialize the nibo burger robot
  NIBOburger.checkVoltage();                       // check the battery voltage
  int speed = 0;                // define speed 0 for both motors
}
void loop() {

   switch (NIBOburger.getKeyChar()) {                 // switch functgion for enabilng each key function (same as "if") to make it specified
    case 'A': Engine.setPWM(1200, 1200); break;            // by pressing A key, the robot go forward with speed 800
    case 'B': Engine.setPWM(0, 0); break;             // by pressing B key, the robot will stop
  }
  //------------------------------------------sensor Front Left--------------------------------------------------------------------
  if (SensorFL.get() > 100) {                     // if the sesnor value is greater than 100
    Engine.setPWM(0, 0);                             // both motors will stop
    delay(500);                                           // 500 milisecond delay
    Engine.setPWM(-500,-500);
    delay(500);
     Engine.setPWM(500,-500);
     delay(500);
    Engine.setPWM(1200,1200);

    
  
  }
//------------------------------------------sensor Front Right--------------------------------------------------------------------
  else if (SensorFR.get() > 100) {                     // if the sesnor value is greater than 100
    Engine.setPWM(0, 0);                             // both motors will stop
    delay(500);                                           // 500 milisecond delay
    Engine.setPWM(-500,-500);
    delay(500);
     Engine.setPWM(-500,+500);
     delay(500);
    Engine.setPWM(1200,1200);

  }
//------------------------------------------sensor Front Left Side--------------------------------------------------------------------
 else if (SensorFLL.get() > 100) {                     // if the sesnor value is greater than 100
    Engine.setPWM(0, 0);                             // both motors will stop
   delay(500);                                           // 500 milisecond delay
    Engine.setPWM(-500,-500);
    delay(500);
     Engine.setPWM(500,-500);
     delay(200);
    Engine.setPWM(1200,1200);


 }
  //------------------------------------------sensor Front Right Side--------------------------------------------------------------------
  
  else if (SensorFRR.get() > 100) {                     // if the sesnor value is greater than 100
    Engine.setPWM(0, 0);                             // both motors will stop
   delay(500);                                           // 500 milisecond delay
    Engine.setPWM(-500,-500);
    delay(500);
     Engine.setPWM(-500,500);
     delay(200);
    Engine.setPWM(1200,1200);


   } 
 // -----------------------------------------------------------------------------------------------------------------------------------------------






}
