#include <SFML/Graphics.hpp>
#include "Cvijet.h"


using namespace sf;

Cvijet::Cvijet(RenderWindow* w)
{
	this->window = w;
}

void Cvijet::make_frame()
{
	RectangleShape lineL(Vector2f(400.f, 5.f));
	lineL.setPosition(20, 5);
	lineL.rotate(90);
	window->draw(lineL);

	RectangleShape lineR(Vector2f(400.f, 5.f));
	lineR.setPosition(400, 5);
	lineR.rotate(90);
	window->draw(lineR);

	RectangleShape lineUp(Vector2f(380.f, 5.f));
	lineUp.setPosition(20, 5);
	lineUp.rotate(0);
	window->draw(lineUp);

	RectangleShape lineDo(Vector2f(380.f, 5.f));
	lineDo.setPosition(20, 400);
	lineDo.rotate(0);
	window->draw(lineDo);
}

void Cvijet::make_shape()
{
	CircleShape shape(50.f, 7);
	shape.setPosition(100, 100);
	shape.setOutlineThickness(20.f);
	shape.setOutlineColor(Color(255, 0, 0));
	shape.setFillColor(Color(255, 255, 0));
	window->draw(shape);
	
}

void Cvijet::make_line()
{
	RectangleShape line(Vector2f(150.f, 5.f));
	line.setPosition(152, 215);
	line.rotate(90);
	line.setFillColor(Color(0, 255, 0));
	window->draw(line);
}

void Cvijet::make_convex()
{
	ConvexShape convex;
	convex.setPointCount(4);
	convex.setPoint(0, Vector2f(150.f, 300.f));
	convex.setPoint(1, Vector2f(200.f, 260.f));
	convex.setPoint(2, Vector2f(350.f, 230.f));
	convex.setPoint(3, Vector2f(210.f, 305.f));
	convex.setFillColor(Color(0, 255, 0));
	window->draw(convex);
}

void Cvijet::draw()
{
	make_shape();
	make_convex();
	make_line();
}
