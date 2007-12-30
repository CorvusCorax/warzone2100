/*
	This file is part of Warzone 2100.
	Copyright (C) 1999-2004  Eidos Interactive
	Copyright (C) 2005-2007  Warzone Resurrection Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/
/*! \file fractions.h
 *  \brief Routines to provide simple maths functions that work on both PSX & PC
 */

// Use the type "FRACT" instead of FLOAT
//  - This is defined as a float on PC and a 20.12 fixed point number on PSX
//
//  Use:-
//		SQRT(fract);		to get square root of a fract (returns a fract)
//      sqrtf(int);			to get a square root of an integer (returns an UDWORD) (no, it does not! - Per)
//
// Also PERCENT(int,int);	// returns a int value 0->100 of the percentage of the first param over the second
//

// To multiply a float by a integer just use the normal operator
//   e.g.   FractValue2=FractValue*Interger;
//
// same is true of divide

#ifndef _FRACTIONS_
#define _FRACTIONS_

/* Check the header files have been included from frame.h if they
 * are used outside of the framework library.
 */
#if !defined(_frame_h) && !defined(FRAME_LIB_INCLUDE)
#error Framework header files MUST be included from Frame.h ONLY.
#endif

#include "types.h"
#include <math.h>

#define PERCENT(a,b) (((a)*100)/(b))
#define PERNUM(range,a,b) (((a)*range)/(b))

#ifndef M_PI
# define M_PI 3.14159265358979323846
#endif

static inline int math_round(float x)
{
	// Ensure that float truncation results in a proper rounding
	if (x < 0.f)
		return x - 0.5f;
	else
		return x + 0.5f;
}

#endif
