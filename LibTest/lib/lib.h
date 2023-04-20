#pragma once

#include <stdio.h>

class Lib
{
	private:
		#define A		34		// A Button
		#define B		25		// B Button
		#define C		35		// C Button
		#define ONE		32		// 1 Button
		#define TWO		33		// 2 Button
		#define UP		26		// Up Button
		#define DOWN	27		// Down Button
		#define LEFT	36		// Left Button
   		#define RIGHT 	39		// Right Button

	public:
		void activateButtons();

		bool pressed(uint8_t button);
};

extern Lib lib;