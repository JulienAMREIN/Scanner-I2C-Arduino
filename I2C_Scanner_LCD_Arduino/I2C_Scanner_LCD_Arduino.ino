#include <Wire.h>

void setup()
  {
    Wire.begin();
    Serial.begin(9600);
    while (!Serial);
    
    
    byte codeRetour = 9;
    byte adresse = 1;
  
    for(adresse = 1; adresse < 127; adresse++)
      {
      Wire.beginTransmission(adresse);
      codeRetour = Wire.endTransmission();
      
      if (codeRetour == 0)
        {
          Serial.print("0x");
          if (adresse < 16)
            Serial.print("0");
          Serial.print(adresse,HEX);
          Serial.print("\n");
        }
      }
  }

void loop()
  {
  
  }
