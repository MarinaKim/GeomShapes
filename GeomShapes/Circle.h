#pragma once
#include"Shape.h"
#define PI 3.14
class Circle:public Shape{
	double R;
public:
	Circle() = default;
	Circle(double x, double y, double R):Shape(x,y),R(R){}
	double area() override { //��������: ���� �� � ������������ ������ ���� �����
		return (PI*R*R);
	}
};