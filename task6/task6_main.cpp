#include <iostream>
using namespace std;

double x, rezult;

void f();

void main()
{
    setlocale(LC_ALL, "ru");

    int a;

    cout << "������� 1, ���� ���� ������������ ���������. ������� ����� ������ ��������, ���� ���� ������� ��������." << endl;
    cin >> a;
    if (a == 1)
    {
        x = 1;
        cout << rezult;
    }
    else
    {
        cout << "������� �������� x" << endl;
        cin >> x;
        cout << rezult;
    }
}