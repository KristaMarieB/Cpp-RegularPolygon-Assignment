#include "RegularPolygon.h"



RegularPolygon::RegularPolygon()
{
	// Creates default polygon using default values
}

RegularPolygon::RegularPolygon(int n, double side, double x, double y) 
{
	// Custom polygon constructor
}

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


RegularPolygon::~RegularPolygon()
{
}
