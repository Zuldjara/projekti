#include "Button.h"
#include "Scalingseg.h"
#define vcc1 5

Button S1(3, 2000);
Button S2(4);

Scalingseg led1(13, 12, 11, 10);





void setup() {

Serial.begin(9600);


pinMode(vcc1, OUTPUT);
digitalWrite(vcc1, HIGH);

}






  void loop(){

if(S1.pressed()){
  Serial.println("Pressed");
  led1.showNumPlus();
}

if(S2.pressed()){
  Serial.println("Pressed");
  led1.showNumMinus();
}

    
  }

