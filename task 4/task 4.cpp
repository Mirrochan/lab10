
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double const e = 2, b = 3; double c;
	cout << "Enter c";
	cin >> c;
	double a = pow(sin(b), 5);
	cout << "  a=" << a;
	double x=a* pow(c, 3);
	cout << "  x=" << x;

	double y = exp(sqrt(abs(x)) + cos(x));
	cout << "  Y=" << y;
}