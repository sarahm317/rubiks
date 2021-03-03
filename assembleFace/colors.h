#include <Adafruit_NeoPixel.h>

const int TOP_PIN = 13;
const int R_PIN = 12;
const int F_PIN = 11;

Adafruit_NeoPixel top = Adafruit_NeoPixel(9, TOP_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel front = Adafruit_NeoPixel(9, R_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel right = Adafruit_NeoPixel(9, F_PIN, NEO_GRB + NEO_KHZ800);

// set top colors
const uint32_t RED_T = top.Color(0,255,0);
const uint32_t ORANGE_T = top.Color(20,45,0);
const uint32_t YELLOW_T = top.Color(40, 50, 0);
const uint32_t GREEN_T = top.Color(50, 0 , 0);
const uint32_t BLUE_T = top.Color(0,0,50);
const uint32_t WHITE_T = top.Color(255,255,255);
const uint32_t GREY_T = top.Color(15,15,15);

// set front colors
const uint32_t RED_F = front.Color(0,255,0);
const uint32_t ORANGE_F = front.Color(20,45,0);
const uint32_t YELLOW_F = front.Color(40, 50, 0);
const uint32_t GREEN_F = front.Color(50, 0 , 0);
const uint32_t BLUE_F = front.Color(0,0,50);
const uint32_t WHITE_F = front.Color(255,255,255);
const uint32_t GREY_F = front.Color(15,15,15);

// set right colors
const uint32_t RED_R = right.Color(0,255,0);
const uint32_t ORANGE_R = right.Color(20,45,0);
const uint32_t YELLOW_R = right.Color(40, 50, 0);
const uint32_t GREEN_R = right.Color(50, 0 , 0);
const uint32_t BLUE_R = right.Color(0,0,50);
const uint32_t WHITE_R = right.Color(255,255,255);
const uint32_t GREY_R = right.Color(15,15,15);
