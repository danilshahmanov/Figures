#include "pch.h"
#include "Square.h"
#include <cmath>

using namespace System;


Square::Square(Rectangle canvas, int xCenter, int yCenter, int halfDiagonalLength) : Figure(xCenter, yCenter)
{
	if (IsOutOfBorders(canvas, xCenter, yCenter, halfDiagonalLength))
		throw Figure::OutOfWindow();

	this->halfDiagonalLength = halfDiagonalLength;
}

bool Square::IsOutOfBorders(Rectangle canvas, int xCenter, int yCenter, int halfDiagonalLength) {
	return xCenter - halfDiagonalLength / 2 < canvas.Left || yCenter - halfDiagonalLength / 2 < canvas.Top ||
		xCenter + halfDiagonalLength / 2 > canvas.Right || yCenter + halfDiagonalLength / 2 > canvas.Bottom;
}

int Square::GetHalfDiagonalLength() {
	return halfDiagonalLength;
}

void Square::Draw(Graphics^ graphics) {
	array<Point>^ points = {
		Point(x - halfDiagonalLength, y),
		Point(x, y + halfDiagonalLength),
		Point(x + halfDiagonalLength, y),
		Point(x, y - halfDiagonalLength)
	};
	graphics->FillPolygon(Brushes::HotPink, points);
}

void Square::Delete(Graphics^ graphics) {
	array<Point>^ points = {
		Point(x - halfDiagonalLength, y),
		Point(x, y + halfDiagonalLength),
		Point(x + halfDiagonalLength, y),
		Point(x, y - halfDiagonalLength)
	};
	graphics->FillPolygon(Brushes::WhiteSmoke, points);
}
void Square::CopyTo(Graphics^ graphics, Rectangle canvas, int xCenter, int yCenter) {
	if (IsOutOfBorders(canvas, xCenter, yCenter, halfDiagonalLength))
		throw Figure::OutOfWindow();
	this->x = xCenter;
	this->y = yCenter;
	Draw(graphics);
}

void Square::Move(Graphics^ graphics, Rectangle canvas, int xCenter, int yCenter) {

	if (IsOutOfBorders(canvas, xCenter, yCenter, halfDiagonalLength))
		throw Figure::OutOfWindow();

	Delete(graphics);
	this->x = xCenter;
	this->y = yCenter;
	Draw(graphics);
}
