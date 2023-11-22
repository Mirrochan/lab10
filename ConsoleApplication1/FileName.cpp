
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double angle(double a, double b, double c) {
    return acos((b * b + c * c - a * a) / (2 * b * c));
}

int main() {
    setlocale(0, ".1251");
    cout << "��������� ������ ������������ ������ a(0;0),b(12;11),c(-12;13)" << endl;
    cout << "��������� ������, ��������� �� ������� � �� ��������� � \n";

    Point a = { 0, 0 };
    Point b = { 12, 11 };
    Point c = { -12, 13 };


    double ab = distance(a, b);
    double bc = distance(b, c);
    double ca = distance(c, a);


    double angleA = angle(bc, ca, ab);
    double angleB = angle(ca, ab, bc);
    double angleC = angle(ab, bc, ca);


    double bisectorC = (2 * ab * bc * cos(angleC / 2)) / (ab + bc);


    double heightToBC = (2 * sqrt(ca * ab * (ca + ab - bc) * (ca + ab + bc))) / (ca + ab);


    // ��������� ����������

    std::cout << "������� ��������� �� ����� C: " << bisectorC << std::endl;
    std::cout << "������� ������ �� ������� BC: " << heightToBC << std::endl;


    return 0;
}