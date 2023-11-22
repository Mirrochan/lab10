
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;
	cout << "enter the task number(1 or 2)" << endl;
		cin >> number;
	switch(number)
	{case 1:
	{double alpha, beta;


	cout << "enter a: ";
	cin >> alpha;
	cout << "enter b: " << endl;
	cin >> beta;
	double z1 = sin(4 * alpha) * cos(2 * beta) / (1 + cos(4 * alpha)) * (1 + cos(2 * beta));

	cout << "z: " << z1;
	}

	 case 2:
	 { double alpha1;
	 cout << "Press a: ";
	 cin >> alpha1;
	 double pi = 4 * atan(1.0);
	 double z2 = 1 / 2 * tan(3 / 2  * pi- alpha1);
	 cout << "z2:: " << z2 << endl;
	 }

	}

}