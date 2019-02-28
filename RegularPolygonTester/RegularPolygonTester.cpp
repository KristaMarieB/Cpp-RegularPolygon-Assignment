#include <cstdlib>
#include <iostream>

#include "RegularPolygon.h"

using namespace std;

int main() {

	cout << "Regular Polygon Tester Program" << endl << endl;
	RegularPolygon rp1;
	RegularPolygon rp2(5, 3.5);
	RegularPolygon rp3(15);
	RegularPolygon rp4(7, 6.5, 0, 0);
	RegularPolygon rp5;
	rp5.set_n(10);
	rp5.set_side(22);
	
	int testN = rp1.get_n();
	double testSide = rp1.get_side();
	double testX = rp1.get_x();
	double testY = rp1.get_y();
	double testP = rp1.getPerimeter(testN, testSide);

	cout << "Polygon 1" << endl;
	cout << "Number of sides: " << testN << endl;
	cout << "Length of sides: " << testSide << endl;
	cout << "X-Coordinate: " << testX << endl;
	cout << "Y-Coordinate: " << testY << endl;
	cout << "Perimeter: " << testP << endl << endl;

	testN = rp2.get_n();
	testSide = rp2.get_side();
	testX = rp2.get_x();
	testY = rp2.get_y();
	testP = rp2.getPerimeter(testN, testSide);

	cout << "Polygon 2" << endl;
	cout << "Number of sides: " << testN << endl;
	cout << "Length of sides: " << testSide << endl;
	cout << "X-Coordinate: " << testX << endl;
	cout << "Y-Coordinate: " << testY << endl;
	cout << "Perimeter: " << testP << endl << endl;

	testN = rp3.get_n();
	testSide = rp3.get_side();
	testX = rp3.get_x();
	testY = rp3.get_y();
	testP = rp3.getPerimeter(testN, testSide);

	cout << "Polygon 3" << endl;
	cout << "Number of sides: " << testN << endl;
	cout << "Length of sides: " << testSide << endl;
	cout << "X-Coordinate: " << testX << endl;
	cout << "Y-Coordinate: " << testY << endl;
	cout << "Perimeter: " << testP << endl << endl;

	testN = rp4.get_n();
	testSide = rp4.get_side();
	testX = rp4.get_x();
	testY = rp4.get_y();
	testP = rp4.getPerimeter(testN, testSide);

	cout << "Polygon 4" << endl;
	cout << "Number of sides: " << testN << endl;
	cout << "Length of sides: " << testSide << endl;
	cout << "X-Coordinate: " << testX << endl;
	cout << "Y-Coordinate: " << testY << endl;
	cout << "Perimeter: " << testP << endl << endl;

	cout << "Polygon 5" << endl;
	cout << "Number of sides: " << rp5.get_n() << endl;
	cout << "Length of sides: " << rp5.get_side() << endl;
	cout << "X-Coordinate: " << rp5.get_x() << endl;
	cout << "Y-Coordinate: " << rp5.get_y() << endl;
	cout << "Perimeter: " << rp5.getPerimeter(rp5.get_n(), rp5.get_side()) << endl << endl;

	system("pause");
	return 1;
}