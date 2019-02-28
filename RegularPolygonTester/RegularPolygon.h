#pragma once
class RegularPolygon
{
public:
	RegularPolygon();

	// getters & setters
	void set_n(int); // n is the length of a side
	int get_n() const;

	void set_side(double); // side is the number of sides
	double get_side() const;

	void set_x(double);
	double get_x() const;

	void set_y(double);
	double get_y() const;

	// other methods
	double getPerimeter(int, double);

	~RegularPolygon();

private:
	int n = 3;
	double side = 1;
	double x = 0;
	double y = 0;
};

