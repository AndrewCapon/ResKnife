#include "PICT Editor.h"typedef class PictWindow	PictWindow, *PictWindowPtr;/*** PICT WINDOW ***/class PictWindow{	WindowRef	window;	Rect		rect;		// size of picture, { 0, 0, x, y }	public:				PictWindow( WindowRef newWindow );};