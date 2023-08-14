#include <iostream>
using namespace std;

float a = 10, b = 15, c = 7, d = 1;
float e, f;
int g, h;

int main()
{
	e = a * b / c - d;
	f = b / 5 / 9 * a - d;
	g = (e > f) && (b != e);
	h = g << 30;
	cout << "Hasil a = " << a << endl;
	cout << "Hasil b = " << b << endl;
	cout << "Hasil c = " << c << endl;
	cout << "Hasil d = " << d << endl;
	cout << "Hasil e = " << e << endl;
	cout << "Hasil f = " << f << endl;
	cout << "Hasil g = " << g << endl;
	cout << "Hasil h = " << h << endl;
	
	return 0;
}

