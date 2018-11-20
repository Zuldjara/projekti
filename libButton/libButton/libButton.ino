#include "Button.h"

Button S1(10, 2000);
Button S2(11);

#define Segment1 8
#define Segment2 2
//#define Segment3
#define Segment4 3
//#define Segment5 8
#define Segment6 4
#define Segment7 5
//#define Segment8
#define Segment9 6
#define Segment10 7

#define SegmentON LOW
#define SegmentOFF HIGH


void Number0(){
  
digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentOFF);
}

void Number1(){
  
digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentOFF);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentOFF);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentOFF);

}

void Number2(){
  

digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentOFF);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentON);

}

void Number3(){
  

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentON);

}

void Number4(){

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentOFF);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentOFF);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);
}

void Number5(){
  
digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentOFF);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);

}

void Number6(){
  
digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentOFF);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);
}

void Number7(){

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentOFF);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentOFF);
}

void Number8(){

digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);

}

void Number9(){

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);

}

void setup(){
  Serial.begin(9600);

  pinMode (Segment1, OUTPUT);
pinMode (Segment2, OUTPUT);
//pinMode (Segment3, OUTPUT);
pinMode (Segment4, OUTPUT);
//pinMode (Segment5, OUTPUT);
pinMode (Segment6, OUTPUT);
pinMode (Segment7, OUTPUT);
//pinMode (Segment8, OUTPUT);
pinMode (Segment9, OUTPUT);
pinMode (Segment10, OUTPUT);

}

void showNum(int i){
  Serial.print("showNum i= ");
  Serial.println(i);
  switch(i){
    case 0: Number0();break;
    case 1: Number1();break;
    case 2: Number2();break;
    case 3: Number3();break;
    case 4: Number4();break;
    case 5: Number5();break;
    case 6: Number6();break;
    case 7: Number7();break;
    case 8: Number8();break;
    case 9: Number9();break;
  }
}

int numberplus=0;

void count(){
 
  for(int x=0;x<10;x++){
    showNum(x);
    Serial.print("for-loopissa. x= ");
    Serial.println(x);
    delay(200);
  }
}




  
void loop(){
  if(S1.pressed()){
    Serial.println("S1 pressed");

    if (numberplus<10){
    numberplus++;

    if (numberplus==0){
      Number0();
    }
    if (numberplus==1){
      Number1();
    }
    if (numberplus==2){
      Number2();
    }
    if (numberplus==3){
      Number3();
    }
    if (numberplus==4){
      Number4();
    }
    if (numberplus==5){
      Number5();
    }
    if (numberplus==6){
      Number6();
    }
    if (numberplus==7){
      Number7();
    }
    if (numberplus==8){
      Number8();
    }
    if (numberplus==9){
      Number9();
    }
  }
  if (numberplus>9){
  numberplus=9;
  }
  }

   

  
  

  if(S2.pressed()){
    Serial.println("S2 pressed");

    if (numberplus<10){

    numberplus--;

    if (numberplus==0){
      Number0();
    }
    if (numberplus==1){
      Number1();
    }
    if (numberplus==2){
      Number2();
    }
    if (numberplus==3){
      Number3();
    }
    if (numberplus==4){
      Number4();
    }
    if (numberplus==5){
      Number5();
    }
    if (numberplus==6){
      Number6();
    }
    if (numberplus==7){
      Number7();
    }
    if (numberplus==8){
      Number8();
    }
    if (numberplus==9){
      Number9();
    }
  }
  if (numberplus<0){
    numberplus=0;
  }
  }
}
  
 
