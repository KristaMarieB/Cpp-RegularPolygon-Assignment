#include <cstdlib>
#include <iostream>

#include "RegularPolygon.h"

using namespace std;

int main() {

	cout << "Regular Polygon Tester Program" << endl;
	RegularPolygon rp1;
	RegularPolygon rp2(5, 3.5, 0, 0);
	int testn1 = rp1.get_n();
	int testn2 = rp2.get_n();

	cout << "The Length of polygon 1's sides: " << testn1 << endl;
	cout << "The Length of polygon 2's sides: " << testn2 << endl;

	system("pause");
	return 1;
}