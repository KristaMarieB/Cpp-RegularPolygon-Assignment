#include "RegularPolygon.h"



RegularPolygon::RegularPolygon(int n, double side, double x, double y)
{
	set_n(n);
	set_side(side);
	set_x(x);
	set_y(y);

}

//RegularPolygon::RegularPolygon(int n, double side, double x, double y) 
//{
//	this->n = n;
//	this->side = side;
//	this->x = x;
//	this->y = y;
//}

void RegularPolygon::set_n(int n) 
{
	this->n = n;
}

int RegularPolygon::get_n() const 
{
	return n;
}

void RegularPolygon::set_side(double side) 
{
	this->side = side;
}

double RegularPolygon::get_side() const
{
	return side;
}

void RegularPolygon::set_x(double x)
{
	this->x = x;
}

double RegularPolygon::get_x() const
{
	return x;
}

void RegularPolygon::set_y(double y)
{
	this->y = y;
}

double RegularPolygon::get_y() const
{
	return y;
}

double RegularPolygon::getPerimeter(int n, double side)
{
	return n * side;
}

RegularPolygon::~RegularPolygon()
{
}
