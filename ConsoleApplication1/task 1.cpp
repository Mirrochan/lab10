

#include <iostream>
 using namespace std;

int main()
{
    setlocale( 0, ".1251");

    int task;
    std::cout << "enter the task number(1 or 2)";
    std::cin >> task;
    switch (task)
    { case 1:
    {
        std::cout << "Task 1: �������� ������� � ������ ���������� �������� �������� c1, c2, c3 ���/��..������� ������� t1, t2, t3 ��.��������.��� ���� ������ �������� �� ������ �� ����� ������� ������ � �� ����� ? ";
        double c1, c2, c3;
        double t1, t2, t3;

        cout << "Enter c1: " << endl;
        cin >> c1;
        cout << "Enter c2: " << endl;
        cin >> c2;
        cout << "Enter c3: " << endl;
        cin >> c3;

        cout << "Enter t1: " << endl;
        cin >> t1;
        cout << "Enter t2: " << endl;
        cin >> t2;
        cout << "Enter t3: " << endl;
        cin >> t3;

        //------------------------- 

        double firstCall = c1 * t1;
        cout << "first phone call cost: " << firstCall << endl;

        double secondCall = c2 * t2;
        cout << "second phone call cost: " << secondCall << endl;

        double thirdCall = c3 * t3;
        cout << "third phone call cost: " << thirdCall << endl;

        double sumOfCalls;
        sumOfCalls = firstCall + secondCall + thirdCall;
        cout << "sum of calls cost: " << sumOfCalls << endl;
    }

     case 2:
      { cout << "Task 2:��������� ������� ������, ���� ���� ���� �������� ������� �� 10%, � ���� �������� �� 15%." << endl;
     cout << "Enter initial price " << endl;
     double initialPrice, secondaryPrice;
     cin >> initialPrice;
     secondaryPrice = initialPrice - initialPrice * 0.1;
     secondaryPrice = secondaryPrice + secondaryPrice * 0.15;
     cout << "secondary price:" << secondaryPrice << endl;
     }
    }

}
