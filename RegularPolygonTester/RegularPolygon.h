#pragma once
#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon
{
public:
	// constructors 
	RegularPolygon(int = 3, double = 1, double = 0, double =0); // default
	RegularPolygon(int, double, double, double); // custom

	// getters & setters
	void set_n(int); // n is the length of a side
	int get_n() const;

	void set_side(double); 
	double get_side() const;

	void set_x(double);
	double get_x() const;

	void set_y(double);
	double get_y() const;

	// other methods
	double getPerimeter(int, double);

	~RegularPolygon();

private:
	int n;			// length of a side
	double side;	// number of sides
	double x;		// x-coordinate of polygon's center		
	double y;		// y-coordinate of polygon's center
};

#endif