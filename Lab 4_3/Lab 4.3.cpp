#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double x, a, b, c, xp, xk, dx, B, y;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "--------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "--------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + 5 < 0 && c == 0)
			y = (1 / (a * x)) - b;
		else
			if (x + 5 > 0 && c != 0)
				y = ((x - a) / x);
			else
				y = ((10 * x) / (c - 4));

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "-----------------------" << endl;
}