#include <NewPing.h>


#define MAX_DISTANCE 100 //cms
#define TRIGGER_PIN 8
#define ECHO_PIN 9
#define PIN_INTERVEL 1000 //ms
NewPing sonar(TRIGGER_PIN,ECHO_PIN,MAX_DISTANCE);
void setup() {
  // put your setup code here, to run once:
  
  //configurar puerto serie a 9600 bps
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    float d = sonar.ping_cm();
    
  //escribir por serie
  Serial.print(d);
  Serial.println("cm");
}
