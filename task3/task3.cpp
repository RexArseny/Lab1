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

double f(double x)
{
    const int pi = 3.14;
    return sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
}