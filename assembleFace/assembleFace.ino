#include "pinConstants.h"
#include "colors.h"
#include "step1Faces.h"
#include "offFaces.h"

void setup() {
  // put your setup code here, to run once:

  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP);
  
  top.begin();
  right.begin();
  front.begin(); 
  Serial.begin(9600);
  
  top.setBrightness(64);
  right.setBrightness(64);
  front.setBrightness(64);
  
  top.show(); // Initialize all pixels to 'off'
  right.show();
  front.show();

  printInstructions();
}

void loop() {
  // put your main code here, to run repeatedly:
  step0();
  step1();
  
}

void setFace(uint32_t colors[], String face){
  if (face == "top"){
      for(int i = 0; i < 9; i++){
      top.setPixelColor(i,colors[i]);
      top.show();
    }
  }

  if (face == "front"){
      for(int i = 0; i < 9; i++){
      front.setPixelColor(i,colors[i]);
      front.show();
    }
  }

  if (face == "right"){
      for(int i = 0; i < 9; i++){
      right.setPixelColor(i,colors[i]);
      right.show();
    }
  }
  delay(1);
}

String getDirection(){
  String dir;
  
  xPosition = analogRead(VRx);
  mapX = map(xPosition, 0, 1023, -512, 512);

  if(mapX <= -100){
    dir = "right";
  } 
  else if(mapX >= 100){
    dir = "left";
  }

  return dir;
}

void step0(){
  setFace(offRight,"right");
  setFace(offFront, "front");
  setFace(startTop,"top");
}

void step1(){
  
}
void printInstructions(){
  Serial.println("Get to Know Your Cube!");
  Serial.println("U: up face clockwise || U': up face counter-clockwise");
  Serial.println("D: down face clockwise || D': down face counter-clockwise");
  Serial.println("L: left face downward || L': left face upward");
  Serial.println("R: right face upward || R': right face downward");
  Serial.println("F: front face clockwise || F': front face counter-clockwise");
  Serial.println("B: back face counter-clockwise || B': back face clockwise");
}
