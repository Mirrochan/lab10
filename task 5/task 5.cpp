

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double y, k;

  
    cout << "Press k: ";
    cin >> k;
    cout << "Press y: ";
    cin >> y;
   double a = log(y + k) + 3 * pow(y, 2);
   double b = y + k;

    // �������� ������ ���������� ������
    if ( a=0 || b<0)  {
        cout << "����� �� ���������� ��� ������ �������� y." << endl;
    }

    double value = (sqrt(sin(y) * sin(y) + 6.835))/ (log(y + k) + 3 * pow(y, 2));

    cout << "result: " << value;

 }


