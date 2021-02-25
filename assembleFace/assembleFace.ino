#include <Adafruit_NeoPixel.h>

const int TOP_PIN = 13;
const int R_PIN = 12;
const int F_PIN = 11;

Adafruit_NeoPixel top = Adafruit_NeoPixel(9, TOP_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel front = Adafruit_NeoPixel(9, R_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel right = Adafruit_NeoPixel(9, F_PIN, NEO_GRB + NEO_KHZ800);

  // pre-defined colors
  const uint32_t RED_T = top.Color(0,255,0);
  const uint32_t ORANGE_T = top.Color(20,45,0);
  const uint32_t YELLOW_T = top.Color(40, 50, 0);
  const uint32_t GREEN_T = top.Color(50, 0 , 0);
  const uint32_t BLUE_T = top.Color(0,0,50);
  const uint32_t WHITE_T = top.Color(255,255,255);
  const uint32_t GREY_T = top.Color(15,15,15);

  const uint32_t RED_F = front.Color(0,255,0);
  const uint32_t ORANGE_F = front.Color(20,45,0);
  const uint32_t YELLOW_F = front.Color(40, 50, 0);
  const uint32_t GREEN_F = front.Color(50, 0 , 0);
  const uint32_t BLUE_F = front.Color(0,0,50);
  const uint32_t WHITE_F = front.Color(255,255,255);
  const uint32_t GREY_F = front.Color(15,15,15);

  const uint32_t RED_R = right.Color(0,255,0);
  const uint32_t ORANGE_R = right.Color(20,45,0);
  const uint32_t YELLOW_R = right.Color(40, 50, 0);
  const uint32_t GREEN_R = right.Color(50, 0 , 0);
  const uint32_t BLUE_R = right.Color(0,0,50);
  const uint32_t WHITE_R = right.Color(255,255,255);
  const uint32_t GREY_R = right.Color(15,15,15);
  
  // faces

  // step 1
  const uint32_t daisyTop[] = {GREY_T,WHITE_T, GREY_T,
                            WHITE_T, YELLOW_T, WHITE_T,
                            GREY_T, WHITE_T, GREY_T};
                            
  const uint32_t startTop[] = {GREY_T, GREY_T, GREY_T,
                              GREY_T, YELLOW_T, GREY_T,
                              GREY_T, GREY_T, GREY_T};

  const uint32_t middleFront1[] = {GREY_F, GREY_F, GREY_F,
                                  GREY_F, GREY_F, GREY_F,
                                  GREY_F, WHITE_F, GREY_F};
                                  
  const uint32_t rot1DaisyTop1[] = {GREY_T,GREY_T, GREY_T,
                                   WHITE_T, YELLOW_T, GREY_T,
                                    GREY_T, GREY_T, GREY_T};
                                    
  const uint32_t rot2DaisyTop1[] = {GREY_T,GREY_T, GREY_T,
                                   GREY_T, YELLOW_T, GREY_T,
                                    GREY_T, WHITE_T, GREY_T};

  const uint32_t rot3DaisyTop1[] = {GREY_T,GREY_T, GREY_T,
                                   GREY_T, YELLOW_T, WHITE_T,
                                    GREY_T, GREY_T, GREY_T}; 
                                    
  const uint32_t rot4DaisyTop1[] = {GREY_T,WHITE_T, GREY_T,
                                   GREY_T, YELLOW_T, GREY_T,
                                    GREY_T, GREY_T, GREY_T};

  const uint32_t rot1DaisyTop2[] = {GREY_T,WHITE_T, GREY_T,
                                   WHITE_T, YELLOW_T, GREY_T,
                                    GREY_T, GREY_T, GREY_T};

  const uint32_t rot2DaisyTop2[] = {GREY_T,GREY_T, GREY_T,
                                   WHITE_T, YELLOW_T, GREY_T,
                                    GREY_T, WHITE_T, GREY_T};

  const uint32_t rot3DaisyTop2[] = {GREY_T,GREY_T, GREY_T,
                                   GREY_T, YELLOW_T, WHITE_T,
                                    GREY_T, WHITE_T, GREY_T};                                                                                                                

  const uint32_t rot4DaisyTop2[] = {GREY_T, WHITE_T, GREY_T,
                                   GREY_T, YELLOW_T, WHITE_T,
                                    GREY_T, GREY_T, GREY_T}; 
                                                                                                              
  const uint32_t rot1DaisyTop3[] = {GREY_T,GREY_T, GREY_T,
                            WHITE_T, YELLOW_T, WHITE_T,
                            GREY_T, WHITE_T, GREY_T};

  const uint32_t rot2DaisyTop3[] = {GREY_T,WHITE_T, GREY_T,
                            GREY_T, YELLOW_T, WHITE_T,
                            GREY_T, WHITE_T, GREY_T};                                                                
  
  const uint32_t rot3DaisyTop3[] = {GREY_T,WHITE_T, GREY_T,
                            WHITE_T, YELLOW_T, WHITE_T,
                            GREY_T, GREY_T, GREY_T};  
  
  const uint32_t rot4DaisyTop3[] = {GREY_T,WHITE_T, GREY_T,
                            WHITE_T, YELLOW_T, GREY_T,
                            GREY_T, WHITE_T, GREY_T};  
  
  // faces off
  const uint32_t offTop[] = {GREY_T, GREY_T, GREY_T,
                             GREY_T, GREY_T, GREY_T,
                             GREY_T, GREY_T, GREY_T};

  const uint32_t offFront[] = {GREY_F, GREY_F, GREY_F,
                             GREY_F, GREY_F, GREY_F,
                             GREY_F, GREY_F, GREY_F};

  const uint32_t offRight[] = {GREY_R, GREY_R, GREY_R,
                             GREY_R, GREY_R, GREY_R,
                             GREY_R, GREY_R, GREY_R};

void setup() {
  // put your setup code here, to run once:
  // declare structure for RGB variable
  
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
}

void loop() {
  // put your main code here, to run repeatedly:
  // daisyTop(500);
  //Serial.println("Step 1: Create Daisy");
  //Serial.println("Select Current Layout");
  
  setFace(middleFront1,"front");
  setFace(rot1DaisyTop1, "top");
  setFace(offRight, "right");
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
