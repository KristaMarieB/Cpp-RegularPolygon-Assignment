#pragma once
class RegularPolygon
{
public:
	RegularPolygon();

	// getters & setters
	void set_n(int);
	int get_n() const;

	void set_side(double);
	double get_side() const;

	void set_x(double);
	double get_x() const;

	void set_y(double);
	double get_y() const;

	~RegularPolygon();

private:
	int n = 3;
	double side = 1;
	double x = 0;
	double y = 0;
};

