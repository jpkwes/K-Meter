/* ----------------------------------------------------------------------------

   K-Meter
   =======
   Implementation of a K-System meter according to Bob Katz' specifications

   Copyright (c) 2010 Martin Zuther (http://www.mzuther.de/)

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   Thank you for using free software!

---------------------------------------------------------------------------- */

#ifndef __METER_SEGMENT_H__
#define __METER_SEGMENT_H__

#include "juce_library_code/juce_header.h"


//==============================================================================
/**
*/
class MeterSegment : public Component
{
public:
    MeterSegment(const String &componentName, float fThreshold, float fRange, int nColor);
    ~MeterSegment();

	void setLevels(float newLevel, float newPeak);
    void paint(Graphics& g);
	void resized();

private:
	float fHue;
	float fBrightness;

	float fLevelThreshold;
	float fLevelRange;

	float fLevel;
	bool bPeak;
};


#endif  // __METER_SEGMENT_H__