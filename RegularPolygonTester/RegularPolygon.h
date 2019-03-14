#pragma once
#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon
{
public:
	// constructors 
	// no-arg
	RegularPolygon(); 
	// standard 
	RegularPolygon(int, double, double, double);

	// getters & setters
	void set_n(int); 
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
	int n;			// number of sides
	double side;	// length of a side
	double x;		// x-coordinate of polygon's center		
	double y;		// y-coordinate of polygon's center
};

#endif