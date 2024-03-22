#pragma once
#include "Figure.h"
#include "Circle.h"
#include "Square.h"

using namespace System;

class ComplexFigure : public Figure
{
private:
	Square* square;
	Circle* circle;
public:

	ComplexFigure(Rectangle, Square*, Circle*);
	void Draw(Graphics^) override;
	void Delete(Graphics^) override;
	void Move(Graphics^, Rectangle, int, int) override;
	bool CanBeCreated(Square*, Circle*);
	class Outofsquare {};
};