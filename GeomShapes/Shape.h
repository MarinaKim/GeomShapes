#pragma once
#include"Library.h"

class Shape{
protected:
	double x,y;
public:
	Shape() = default;
	Shape(double x, double y): x(x),y(y){}
	virtual double area() = 0; //virtual- класс абстрактный, если не переuгрузим в дочернем классе, то дочерний тоже будет абстрактным
	virtual void move(double x, double y) final; //нельзя перегружать в дочернем класс
};

void Shape::move(double x, double y) {
	this->x += x;
	this->y += y;
}