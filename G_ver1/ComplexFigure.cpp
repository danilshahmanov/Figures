#include "pch.h"
#include "Figure.h"
#include "Circle.h"
#include "Square.h"
#include "ComplexFigure.h"

using namespace System;

ComplexFigure::ComplexFigure(Rectangle canvas, Square* square, Circle* circle) : Figure(square->GetXCenterCoordinate(), square->GetYCenterCoordinate()), square(square), circle(circle)
{
	if (!CanBeCreated(square, circle))
		throw Outofsquare();
};

bool ComplexFigure::CanBeCreated(Square* square, Circle* circle) {
	return square->GetXCenterCoordinate() == circle->GetXCenterCoordinate() &&
		square->GetYCenterCoordinate() == circle->GetYCenterCoordinate() &&
		square->GetHalfDiagonalLength() == circle->GetRadius();

}

void ComplexFigure::Draw(Graphics^ graphics) {
	circle->Draw(graphics);
	square->Draw(graphics);
}

void ComplexFigure::Delete(Graphics^ graphics) {
	square->Delete(graphics);
	circle->Delete(graphics);
}

void ComplexFigure::Move(Graphics^ graphics, Rectangle canvas, int xCenter, int yCenter) {
	square->Delete(graphics);
	circle->Delete(graphics);
	circle->CopyTo(graphics, canvas, xCenter, yCenter);
	square->CopyTo(graphics, canvas, xCenter, yCenter);
}