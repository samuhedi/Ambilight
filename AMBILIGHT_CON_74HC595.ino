const bool ShiftPWM_balanceLoad = false;
const int ShiftPWM_latchPin=8;
const bool ShiftPWM_invertOutputs = true;
#include <ShiftPWM.h>


unsigned char maxBrightness = 255;
unsigned char pwmFrequency = 75;
int numRegisters = 6;
int numRGBleds = numRegisters*8/3;

static const uint8_t prefix[] = {'A','d','a'};


void setup() {
  delay (2000);
  Serial.begin(115200); // open serial
  ShiftPWM.SetAmountOfRegisters(numRegisters);
  ShiftPWM.SetPinGrouping(1);
  ShiftPWM.Start(pwmFrequency,maxBrightness); 
  ShiftPWM.SetAll(0);
}

void loop() 
{
  Serial.print("Ada\n");
  for(int i = 0; i < sizeof prefix; ++i) {
    waitLoop: while (!Serial.available()) ;;
    if(prefix[i] == Serial.read()) continue;
    i = 0;
    goto waitLoop;
  }
   ShiftPWM.SetAll(0);
   for (int iLed = -1; iLed < numRGBleds; iLed++) 
   {
    byte r, g, b;    
    while(!Serial.available());
    r = Serial.read();
    while(!Serial.available());
    g = Serial.read();
    while(!Serial.available());
    b = Serial.read();

    ShiftPWM.SetRGB(iLed,r,g,b);
    } 
  
}

