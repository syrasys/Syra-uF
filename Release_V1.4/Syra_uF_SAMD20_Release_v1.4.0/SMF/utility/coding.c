 /*
     Copyright (C) 2015 - 2021, O.NW
 
     This program is free software: you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
 
 /*	
	Author : O.NW
	dev.nww@gmail.com	
*/
 
//#######################################################################//
//--------------------------  Basic Coding  -----------------------------//
//#######################################################################//
//------------------- Libraries
#include "sam.h"

#include "coding.h"

///////////////////////////////////////////////////////////////////////////
//#######################################################################//
//-------------------
uint8_t Get_Sum(uint8_t* pData, uint16_t length)
{
	uint8_t x = 0;
	
	while(length > 0)
	{
		x += *pData;
		
		pData++;
		length--;
	}
	
	return x;
}

///////////////////////////////////////////////////////////////////////////
//#######################################################################//
//-------------------
uint8_t Get_XOR(uint8_t* pData, uint16_t length)
{
	uint8_t x = 0;
	
	while (length > 0)
	{
		x ^= *pData;
		
		pData++;
		length--;
	}
	
	return x;
}

//***********************************************************************//
//#######################################################################//
///////////////////////////////////////////////////////////////////////////
