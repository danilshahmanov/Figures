#include "pch.h"
#include "Figure.h"

using namespace System;

Figure::Figure(int xCenter, int yCenter) : x(xCenter), y(yCenter) {};

int Figure::GetXCenterCoordinate() {
	return x;
}

int Figure::GetYCenterCoordinate() {
	return y;
}