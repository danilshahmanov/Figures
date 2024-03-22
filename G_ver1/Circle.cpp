#include "pch.h"
#include "Circle.h"
#include "Square.h"
#include <cmath>

using namespace System;
Circle::Circle(Rectangle canvas, int xCenter, int yCenter, int radius) : Figure(xCenter, yCenter) {
	if (IsOutOfBorders(canvas, xCenter, yCenter, radius))
		throw Figure::OutOfWindow();

	this->radius = radius;
}

int Circle::GetRadius() {
	return radius;
}

bool Circle::IsOutOfBorders(Rectangle canvas, int xCenter, int yCenter, int radius) {
	return xCenter - radius < canvas.Left || yCenter - radius < canvas.Top ||
		xCenter + radius > canvas.Right || yCenter + radius > canvas.Bottom;
}

void Circle::Draw(Graphics^ graphics) {
	graphics->FillEllipse(Brushes::Purple, x - radius, y - radius, 2*radius, 2*radius);
}

void Circle::Delete(Graphics^ graphics) {
	graphics->FillEllipse(Brushes::WhiteSmoke, x - radius, y - radius, 2*radius, 2*radius);
}

void Circle::CopyTo(Graphics^ graphics, Rectangle canvas, int xCenter, int yCenter) {
	if (IsOutOfBorders(canvas, xCenter, yCenter, radius))
		throw Figure::OutOfWindow();
	this->x = xCenter;
	this->y = yCenter;
	Draw(graphics);
}

void Circle::Move(Graphics^ graphics, Rectangle canvas, int xCenter, int yCenter) {
	if (IsOutOfBorders(canvas, xCenter, yCenter, radius))
		throw Figure::OutOfWindow();

	Delete(graphics);
	this->x = xCenter;
	this->y = yCenter;
	Draw(graphics);
}
