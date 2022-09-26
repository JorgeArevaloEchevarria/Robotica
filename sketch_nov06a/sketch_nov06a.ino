#include <NewPing.h>


#include <BiColorLED.h>

int  RED_PINE =10;
int GREEN_PINE =11;
 int val;
BiColorLED led=BiColorLED(4,5);

void setup() {
  // put your setup code here, to run once:
  //pinMode(RED_PINE, OUTPUT);
 // pinMode(GREEN_PINE, OUTPUT);
  led.setColor(0,1);
  led.setBlinkSpeed(450,50);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
 
  for(val = 255; val > 0; val--) { 
      analogWrite(RED_PINE, val); //dim red
      analogWrite(GREEN_PINE, 255 - val); // brighten green
      delay(15);
    }
    for(val = 0; val < 255; val++) { 
      analogWrite(RED_PINE, val); //brighten red
      analogWrite(GREEN_PINE, 255 - val); //dim green
      delay(15);
    }
  

  /*led.setColor(2);
  color=led.getColor();
  system.out.print(color);
  
  delay(15);
  
  led.setColor(1);
  color = led.getColor();
  system.out.print(color);
  delay(15);*/
}
