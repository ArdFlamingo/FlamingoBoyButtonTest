#include "lib.h"

void Lib::activateButtons()
{
	pinMode(A, INPUT);				// Internal pullup not available; uses external pullup
	pinMode(B, INPUT_PULLUP);
	pinMode(C, INPUT);				// Internal pullup not available; uses external pullup
	pinMode(ONE, INPUT_PULLUP);
	pinMode(TWO, INPUT_PULLUP);
	pinMode(UP, INPUT_PULLUP);
	pinMode(DOWN, INPUT_PULLUP);
	pinMode(LEFT, INPUT);			// Internal pullup not available; uses external pullup
	pinMode(RIGHT, INPUT);			// Internal pullup not available; uses external pullup
}

bool Lib::pressed(uint8_t button)
{
	uint8_t read = digitalRead(button);

	return(read == LOW);
}