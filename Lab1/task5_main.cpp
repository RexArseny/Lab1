#include <iostream>
#include <cmath>
using namespace std;

double f(double x);

void main()
{
    setlocale(LC_ALL, "ru");

    int a;
    double x;

    cout << "������� 1, ���� ���� ������������ ���������. ������� ����� ������ ��������, ���� ���� ������� ��������." << endl;
    cin >> a;
    if (a == 1)
    {
        x = 1;
        cout << f(x);
    }
    else
    {
        cout << "������� �������� x" << endl;
        cin >> x;
        cout << f(x);
    }
}