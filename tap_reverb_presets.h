/*                                                     -*- linux-c -*-
    Copyright (C) 2004 Tom Szilagyi
    
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

    $Id: tap_reverb_presets.h,v 1.4 2004/02/19 20:30:58 tszilagyi Exp $
*/

#include "tap_reverb.h"


/* Number of reverb presets */
#define NUM_MODES 38


/* Reverberator presets data */
REVERB_DATA reverb_data[NUM_MODES] = {
	{
		"AfterBurn (Short)",
		5,
		5,
		{
			{0.1015f, 70.22f, 0.4845f},
			{0.1042f, 80.76f, 0.4000f},
			{0.1108f, 65.25f, 0.4000f},
			{0.1309f, 80.00f, 0.5342f},
			{0.1386f, 52.84f, 0.4000f},
		},
		{
			{0.0067f, 65.00f},
			{0.0061f, 65.00f},
			{0.0059f, 65.00f},
			{0.0055f, 65.00f},
			{0.0101f, 80.00f},
		},
		400.0f,
		10000.0f,
	},
	{
		"AfterBurn (Long) ",
		5,
		5,
		{
			{0.1077f, 70.22f, 0.4845f},
			{0.1124f, 80.76f, 0.4000f},
			{0.1185f, 65.25f, 0.4000f},
			{0.1866f, 80.00f, 0.5342f},
			{0.1943f, 52.84f, 0.4000f},
		},
		{
			{0.0067f, 65.00f},
			{0.0061f, 65.00f},
			{0.0059f, 65.00f},
			{0.0055f, 65.00f},
			{0.0101f, 80.00f},
		},
		400.0f,
		10000.0f,
	},
	{
		"  Drum Chamber",
		5,
		7,
		{
			{0.0520f, 70.22f, 0.4720f},
			{0.0598f, 80.76f, 0.4000f},
			{0.0644f, 65.25f, 0.4000f},
			{0.0737f, 80.00f, 0.6957f},
			{0.0845f, 52.84f, 0.7205f},
		},
		{
			{0.0049f, 67.11f},
			{0.0069f, 59.05f},
			{0.0073f, 87.59f},
			{0.0079f, 59.67f},
			{0.0085f, 65.87f},
			{0.0095f, 75.18f},
			{0.0100f, 71.46f},
		},
		400.0f,
		10000.0f,
	},
	{
		"Garage               ",
		5,
		4,
		{
			{0.0280f, 82.20f, 0.4720f},
			{0.0303f, 80.20f, 0.5652f},
			{0.0325f, 77.30f, 0.6211f},
			{0.0389f, 75.30f, 0.5217f},
			{0.0415f, 59.67f, 0.6522f},
		},
		{
			{0.0067f, 65.00f},
			{0.0061f, 65.00f},
			{0.0059f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		10000.0f,
	},
	{
		"Garage (Bright)",
		5,
		4,
		{
			{0.0280f, 82.20f, 0.4720f},
			{0.0303f, 80.20f, 0.5652f},
			{0.0325f, 77.30f, 0.6211f},
			{0.0389f, 75.30f, 0.5217f},
			{0.0415f, 59.67f, 0.6522f},
		},
		{
			{0.0067f, 65.00f},
			{0.0061f, 65.00f},
			{0.0059f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		10000.0f,
	},
	{
		"Gymnasium      ",
		6,
		5,
		{
			{0.1015f, 70.22f, 0.4845f},
			{0.1042f, 80.76f, 0.4000f},
			{0.1108f, 65.25f, 0.4000f},
			{0.1309f, 80.00f, 0.5342f},
			{0.1386f, 52.84f, 0.4000f},
			{0.0520f, 72.08f, 0.4000f},
		},
		{
			{0.0067f, 65.00f},
			{0.0061f, 65.00f},
			{0.0059f, 65.00f},
			{0.0055f, 65.00f},
			{0.0101f, 80.00f},
		},
		400.0f,
		10000.0f,
	},
	{
		"          Gymnasium (Bright)",
		7,
		4,
		{
			{0.0536f, 82.20f, 0.3416f},
			{0.0629f, 52.84f, 0.3602f},
			{0.0690f, 77.30f, 0.3168f},
			{0.0738f, 75.30f, 0.5093f},
			{0.0799f, 59.67f, 0.3106f},
			{0.1634f, 80.00f, 0.5652f},
			{0.1680f, 80.00f, 0.5714f},
		},
		{
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0063f, 71.46f},
			{0.0069f, 80.00f},
		},
		600.0f,
		18000.0f,
	},
	{
		"Gymnasium (Bright) - HD  ",
		7,
		7,
		{
			{0.0536f, 82.20f, 0.3416f},
			{0.0629f, 52.84f, 0.3602f},
			{0.0690f, 77.30f, 0.3168f},
			{0.0738f, 75.30f, 0.5093f},
			{0.0799f, 59.67f, 0.3106f},
			{0.1634f, 80.00f, 0.5652f},
			{0.1680f, 80.00f, 0.5714f},
		},
		{
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0063f, 71.46f},
			{0.0069f, 80.00f},
			{0.0121f, 80.00f},
			{0.0127f, 66.49f},
			{0.0137f, 88.21f},
		},
		600.0f,
		18000.0f,
	},
	{
		"    Hall (Small)",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.4783f},
			{0.0629f, 52.84f, 0.4348f},
			{0.0690f, 77.30f, 0.5000f},
			{0.0738f, 75.30f, 0.4500f},
			{0.0799f, 59.67f, 0.4500f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		8000.0f,
	},
	{
		"Hall (Medium)",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.4000f},
			{0.0629f, 52.84f, 0.4348f},
			{0.0690f, 77.30f, 0.5000f},
			{0.0738f, 75.30f, 0.4500f},
			{0.0799f, 59.67f, 0.4500f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		8000.0f,
	},
	{
		"         Hall (Large)",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.4000f},
			{0.0629f, 52.84f, 0.4348f},
			{0.0690f, 77.30f, 0.5000f},
			{0.0738f, 75.30f, 0.4500f},
			{0.0799f, 59.67f, 0.4500f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		8000.0f,
	},
	{
		"Hall (Large) - HD ",
		5,
		7,
		{
			{0.0536f, 82.20f, 0.4000f},
			{0.0629f, 52.84f, 0.4348f},
			{0.0690f, 77.30f, 0.5000f},
			{0.0738f, 75.30f, 0.4500f},
			{0.0799f, 59.67f, 0.4500f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0141f, 80.00f},
			{0.0133f, 57.19f},
			{0.0151f, 65.25f},
		},
		100.0f,
		8000.0f,
	},
	{
		"    Plate (Small)",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.3416f},
			{0.0629f, 52.84f, 0.3602f},
			{0.0690f, 77.30f, 0.3168f},
			{0.0738f, 75.30f, 0.5093f},
			{0.0799f, 59.67f, 0.3106f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		8000.0f,
	},
	{
		"Plate (Medium)",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.3416f},
			{0.0629f, 52.84f, 0.3602f},
			{0.0690f, 77.30f, 0.3168f},
			{0.0738f, 75.30f, 0.5093f},
			{0.0799f, 59.67f, 0.3106f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		8000.0f,
	},
	{
		"        Plate (Large)",
		7,
		4,
		{
			{0.0536f, 82.20f, 0.3416f},
			{0.0629f, 52.84f, 0.3602f},
			{0.0690f, 77.30f, 0.3168f},
			{0.0738f, 75.30f, 0.5093f},
			{0.0799f, 59.67f, 0.3106f},
			{0.0582f, 77.66f, 0.3416f},
			{0.0652f, 68.35f, 0.3106f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		8000.0f,
	},
	{
		"Plate (Large) - HD",
		7,
		6,
		{
			{0.0536f, 82.20f, 0.3416f},
			{0.0629f, 52.84f, 0.3602f},
			{0.0690f, 77.30f, 0.3168f},
			{0.0738f, 75.30f, 0.5093f},
			{0.0799f, 59.67f, 0.3106f},
			{0.0582f, 77.66f, 0.3416f},
			{0.0652f, 68.35f, 0.3106f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0126f, 70.84f},
			{0.0138f, 86.35f},
		},
		100.0f,
		8000.0f,
	},
	{
		"                 Pulse Chamber",
		4,
		4,
		{
			{0.0752f, 61.53f, 0.4000f},
			{0.0536f, 28.64f, 0.4000f},
			{0.0907f, 85.11f, 0.4000f},
			{0.0660f, 47.88f, 0.4000f},
		},
		{
			{0.0039f, 80.00f},
			{0.0043f, 70.84f},
			{0.0045f, 58.43f},
			{0.0049f, 43.53f},
		},
		50.0f,
		10000.0f,
	},
	{
		"Pulse Chamber (Reverse)",
		4,
		4,
		{
			{0.1742f, 47.26f, 0.4783f},
			{0.1526f, 23.06f, 0.1863f},
			{0.2021f, 72.08f, 0.4000f},
			{0.2175f, 90.07f, 0.4000f},
		},
		{
			{0.0039f, 80.00f},
			{0.0043f, 70.84f},
			{0.0045f, 58.43f},
			{0.0049f, 43.53f},
		},
		50.0f,
		10000.0f,
	},
	{
		"                            Resonator (96 ms)",
		4,
		2,
		{
			{0.0969f, 52.22f, 0.6149f},
			{0.0984f, 54.70f, 0.6025f},
			{0.1000f, 80.00f, 0.5217f},
			{0.1015f, 53.46f, 0.2671f},
		},
		{
			{0.0017f, 46.64f},
			{0.0021f, 47.88f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Resonator (152 ms)                           ",
		4,
		2,
		{
			{0.1526f, 52.22f, 0.6149f},
			{0.1541f, 65.87f, 0.6025f},
			{0.1557f, 80.00f, 0.5217f},
			{0.1572f, 53.46f, 0.2671f},
		},
		{
			{0.0075f, 46.64f},
			{0.0078f, 47.88f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Resonator (208 ms)",
		4,
		2,
		{
			{0.2082f, 52.22f, 0.6149f},
			{0.2098f, 54.70f, 0.6025f},
			{0.2113f, 80.00f, 0.5217f},
			{0.2129f, 53.46f, 0.2671f},
		},
		{
			{0.0075f, 46.64f},
			{0.0078f, 47.88f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Room (Small)           ",
		6,
		4,
		{
			{0.0536f, 82.20f, 0.4000f},
			{0.0629f, 75.80f, 0.5901f},
			{0.0690f, 77.30f, 0.5000f},
			{0.0738f, 75.30f, 0.4500f},
			{0.0799f, 59.67f, 0.4500f},
			{0.1170f, 74.56f, 0.4783f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Room (Medium)",
		6,
		4,
		{
			{0.0536f, 82.20f, 0.4000f},
			{0.0629f, 75.80f, 0.5901f},
			{0.0690f, 77.30f, 0.5000f},
			{0.0738f, 75.30f, 0.4500f},
			{0.0799f, 59.67f, 0.4500f},
			{0.1727f, 74.56f, 0.5590f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Room (Large)     ",
		6,
		4,
		{
			{0.0814f, 82.20f, 0.4000f},
			{0.0892f, 75.80f, 0.5901f},
			{0.0953f, 77.30f, 0.5000f},
			{0.1046f, 75.30f, 0.5714f},
			{0.1108f, 59.67f, 0.4500f},
			{0.1912f, 39.81f, 0.6832f},
		},
		{
			{0.0073f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Room (Large) - HD",
		6,
		6,
		{
			{0.0814f, 82.20f, 0.4000f},
			{0.0892f, 75.80f, 0.5901f},
			{0.0953f, 77.30f, 0.5000f},
			{0.1046f, 75.30f, 0.5714f},
			{0.1108f, 59.67f, 0.4500f},
			{0.1912f, 39.81f, 0.6832f},
		},
		{
			{0.0073f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0164f, 66.49f},
			{0.0181f, 56.57f},
		},
		100.0f,
		13000.0f,
	},
	{
		"Slap Chamber        ",
		5,
		4,
		{
			{0.1170f, 82.20f, 0.5466f},
			{0.1232f, 75.18f, 0.4907f},
			{0.1309f, 69.60f, 0.6335f},
			{0.1417f, 49.74f, 0.6957f},
			{0.1526f, 59.67f, 0.5528f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		1000.0f,
		10000.0f,
	},
	{
		"      Slap Chamber - HD",
		5,
		6,
		{
			{0.1170f, 82.20f, 0.5466f},
			{0.1232f, 75.18f, 0.4907f},
			{0.1309f, 69.60f, 0.6335f},
			{0.1417f, 49.74f, 0.6957f},
			{0.1526f, 59.67f, 0.5528f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0143f, 56.57f},
			{0.0153f, 66.49f},
		},
		1000.0f,
		10000.0f,
	},
	{
		"Slap Chamber (Bright) ",
		6,
		4,
		{
			{0.1170f, 82.20f, 0.6398f},
			{0.1232f, 75.18f, 0.7453f},
			{0.1309f, 69.60f, 0.6398f},
			{0.1417f, 49.74f, 0.6957f},
			{0.1526f, 59.67f, 0.7205f},
			{0.1634f, 84.49f, 0.7453f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		2000.0f,
		15000.0f,
	},
	{
		"Slap Chamber (Bright) - HD",
		6,
		6,
		{
			{0.1170f, 82.20f, 0.6398f},
			{0.1232f, 75.18f, 0.7453f},
			{0.1309f, 69.60f, 0.6398f},
			{0.1417f, 49.74f, 0.6957f},
			{0.1526f, 59.67f, 0.7205f},
			{0.1634f, 84.49f, 0.7453f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0128f, 80.00f},
			{0.0136f, 88.83f},
		},
		2000.0f,
		15000.0f,
	},
	{
		"Smooth Hall (Small)             ",
		5,
		4,
		{		
			{0.0536f, 82.20f, 0.6832f},
			{0.0629f, 73.94f, 0.6832f},
			{0.0690f, 61.53f, 0.7453f},
			{0.0738f, 75.30f, 0.7702f},
			{0.0799f, 59.67f, 0.8012f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		1000.0f,
		7000.0f,
	},
	{
		"Smooth Hall (Medium)",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.6832f},
			{0.0629f, 73.94f, 0.6832f},
			{0.0690f, 61.53f, 0.7453f},
			{0.0738f, 75.30f, 0.7702f},
			{0.0799f, 59.67f, 0.8012f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		1000.0f,
		7000.0f,
	},
	{
		"Smooth Hall (Large)     ",
		5,
		4,
		{
			{0.0536f, 82.20f, 0.6832f},
			{0.0629f, 73.94f, 0.6832f},
			{0.0690f, 61.53f, 0.7453f},
			{0.0738f, 75.30f, 0.7702f},
			{0.0799f, 59.67f, 0.8012f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
		},
		1000.0f,
		7000.0f,
	},
	{
		"Smooth Hall (Large) - HD",
		5,
		6,
		{
			{0.0536f, 82.20f, 0.6832f},
			{0.0629f, 73.94f, 0.6832f},
			{0.0690f, 61.53f, 0.7453f},
			{0.0738f, 75.30f, 0.7702f},
			{0.0799f, 59.67f, 0.8012f},
		},
		{
			{0.0067f, 65.00f},
			{0.0063f, 65.00f},
			{0.0058f, 65.00f},
			{0.0055f, 65.00f},
			{0.0122f, 80.00f},
			{0.0138f, 65.25f},
		},
		1000.0f,
		7000.0f,
	},
	{
		"Vocal Plate                       ",
		5,
		4,
		{
			{0.0505f, 70.22f, 0.4720f},
			{0.0582f, 80.76f, 0.4000f},
			{0.0629f, 65.25f, 0.4000f},
			{0.0892f, 80.00f, 0.6957f},
			{0.0953f, 52.84f, 0.7205f},
		},
		{
			{0.0044f, 65.00f},
			{0.0037f, 67.11f},
			{0.0057f, 80.00f},
			{0.0060f, 56.57f},
		},
		400.0f,
		10000.0f,
	},
	{
		" Vocal Plate - HD",
		5,
		6,
		{
			{0.0505f, 70.22f, 0.4720f},
			{0.0582f, 80.76f, 0.4000f},
			{0.0629f, 65.25f, 0.4000f},
			{0.0892f, 80.00f, 0.6957f},
			{0.0953f, 52.84f, 0.7205f},
		},
		{
			{0.0044f, 65.00f},
			{0.0037f, 67.11f},
			{0.0057f, 80.00f},
			{0.0060f, 56.57f},
			{0.0142f, 80.00f},
			{0.0151f, 59.67f},
		},
		400.0f,
		10000.0f,
	},
	{
		"Warble Chamber ",
		5,
		4,
		{
			{0.2051f, 52.84f, 0.7826f},
			{0.2082f, 68.35f, 0.7019f},
			{0.2113f, 80.00f, 0.6832f},
			{0.2206f, 83.25f, 0.7081f},
			{0.2237f, 67.73f, 0.5280f},
		},
		{
			{0.0067f, 65.00f},
			{0.0061f, 65.00f},
			{0.0059f, 65.00f},
			{0.0055f, 65.00f},
		},
		400.0f,
		10000.0f,
	},
	{
		"        Warehouse",
		6,
		5,
		{
			{0.0280f, 82.20f, 0.4720f},
			{0.0304f, 80.20f, 0.5652f},
			{0.0329f, 77.30f, 0.6211f},
			{0.0389f, 75.30f, 0.5217f},
			{0.0415f, 59.67f, 0.6522f},
			{0.0768f, 80.00f, 0.7702f},
		},
		{
			{0.0057f, 65.00f},
			{0.0062f, 65.00f},
			{0.0066f, 77.04f},
			{0.0050f, 65.00f},
			{0.0038f, 56.57f},
		},
		100.0f,
		10000.0f,
	},
	{
		"Warehouse - HD",
		6,
		7,
		{
			{0.0280f, 82.20f, 0.4720f},
			{0.0304f, 80.20f, 0.5652f},
			{0.0329f, 77.30f, 0.6211f},
			{0.0389f, 75.30f, 0.5217f},
			{0.0415f, 59.67f, 0.6522f},
			{0.0768f, 80.00f, 0.7702f},
		},
		{
			{0.0057f, 65.00f},
			{0.0062f, 65.00f},
			{0.0137f, 77.04f},
			{0.0050f, 65.00f},
			{0.0038f, 56.57f},
			{0.0147f, 60.91f},
			{0.0164f, 52.84f},
		},
		100.0f,
		10000.0f,
	},

	
	/* You can add your own presets here.
	 * Please read the docs about the format.
	 */




};

