#include <TFT_eSPI.h>

#include "lib/lib.h"

TFT_eSPI tft = TFT_eSPI();

Lib lib;

void setup()
{
	tft.init();
	lib.activateButtons();
	tft.fillScreen(TFT_BLUE);
}

void loop()
{
  tft.setCursor(0, 0);
  
	if(lib.pressed(A))
	{
    tft.fillScreen(TFT_BLUE);
		tft.print("Hello World!");
	}

 if(lib.pressed(B))
 {
   tft.fillScreen(TFT_BLUE);
   tft.print("The library is working!");
 }
}
